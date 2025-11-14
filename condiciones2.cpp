// comprobar si un numero digitado por el usuario es positivo o negativo
#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"ingresa el numero: ";cin>>n;
  if(n<0){cout<<"el numero es negativo";} else if(n>0){cout<<"el numero es positivo";}
}
