/*Задание 4. Счастливый билетик
Что нужно сделать
В старину, когда даже в столице билеты в общественном транспорте выдавали контролёры, существовало поверье: если на билете сумма 
первых трёх цифр в номере билета равна сумме трёх последних, то это к удаче. Напишите программу, которая получала бы на вход 
шестизначный номер билета и выводила, счастливый это билет или нет. К примеру, билеты 666 666 и 252 135 — счастливые, а 123 456 — нет.

Пример выполнения

            Введите номер билета: 123060 
            Билет счастливый! 
            Введите номер билета: 123040 
            Повезёт в следующий раз!

Рекомендации по выполнению
Программу необходимо сделать так, чтобы можно было увеличить количество цифр в билете без особых изменений в коде.
Для получения младшего разряда числа (самой правой цифры) используйте выражение: one_digit = digits % 10.
Используйте циклы для подсчёта суммы цифр в номере билета.
Что оценивается
Программа корректно определяет, является ли билет счастливым.
Для подсчёта суммы цифр в билете используются циклы.*/

#include <iostream>
using namespace std;
int main(){
    cout << "Введите 6-значное число : ";
    int num;
    int leftDigit = 0, rightDigit = 0, i = 0, sum = 0;
    cin >> num;

    while (num != 0) 
    {
        sum += num % 10;
        num /= 10;
        ++i;
        if(i == 3 ){
            rightDigit = sum;
            sum = 0;
        } 
        if( i == 6 ){
            leftDigit = sum;
        }
    }
    if (i != 6) {
        cout << "введено не верное число!"; return 0;
    }
    if(rightDigit == leftDigit) cout << "Ваш Билет счастливый!";
    else cout << "Ваш билет НЕ счтастливый!";
}

