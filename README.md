![project_photo](plug.jpg)


# Bluetooth машинка на Arduino

## Оглавление

* [Возможности проекта](#chapter-1)
* [Детали и ссылки на покупку](#chapter-2)
* [Схема и подключение](#chapter-3)
* [TODO](#chapter-4)

<a id="chapter-1"/>

## Возможности проекта

### TODO

<a id="chapter-2"/>

## Детали и ссылки на покупку

+ Arduino Nano [ссылка](https://clck.ru/324jT7)

+ HC-06 [ссылка](https://clck.ru/32DToc)

+ TB6612 [ссылка](https://clck.ru/32DTxb)

+ Motor [ссылка](https://clck.ru/32DTyg)

+ Конденсатор [ссылка](https://clck.ru/32DU64)

<a id="chapter-3"/>

## Схема подключения

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

<a id="chapter-4"/>

## TODO
