PSoC 4 Button-Controlled LED Project
English Version
Project Overview

This repository contains Laboratory Work #1 for the Computer Systems and Networks course. The project demonstrates basic GPIO interaction using the PSoC 4 platform, specifically controlling an LED's state via a mechanical user button.
Hardware Specifications

    Development Kit: CY8CKIT-042 PSoC 4 Pioneer Kit.

    Microcontroller: CY8C4245AXI-483.

    Pin Mapping:

        User Button: Connected to Port P0[7].

        LED: Connected to Port P1[6] (Red), P0[2] (Green), or P0[3] (Blue).

Component Configuration

    Button (Input): Configured as Digital Input with Resistive pull up drive mode. Initial state is High (1).

    LED (Output): Configured as Digital Output with Strong drive mode. Initial state is Low (0) (ON).

Logic Explanation

The project utilizes Active-Low logic:

    The button returns 1 when released and 0 when pressed due to the internal pull-up resistor.

    The LED turns ON when the pin is set to 0 and OFF when set to 1 .

Українська версія
Опис проекту

Цей репозиторій містить результати виконання лабораторної роботи №1. Проект демонструє базову взаємодію з портами введення-виведення (GPIO) на платформі PSoC 4, а саме керування станом світлодіода за допомогою механічної кнопки.
Апаратне забезпечення

    Налагоджувальна плата: CY8CKIT-042 PSoC 4 Pioneer Kit.

    Мікроконтролер: CY8C4245AXI-483.

    Прив'язка пінів:

        Кнопка (User Button): Порт P0[7].

        Світлодіод (LED): Порт P1[6] (Червоний), P0[2] (Зелений) або P0[3] (Синій).

Конфігурація компонентів

    Кнопка (Вхід): Цифровий вхід (Digital Input) з режимом Resistive pull up. Початковий стан — High (1).

    Світлодіод (Вихід): Цифровий вихід (Digital Output) з режимом Strong drive. Початковий стан — Low (0) (Увімкнено).

Логіка роботи

У проекті реалізовано інвертовану логіку (Active-Low):

    Кнопка повертає 1 у стані спокою та 0 при натисканні (через підтягуючий резистор).

    Світлодіод засвічується при подачі 0 на пін і гасне при подачі 1 .

Software / Програмне забезпечення

    PSoC Creator 4.4.

    ARM GCC Compiler.
