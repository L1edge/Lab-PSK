# PSoC 4: Non-blocking Delay & UART Logging (Lab 2)

## English Version
### Project Overview
This laboratory work focuses on implementing a non-blocking delay architecture and edge-detection for hardware interrupts on the PSoC 4 platform. It controls an RGB LED's blinking patterns and logs state changes via UART without freezing the microcontroller's main loop.

### Key Features
* **Non-blocking Blinking:** Replaced standard `CyDelay()` functions with a counter-based timer approach to allow continuous monitoring of button states.
* **Edge Detection:** Implemented a `last_state` variable to register physical button clicks only once per press, preventing state-toggling spam.
* **UART Debugging:** Transmits real-time mode changes to a serial terminal at 115200 baud.
* **Active-Low RGB Control:** Implements an abstracted `SetLED(r,g,b)` function to simplify hardware-level pin control.

---

## Українська версія
### Опис проекту
Ця лабораторна робота присвячена реалізації архітектури неблокуючих затримок та відловлюванню фронту (edge-detection) для апаратних кнопок на платформі PSoC 4. Проект керує режимами миготіння RGB-світлодіода та логує зміни станів через UART без "заморожування" головного циклу мікроконтролера.

### Основний функціонал
* **Неблокуюче миготіння:** Стандартні функції `CyDelay()` замінено на підхід з таймером-лічильником, що дозволяє безперервно моніторити стан кнопок.
* **Відловлювання фронту:** Використано змінну `last_state` для реєстрації фізичного кліку лише один раз за натискання, що запобігає множинним спрацьовуванням.
* **UART Дебаг:** Передача інформації про зміну режимів у реальному часі на термінал (швидкість 115200 бод).
* **Інвертована логіка RGB:** Реалізовано абстраговану функцію `SetLED(r,g,b)` для спрощення керування пінами на апаратному рівні.
