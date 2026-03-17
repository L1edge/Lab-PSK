# 🎓 PSoC 4 Embedded Systems Laboratory Works

## English Version
### Overview
This repository contains a collection of laboratory projects developed for the **Computer Systems and Networks** course. All projects are built on the **Cypress PSoC 4** architecture using the `CY8CKIT-042 Pioneer Kit`. The repository demonstrates a progressive learning curve in embedded systems programming in C, from basic GPIO control to advanced hardware interrupts and serial communication.

### Laboratory Index
* **Lab 1: GPIO & Active-Low Logic** * Basic configuration of Digital Inputs (Resistive pull-up) and Outputs (Strong drive).
  * Interaction between a mechanical button and an onboard RGB LED.
* **Lab 3: Matrix Keypad & State Machines**
  * Scanning a 4x3 matrix keypad.
  * Debouncing algorithms and RGB color mixing via `switch(case)` logic.
  * UART integration for serial debugging and password validation logging.
* **Lab 4: Shift Registers (74HC595)**
  * Bit-banging implementation of SPI-like communication.
  * Serial-to-parallel data conversion to control 7-segment displays.
* **Lab 5: Timers, Interrupts & Dynamic Indication**
  * Hardware timer configuration and ISR (Interrupt Service Routine) handling.
  * Multiplexing multi-digit displays (dynamic indication) to optimize MCU pin usage.
  * Integration with Saleae Logic Analyzer for signal verification.

### Tools & Software
* **IDE:** PSoC Creator 4.4
* **Compiler:** ARM GCC 5.4.1
* **Hardware:** CY8C4245AXI-483 (Cortex-M0)
* **Debugging:** Saleae Logic 2, PuTTY/Tera Term

---

## Українська версія
### Опис репозиторію
Цей репозиторій містить колекцію лабораторних проєктів, розроблених у рамках курсу **«Комп'ютерні системи та мережі»**. Усі проєкти базуються на архітектурі **Cypress PSoC 4** з використанням налагоджувальної плати `CY8CKIT-042 Pioneer Kit`. Репозиторій демонструє поступове освоєння програмування вбудованих систем мовою C: від базового керування портами до апаратних переривань та послідовних інтерфейсів.

### Зміст лабораторних робіт
* **Лаб. 1: GPIO та Інвертована логіка**
  * Базова конфігурація цифрових входів (Resistive pull-up) та виходів (Strong drive).
  * Керування RGB-світлодіодом за допомогою механічної кнопки.
* **Лаб. 3: Матрична клавіатура та Скінченні автомати**
  * Сканування матричної клавіатури 4x3.
  * Алгоритми антидребізгу та міксування кольорів RGB через `switch(case)`.
  * Використання UART для логування подій та перевірки паролів.
* **Лаб. 4: Зсувні регістри (74HC595)**
  * Програмна реалізація протоколу SPI (bit-banging).
  * Перетворення послідовних даних у паралельні для керування 7-сегментними індикаторами.
* **Лаб. 5: Таймери, Переривання та Динамічна індикація**
  * Налаштування апаратних таймерів та обробників переривань (ISR).
  * Мультиплексування багаторозрядних індикаторів (динамічна індикація) для економії пінів мікроконтролера.
  * Робота з логічним аналізатором Saleae Logic для перевірки сигналів.

### Програмне забезпечення та Інструменти
* **IDE:** PSoC Creator 4.4
* **Компілятор:** ARM GCC 5.4.1
* **Апаратна платформа:** CY8C4245AXI-483 (Cortex-M0)
* **Налагодження:** Saleae Logic 2, PuTTY / Tera Term
