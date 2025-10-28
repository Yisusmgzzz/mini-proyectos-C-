/*Realice una aplicación en C++ que le pregunte al usuario la edad de su hijo.
 * Si el niño tiene entre 0 y 6 años el programa debe imprimir que el niño pertenece al grupo de la primera infancia.
 * Si la edad está entre los 6 y los 12 años el programa debe imprimir que el niño pertenece al grupo de la segunda infancia;
 * y en caso de que el niño tenga entre 12 y 18 años el mensaje impreso dirá que pertenece al grupo de los adolescentes.
 * Siga las instrucciones de la guía de aprendizaje 3*/

#include <iostream>

void menu(int &selection) {

    std::cout << "==== MENU ====" << std::endl; //aqui quise hacer un menu para que mi aplicacion no se vea tan aburrida y seca jeje
    std::cout << "¡¡que opcion quieres escoger!!" << std::endl;
    std::cout << "1. saber de que grupo es tu hijo/a" << std::endl;
    std::cout << "2. donar a la comunidad" << std::endl;
    std::cout << "3. ninguna de las anteriores" << std::endl;
    std::cin >> selection;
}

int main() {
    int edad, sel;

    menu(sel); //llamo a la funcion menu para ahorrar lineas de codigo
    
    //aca aplique switch que cumple la misma funcion del if, pero para mas condiciones y hace que el codigo se vea mas uniforme.
    switch (sel) {    
        case 1:
            std::cout << "¿cual es la edad de tu hijo/a?: ";
            std::cin >> edad;

            if (edad <=6) { std::cout << "eres de la primera infancia" << std::endl; }
            if (edad <=12) {std::cout << "pertenece al grupo de la segunda infancia" << std::endl;}
            if (edad <=18) {std::cout << "pertenece al grupo de los adolescentes" << std::endl;} else {
                std::cout << "pertenece al grupo de los adultos" << std::endl;
            }

            break;

        case 2:
            std::cout << "MUCHAS GRACIAS POR DONAR!! se aprecia la intencion <3" << std::endl; //una pequeña opcion para "monetizar" mi aplicacion 

            break;

        case 3:
            std::cout << "Adios!! :D" << std::endl; //y la despedida 

            break;
    }
    return 0;
}
