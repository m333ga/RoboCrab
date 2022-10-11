This is code for Arduino Nano for create Bluetooth Robot Crab.

Program by. MEGA HEDGE

Программа для управления роботом Краб для РобоФутбола по Bluetooth (модуль HC-05) из приложения на Android "Bluetooth RC CAR".

Инструкция:
Схема сборки робота: http://r9al.ru/2021/arduino/app/robofb/index.htm

Для подключения робота к телефону:
1. Включите Bluetooth и подключитесь к модулю HC-05
2. Скачайте и откройте приложение "Bluetooth RC CAR" на Android-устройстве.
3. Откройте меню Option Menu (Настройки)(Значёк шестерёнки) → Conect to car (Подключение к машине) и в списке Bluetooth-устройств найдите HC-05

Моторы:
UP: analogWrite(11, 255); digitalWrite(13, 1); analogWrite(10, 255); digitalWrite(12, 0);
DOWN: analogWrite(11, 255); digitalWrite(13, 0);  analogWrite(10, 255); digitalWrite(12, 1);
LEFT: analogWrite(11, 0); digitalWrite(13, 1);  analogWrite(10, 255); digitalWrite(12, 0);
RIGHT: analogWrite(11, 255); digitalWrite(13, 1);  analogWrite(10, 0); digitalWrite(12, 1);
UP and LEFT:   analogWrite(11, 255 / 2); digitalWrite(13, 1);  analogWrite(10, 255); digitalWrite(12, 0);
UP and RIGHT:  analogWrite(11, 255); digitalWrite(13, 1);  analogWrite(10, 255 / 2); digitalWrite(12, 0);
DOWN and LEFT:  analogWrite(11, 255 / 2); digitalWrite(13, 0);  analogWrite(10, 255); digitalWrite(12, 1);
DOWN and RIGHT:  analogWrite(11, 255); digitalWrite(13, 0);  analogWrite(10, 255 / 2); digitalWrite(12, 1);
STOP:  analogWrite(11, 0); digitalWrite(13, 0);  analogWrite(10, 0); digitalWrite(12, 0);
