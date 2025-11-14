/* este script esta programado para escribir los comandos
* que yo quiera en la terminal y los ejecuta automaticamente al compilar */
#include <iostream>
#include <cstdlib> //me quede probando esta libreria xd

int main(){
  char selection;
  std::string comando = "figlet"; //en este caso use el comando figlet, que es un comando que dibuja arte ASCII
  std::string texto[4];
  std::string* p = texto;

  std::cout<<"         bievenido          \n";
  std::cout<<"quieres crear el texto que desees?s/n= ";std::cin>>selection;

  if(selection=='s'){
    std::cout<<*p;
    for(int i=0;i<5;i++){
       if(i>5){
        std::cout<<"  <   ya acabo gracias por usar nuestros servicios  >     ";
        break;
      }else{
        std::cout<<"ingresa las palabras que quieres añadir: ";std::cin>>texto[i];
        system((comando+" "+p[i]).c_str()); //esta funcion lo que hace es leer el comando y aplicar las palabras que quiera dibujar en la temrinal
      }
    }
  }
  return 0;
}
