/*Задание 8. Угадай число* (дополнительное задание)
Что нужно сделать
Напишите программу, которая угадывает число, задуманное пользователем. Число загадывается в диапазоне от 0 до 63. 
Программа задаёт вопросы вида «Ваше число больше такого-то?» и на основе ответов пользователя («да» или «нет») угадывает число.

Рекомендации по выполнению
В этом задании можно использовать любой алгоритм поиска, но полный перебор всех 64 значений — самый нежелательный из алгоритмов.
Есть алгоритм, который гарантированно даст ответ за семь вопросов.
Что оценивается
Нет полного перебора всех чисел.
Программа работает только в указанном отрезке и не выходит за его пределы. При этом есть возможность поменять отрезок поиска без сильных
изменений в коде программы.
Допустимые ответы на вопросы — только «да» или «нет».
*/
#include <iostream>
using namespace std;

int main(){
    cout << "Введите число от 0 до 63 : ";
    int num, middle;
    string  result;
    cin >> num;
    if (num < 0 || num > 63) {
        cout << "Ошибка! Число должно быть от 0 до 63.";
    }
    int left = 0, right = 63;
    while(left <= right){
        middle = (left + right) / 2;
        cout << "Ваше число " << middle << "? (Yes/No): ";
        cin >> result;
        if (result == "Yes"){
            cout << "Число найдено: " << middle;
            break;
        }
        cout << "Ваше число больше " << middle << "? ";
        cin >> result;

        if(result == "Yes"){
            left = middle + 1;
        } else {
            right = middle - 1; 
        }
    }
}
