/*Realize un programa que tome el valor de la siguiente funcion
 para unos valores dados de x e y: */

#include <iostream>
#include <cmath>
using namespace std;

float expresion(int &x, int &y){
  return (sqrt(x))/(pow(y, 2)-1);
}

int main()
{
  int a, b;

  cout<<"digita la primera variable: "<<endl;cin>>a;
  cout<<"digita la segunda variable: "<<endl;cin>>b;
  cout.precision(2);
  cout<<expresion(a, b);
}
