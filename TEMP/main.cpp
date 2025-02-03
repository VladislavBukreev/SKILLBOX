#include <iostream>
using namespace std;

int main(){
  int x,y;
  string quarter1, quarter2,quarter3,quarter4; 
  quarter1 = "Эти координаты пренадлежат 1 четверти ";
  quarter2 = "Эти координаты пренадлежат 2 четверти ";
  quarter3 = "Эти координаты пренадлежат 3 четверти";
  quarter4 = "Эти координаты пренадлежат 4 четверти";
  cout << "введите координаты  x= , y= : ";
  cin >> x >> y;
  if(x > 0){
    if (y > 0)
      cout << quarter1;
      else if (y !=0 ) cout << quarter4;
  }
  if (x < 0){
    if (y <0)
      cout << quarter3;
      else if (x != 0) cout << quarter2;
  }
  if (x == 0){
    cout << "Точка лежит на оси X при этом y = " << y;
  }
  if (y == 0){
      cout << "Точка лежит на оси Y при этом x = " << x;
  } 
}