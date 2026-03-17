PSoC 4: RGB LED Control and UART Logging
English Version
Project Overview

This repository contains an enhanced version of Laboratory Work #1 for the Computer Systems and Networks course. The project demonstrates advanced GPIO interaction and real-time debugging using Software Transmit UART on the PSoC 4 platform. It features state-tracking logic to monitor a physical button and control an RGB LED.

Hardware Specifications

    Development Kit: CY8CKIT-042 PSoC 4 Pioneer Kit.

    Microcontroller: CY8C4245AXI-483.

    Pin Mapping:

        User Button: Port P0[7].

        RGB LED (Red): Port P0[6].

        RGB LED (Green): Port P0[2].

        RGB LED (Blue): Port P0[3].

        UART TX: Configured via Software Transmit UART component.

Component Configuration

    Button (Input): Digital Input with Resistive pull up drive mode. Initial state is High (1).

    LEDs (Output): Digital Output with Strong drive mode. Initial state is Low (0) (ON).

    UART: Software Transmit UART (v1.50) for serial communication at 115200 baud (default).

Logic and Communication

The project utilizes Active-Low logic for both inputs and outputs. A state-tracking algorithm (last_state) is implemented to detect edges:

    Button Pressed (1 -> 0): UART sends "Button pressed", and all RGB channels are turned OFF (1).

    Button Released (0 -> 1): UART sends "Button released", and all RGB channels are turned ON (0).


Українська версія
Опис проекту

Цей репозиторій містить вдосконалену версію лабораторної роботи №1. Проект демонструє розширену взаємодію з GPIO та налагодження у реальному часі за допомогою Software Transmit UART на платформі PSoC 4. Реалізовано логіку відстеження стану для моніторингу фізичної кнопки та керування RGB-світлодіодом.
Апаратне забезпечення

    Налагоджувальна плата: CY8CKIT-042 PSoC 4 Pioneer Kit.

    Мікроконтролер: CY8C4245AXI-483.

    Прив'язка пінів:

        Кнопка (User Button): Порт P0[7].

        Світлодіод (Red): Порт P0[6].

        Світлодіод (Green): Порт P0[2].

        Світлодіод (Blue): Порт P0[3].

        UART TX: Через компонент Software Transmit UART.

Конфігурація компонентів

    Кнопка (Вхід): Digital Input з режимом Resistive pull up. Початковий стан — High (1).

    Світлодіоди (Вихід): Digital Output з режимом Strong drive. Початковий стан — Low (0) (Увімкнено).

    UART: Software Transmit UART (v1.50) для передачі текстових повідомлень на швидкості 115200 бод.
<img width="3999" height="3999" alt="зображення" src="https://github.com/user-attachments/assets/11558ece-a796-4cb2-9e49-be877f97278d" />

Логіка роботи та комунікація

У проекті використано інвертовану логіку (Active-Low). Алгоритм відстеження стану (last_state) реалізований для детекції моментів натискання:

    Натискання (1 -> 0): UART надсилає "Button pressed", усі канали RGB вимикаються (1).

    Відпускання (0 -> 1): UART надсилає "Button released", усі канали RGB вмикаються (0).

Software / Програмне забезпечення

    PSoC Creator 4.4.

    ARM GCC Compiler.

    Serial Terminal (PuTTY / Tera Term) for UART monitoring.
