//aqui trato de comprender los punteros
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string numeros[3] = {"jesus", "andrea", "jose"};
  string* p = numeros;

  for(int i=3;i>0;i--){
    cout<<"elemento "<<i<<": "<<(p[3]+=i)<<endl;
  }

  string comando = "cmatrix -s -C magenta";
  string sel;

  cout<<"¿quieres ser hackerman?: \n";cin>>sel;

  if (sel=="si"){
    system(comando.c_str());
  }
  return 0;
}
