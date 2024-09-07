

# Bluetooth car on Arduino

## Contents

* [Project capabilities](#chapter-1)
* [Details and links for purchase](#chapter-2)
* [Scheme and connection](#chapter-3)

<a id="chapter-1"/>

## Project capabilities

+ Controlling motors using a tank scheme

+ Application for phone


<a id="chapter-2"/>

## Details and links for purchase

+ Arduino Nano [ссылка](https://clck.ru/324jT7)

+ HC-06 [ссылка](https://clck.ru/32DToc)

+ TB6612 [ссылка](https://clck.ru/32DTxb)

+ Motor with gearbox 1:90 for Arduino  [ссылка](https://clck.ru/32DTyg)

+ Ceramic capacitor 100 nF [ссылка](https://clck.ru/32DU64)

<a id="chapter-3"/>

## Scheme and connection

![scheme](schemes/Scheme.png)


| Arduino | HC-06 |
| ------ | ------ |
| 5V | VCC |
| GND | GND |
| 2 | TXD |
| 3 | RXD |

| Arduino | TB6612 |
| ------ | ------ |
| 5V | VCC, STB |
| GND | GND |
| 10 | PWMA |
| 9 | AIN2 |
| 8 | AIN1 |
| 4 | BIN1 |
| 5 | BIN2 |
| 6 | PWMB |
