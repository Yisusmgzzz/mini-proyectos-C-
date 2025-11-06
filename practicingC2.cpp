/*2. Realiza un programa que lea de la entrada estandar los siguientes datos de un a persona:
 * edad: dato tipo entero
 * nombre: dato tipo caracter 
 * altura: dato tipo real
tras leer los datos el programa debe mostrarlos en la salida estandar. */
#include <iostream>
#include <string>
using namespace std;
int main(){
    int edad;
    string nombre;
    float altura;

    cout<<"ingresa tu edad: "<<endl;cin>>edad;
    cout<<"ingresa tu nombre: "<<endl;cin>>nombre;
    cout<<"ingresa tu altura: "<<endl;cin>>altura;

    cout<<"te llamas "<<nombre<<", tienes "<<edad<<" años y mides "<<altura<<endl;
    return 0;
}
