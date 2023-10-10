/**********************************
* Автор: Калинин Андрей           * 
* Лабораторная №3                 *
* Дата: 06.10.2023                *
* Название: Циклы с ветвлением    *
* Вариант: 7                      *
* https://onlinegdb.com/8kK0BoNbG *
**********************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  double numberFroude;
  double gasSaturationCoefficient;
  double diameter;
  int counter;
  double gravity = 9.81;
  int arrayCount = 100;
  int speed[arrayCount];
  
  cout.precision(7);
  cout << "Diameter = ";
  cin >> diameter;
  cout << "How many values you need? Write number here: ";
  cin >> counter;
  
  
  for (int i = 0; i < counter; ++i) {
    cout << "Number of iteration: " << i+1 << " Write speed: ";
    cin >> speed[i];
  }
  
  cout << " " << '\n';
  
  for (int i = 0; i < counter; ++i) {
    
    numberFroude = pow((speed[i]), 2) / (gravity * diameter);
    
    if (numberFroude < 50) {
      gasSaturationCoefficient = 0.05 * pow(numberFroude, 0.2); 
    } else {
      gasSaturationCoefficient = 0.35 * pow(numberFroude, 0.1);
    }
    
    
    cout << "Gas saturation coefficient: " << gasSaturationCoefficient << '\n'
         << "Froude number: "  << numberFroude  << '\n'
         << " " << '\n'; // This is done so that the results of iterations are separated.

  }
  
  return 0;
}
