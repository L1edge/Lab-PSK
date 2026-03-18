#include "project.h"

// --- УНІФІКОВАНИЙ ВИВІД (Хелпер) ---
// Логіка Active-Low: 0 = світиться, 1 = вимкнено
void SetLED(uint8_t r, uint8_t g, uint8_t b) {
    LED_R_Write(r);
    LED_G_Write(g);
    LED_B_Write(b);
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    // Запуск UART для дебагу
    SW_Tx_UART_Start();
    SW_Tx_UART_PutString("\r\n--- Lab 2: Yellow / Blue Blink Started ---\r\n");

    uint8_t button_state = 1;
    uint8_t last_button_state = 1;
    
    uint8_t color_mode = 0; // 0 = Yellow, 1 = Blue
    uint8_t led_is_on = 0;  // Поточний стан (світиться чи ні під час миготіння)
    uint16_t timer = 0;     // Лічильник для формування затримки миготіння

    // Початковий стан: світлодіоди вимкнені
    SetLED(1, 1, 1);

    for(;;)
    {
        button_state = Button_Read();

        // --- ВІДЛОВЛЮВАННЯ НАТИСКАННЯ КНОПКИ ---
        if (button_state == 0 && last_button_state == 1) // Якщо щойно натиснули
        {
            color_mode = !color_mode; // Перемикаємо режим: 0 -> 1, або 1 -> 0
            
            if (color_mode == 0) {
                SW_Tx_UART_PutString("Mode changed: Blinking YELLOW\r\n");
            } else {
                SW_Tx_UART_PutString("Mode changed: Blinking BLUE\r\n");
            }
            
            // Одразу вмикаємо діод новим кольором для миттєвої реакції
            led_is_on = 1; 
            timer = 0; // Скидаємо таймер, щоб миготіння почалося заново
        }
        last_button_state = button_state;


        // --- ЛОГІКА НЕБЛОКУЮЧОГО МИГОТІННЯ ---
        // Замість CyDelay(500), ми робимо 50 дрібних кроків по 10 мс
        timer++;
        if (timer >= 50) 
        {
            timer = 0; // Скидаємо лічильник
            led_is_on = !led_is_on; // Перемикаємо: увімкнути <-> вимкнути
        }

        // --- ЗАСТОСУВАННЯ КОЛЬОРУ ---
        if (led_is_on) {
            if (color_mode == 0) {
                SetLED(0, 0, 1); // Yellow (Червоний + Зелений увімкнені, Синій вимкнено)
            } else {
                SetLED(1, 1, 0); // Blue (Тільки Синій увімкнено)
            }
        } else {
            SetLED(1, 1, 1); // Black (Повністю вимкнено на фазі "темряви")
        }

        // Дрібна затримка для стабільності та антидребізгу
        CyDelay(10); 
    }
}
