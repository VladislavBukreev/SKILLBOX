/*Задача 5. Начальник (цикл for).
Перепишите программу из прошлого модуля, используя цикл for. Напишите программу для робота-начальника.
Он спрашивает у пользователя, выполнил ли он задание, которое тот выдавал вчера, и продолжает это делать до тех пор, 
пока пользователь не ответит ему “Да, конечно, сделал”. Для большей реалистичности в конце пусть робот-начальник пожалуется: “Ну почему тебя нужно спрашивать N раз?”, где N — это число попыток, которые были потрачены пользователем, прежде чем он ввёл правильный ответ.

Напоминаем: чтобы считать строку с пробелами, воспользуйтесь функцией std::getline(std::cin, line);*/


#include <iostream>
#include <string>

using namespace std;

int main() {
    string answer;
    string trueAnswer = "Yes"; 
    int i = 0;

    for (i = 0; answer != trueAnswer ; i++) { 
        cout << "Вы выполнили задание? ";
        getline(cin, answer);
    }
    cout << "ОК, Ну почему тебя нужно спрашивать " << i << " раз?";
}
