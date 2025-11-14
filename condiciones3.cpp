/* Escriba un programa que lea de la entrada estandar
* un caracter e indique en la salida estandar si el caracter es una 
* vocal mayuscula o no es una vocal */
#include <iostream>
using namespace std;


int main(){

  char letra;

  cout<<"ingresa el caracter ";cin>>letra;
  switch(letra){
    case 'a': cout<<"El caracter "<<letra<<" es una vocal minuscula"; break;
    case 'e': cout<<"El caracter "<<letra<<" es una vocal minuscula"; break;
    case 'i': cout<<"El caracter "<<letra<<" es una vocal minuscula"; break;
    case 'o': cout<<"El caracter "<<letra<<" es una vocal minuscula"; break;
    case 'u': cout<<"El caracter "<<letra<<" es una vocal minuscula"; break;
    
    case 'A': cout<<"El caracter "<<letra<<" es una vocal Mayuscula"; break;
    case 'E': cout<<"El caracter "<<letra<<" es una vocal Mayuscula"; break;
    case 'I': cout<<"El caracter "<<letra<<" es una vocal Mayuscula"; break;
    case 'O': cout<<"El caracter "<<letra<<" es una vocal Mayuscula"; break;
    case 'U': cout<<"El caracter "<<letra<<" es una vocal Mayuscula"; break;
    default:
      cout<<"el caracter "<<letra<<" no es una vocal";
  }
  return 0;
}

