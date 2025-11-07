/*Escribe un programa que lea de entrada estandar los catetos de un triangulo
 rectangulo y que en la salida estandar muestre su hipotenusa
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float catetos[2], hipotenusa = 0;

  for(int i=0;i<2;i++)
  {
    cout<<"ingresa el cateto "<<i+1<<endl;cin>>catetos[i];
  }
  hipotenusa = sqrt(pow(catetos[0], 2)+ pow(catetos[1], 2)); //pow es una funcion para elevar al cuadrado y sqrt otra para sacar raiz de la libreria cmath
  cout<<"el valor de la hipotenusa es "<<hipotenusa<<endl;
  return 0;
}

