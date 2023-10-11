/**********************************
* Автор: Калинин Андрей           *
* Лабораторная №3                 *
* Дата: 06.10.2023                *
* Название: Циклы с ветвлением    *
* Вариант: 7                      *
* https://onlinegdb.com/GnOPwJEMs *
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
  
  cout.precision(7);
  cout << "Diameter = ";
  cin >> diameter;
  cout << "How many values you need? Write number here: ";
  cin >> counter;
  
  int *speed = new int [counter]; //A dynamic array has been created. It will be deleted!
  
  for (int index = 0; index < counter; ++index) {
    cout << "Number of iteration: " << index +1 << " Write speed: ";
    cin >> speed[index];
  }
  
  cout << " " << '\n';
  
  for (int index = 0; index < counter; ++index) {
    
    numberFroude = pow((speed[index]), 2) / (gravity * diameter);
    
    if (numberFroude < 50) {
      gasSaturationCoefficient = 0.05 * pow(numberFroude, 0.2); 
    } else {
      gasSaturationCoefficient = 0.35 * pow(numberFroude, 0.1);
    }
    
    
    cout << "Gas saturation coefficient: " << gasSaturationCoefficient << '\n'
         << "Froude number: "  << numberFroude  << '\n'
         << " " << '\n'; // This is done so that the results of iterations are separated.

  }
  
  delete [] speed; //The dynamic array has been deleted.
  return 0;
}



