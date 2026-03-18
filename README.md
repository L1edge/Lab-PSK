# PSoC 4: Shift Registers (74HC595) & 7-Segment Displays (Lab 4)

## English Version
### Project Overview
This laboratory work focuses on serial-to-parallel data conversion using cascaded shift registers (74HC595). The PSoC 4 reads inputs from a 4x3 matrix keypad and transmits the corresponding multiplexed byte via software bit-banging (`Data`, `Clock`, and `Latch` pins) to control a multi-digit 7-segment display.

### Key Features
* **Bit-banging SPI:** Implemented a custom `ShiftOut()` protocol to manually toggle GPIO states according to the 74HC595 shift register timing requirements.
* **Cascaded Registers:** Sends a 16-bit payload (2 bytes) where the first byte selects the active digit (position), and the second byte defines the active segments.
* **Hex Mapping:** Translates logical keypad indices into 8-bit hex masks formatted for a common-anode/cathode 7-segment display.

---

## Українська версія
### Опис проекту
Ця лабораторна робота присвячена перетворенню послідовних даних у паралельні за допомогою каскадно з'єднаних зсувних регістрів (74HC595). PSoC 4 зчитує натискання з матричної клавіатури та передає відповідний мультиплексований байт через програмний інтерфейс (`Data`, `Clock` та `Latch`) для керування 7-сегментним індикатором.

### Основний функціонал
* **Програмний SPI (Bit-banging):** Реалізовано кастомний протокол `ShiftOut()` для ручного керування станами портів згідно з таймінгами регістра 74HC595.
* **Каскадні регістри:** Передача 16-бітного пакету (2 байти), де перший байт вибирає активний розряд (позицію), а другий — визначає активні сегменти індикатора.
* **Мапа символів (Hex):** Індекси кнопок конвертуються у 8-бітні шістнадцяткові маски, розраховані для керування сегментами.
