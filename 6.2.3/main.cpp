/*Задача 3. Таблица степеней.

Напишите программу, которая выводила бы N первых степеней числа К. Посмотрите, что случится, если N или K будут достаточно большими.*/

#include <iostream>
using namespace std;

int main(){
    int k,n;
    cout << "Введите число ";
    cin >> k;
    cout << "Введите кол-во степеней ";
    cin >> n;

    int i = 0;
    int result = 1;

    while (i < n){
        cout << k << "^" << i << " = " << result << " \n ";
        result *= k;
        i += 1;
    }

}