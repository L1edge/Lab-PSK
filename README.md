# PSoC 4: Matrix Keypad & Digital Lock (Lab 3)

## English Version
### Project Overview
This project implements a 4x3 matrix keypad scanner on the PSoC 4 platform. It features an RGB LED state manager using a `switch(case)` structure to mix colors based on the pressed key, and a basic digital lock mechanism that validates a 4-digit password, logging the results via UART.

### Key Features
1.  **Matrix Multiplexing:** Configured columns as `Strong drive` and rows as `Resistive pull up` to scan a 12-button matrix using only 7 GPIO pins.
2.  **Color Mixing (`switch/case`):** Maps specific keypad numbers to RGB color combinations (e.g., Yellow, Purple, Cyan) using Active-Low logic.
3.  **Password Verification:** Buffers keystrokes into a character array and compares them against a predefined PIN using `strcmp()`. Outputs access status (`GRANTED` / `WRONG PASSWORD`) to the serial console.

---

## Українська версія
### Опис проекту
Проект реалізує сканер матричної клавіатури 4x3. Включає керування RGB-світлодіодом за допомогою конструкції `switch(case)` для змішування кольорів залежно від натиснутої кнопки, а також механізм цифрового замка, який перевіряє 4-значний пароль і виводить результати через UART.

### Основний функціонал
1.  **Мультиплексування матриці:** Стовпці налаштовано як `Strong drive`, а рядки як `Resistive pull up` для сканування 12 кнопок за допомогою лише 7 пінів.
2.  **Міксування кольорів (`switch/case`):** Прив'язка кнопок до комбінацій RGB (Жовтий, Фіолетовий, Блакитний) з використанням інвертованої логіки.
3.  **Перевірка пароля:** Збір натискань у масив символів та їх порівняння з еталонним PIN-кодом (через `strcmp()`). Виведення статусу доступу в послідовну консоль.
