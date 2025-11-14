/*Realice una aplicación en C++ que le pregunte al usuario la edad de su hijo.
 * Si el niño tiene entre 0 y 6 años el programa debe imprimir que el niño pertenece al grupo de la primera infancia.
 * Si la edad está entre los 6 y los 12 años el programa debe imprimir que el niño pertenece al grupo de la segunda infancia;
 * y en caso de que el niño tenga entre 12 y 18 años el mensaje impreso dirá que pertenece al grupo de los adolescentes.
 * Siga las instrucciones de la guía de aprendizaje 3*/
#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

void commands(std::string c){
  system(c.c_str());
}

void menu(int &selection)
{
    cout<<"           MENU            "<<endl; //aqui quise hacer un menu para que mi aplicacion no se vea tan aburrida 
    cout<<"    ¡¡que opcion quieres escoger!!      "<<endl<<endl;
    cout<<"#1. saber de que grupo es tu hijo/a"<<endl;
    cout<<"#2. donar a la comunidad"<<endl;
    cout<<"#3. ninguna de las anteriores"<<std::endl;cin>>selection;
}

int duplicar(int numero) //aca hice un duplicador pq ns estaba aburrido y se me dio la gana
{
  if(numero<=100){
    return pow(numero, 2);
  }else{ return sqrt(numero); }
}

int main() {
    int edad, sel;
    menu(sel); //llamo a la funcion menu para ahorrar lineas de codigo
    
    //aca aplique switch que cumple la misma funcion del if, pero para mas condiciones y hace que el codigo se vea mas uniforme.
    switch (sel) {    
        case 1:
            commands("clear");
            cout<<"¿cual es la edad de tu hijo/a?: ";cin>>edad;

            if (edad <=6){cout<<"eres de la primera infancia"<<endl; }
            if (edad <=12){cout<<"pertenece al grupo de la segunda infancia"<<endl;}
            if (edad < 18){cout<<"pertenece al grupo de los adolescentes"<<endl;} else {
                cout<<"pertenece al grupo de los adultos"<<endl; }
            break;
        case 2:
            commands("clear");
            cout<<"MUCHAS GRACIAS POR DONAR!! se aprecia la intencion <3"<<endl; //una pequeña opcion para "monetizar" mi aplicacion 
            cout<<duplicar(50)<<endl; cout<<duplicar(150);
            break;
        case 3:
            commands("clear");
            cout<<"Adios!! :D"<<endl; //y la despedida 
            break;
    default:
      cout<<"#Error, opcion invalida";
      commands("cmatrix");
    }
    return 0;
}
