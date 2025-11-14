/* Escribe un programa que lea de la entrada 
* estandar 3 numeros. despues debe leer un cuarto numero
* e indicar si el cuarto numero coincide con alguno de los
* introducidos con anterioridad*/
#include <iostream>
using namespace std;


int main(){

  char numero[4];
  char* p = &numero[4];
  *p = 0;

  cout<<"ingresa 3 numeros: "<<endl;cin>>numero[0]>>numero[1]>>numero[2];
  cout<<"ahora ingresa un cuarto numero: "<<endl;cin>>numero[3];

  for(int i=0;i<3;i++){
    if(p[0] != numero[3] || p[1] != numero[3] || p[2] != numero[3]){
      cout<<numero[3]<<" no coincide con "<<numero[i]<<endl;
    }
    else if(p[0] == numero[3] || p[1] == numero[3] || p[2] == numero[3]){
      cout<<numero[3]<<" coincide con "<<numero[i]<<endl;
      break;
    }
  }
  return 0;
}
