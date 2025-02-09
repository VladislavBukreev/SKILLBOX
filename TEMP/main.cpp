#include <iostream>
using namespace std;
int main(){
    string name;
    cout << "Привет! Как тебя зовут? \n";
    cin >> name;
    cout << name << ", Купи слона! \n ";
    while (name == name)
    {
        cin >> name;
        cout << "ВВсе говорят‚ " << name << ", А ты купи слона! ";
    }
    system("pause");
}