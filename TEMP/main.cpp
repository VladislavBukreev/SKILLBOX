#include <iostream>

#include <locale>

int main() {

    setlocale(LC_ALL, ".1251"); // Устанавливает кодировку Windows-1251

    std::string name;

    std::cout << "Введите имя: ";

    std::cin >> name;

    std::cout << "Вы ввели: " << name << std::endl;

}