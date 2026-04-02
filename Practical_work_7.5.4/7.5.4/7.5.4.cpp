/*Задание 4. Рамка
Что нужно сделать
Напишите программу, которая рисует с помощью символьной графики прямоугольную рамку.
Для вертикальных линий используйте символ вертикального штриха «|», а для горизонтальных — дефис «-». Пусть пользователь вводит ширину и высоту рамки.

Пример выполнения

6 — ширина, 4 — высота:


Рекомендации по выполнению
Ширину и высоту удобно вводить с помощью одной операции std::cin:

int width, height;
std::cin >> width >> height;
Что оценивается
Рамка рисуется в соответствии с заданными размерами и с помощью условных конструкций и циклов.

*/
#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int width, height;
	cout << "Введите ширину и длину -> ";
	cin >> width >> height;

	for (int row = 1; row <= height; row++) {
		for (int col = 1; col <= width; col++) {
			if ((row == 1 || row == height) && (col == 1 || col == width)) {
				cout << "|";
			}
			else if (row == 1 || row == height) {
				cout << "-";
			}
			else if (col == 1 || col == width) {
				cout << "|";
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
}