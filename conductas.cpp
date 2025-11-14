/*programa para modular mis habitos y costumbres
mas que nada para tener un recordatorio y enfoque en mi
vida
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <chrono> //importo esta libreria para administrar el tiempo
#include <unistd.h>

void Command(std::string c){ //funcion que me permite facilitar uso de comandos en terminal
  system(c.c_str());
}

void tiempoEspera(unsigned int time){
  sleep(time);
}

void TypeConducts(std::string time, std::string action, std::string place){
  std::cout<<"i'll do "+action+" at ";std::cout<<time+" in ";std::cout<<place; //funcion se encarga de programar la actividad
}

int main(){
  using namespace std::chrono;
  
  char select;
  time_point<system_clock> begin, end;

  std::cout<<"        WELCOME TO THE ROUTE TO THE GOOD HABITS       "<<std::endl<<std::endl; //diseño y bienvenida
  std::cout<<"      You just need to do whatever you want to do         \n";
  std::cout<<"do want you to know my routine? [PRESS S+ENTER]"<<std::endl;
 

  begin = system_clock::now();
  for(i=0;i<1000;i++){
    tiempoEspera(5);
  }
  

  end = system_clock::now();

  duration<double> duration = end-begin;

  do{

    TypeConducts("Wake up and a short breakfast", "6:00", "My house");
    std::cout<<"\nhan pasado "<<duration.count() << "s\n";
  }while(select=='s');
  return 0;
}
