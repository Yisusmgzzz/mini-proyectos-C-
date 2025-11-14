/*
* escriba un programa que lea 3 numeros y determine
* cual de ellos es el mayor
*/
#include <iostream>
using namespace std;

int main(){
  int n1, n2, n3; 
 
  cout<<"ingresa 3 numeros: ";cin>>n1>>n2>>n3;

  if(n1>n2 && n1>n3){
    cout<<n1<<" es mayor que "<<n2<<" y "<<n3;
  }
  else if(n2>n1 && n2>n3){
    cout<<n2<<" es mayor que "<<n1<<" y "<<n3;
  }
  else if(n3>n1 && n3>n2){
    cout<<n3<<" es mayor que "<<n1<<" y "<<n2;
  } 
  return 0;
}

