/*aca estaba practicando funciones con variables de retorno
 * con la intencion de mejorar mi logica usando funciones */

#include <iostream>
#include <math.h>

//esta funcion tiene como objetivo intercambiar numeros (simplemente eso xd)
void intercambio(int &numero1, int &numero2) {
    int temp = numero1;
    numero1 = numero2;
    numero2 = temp;
}

//esta otra funcion es para que el usuario decida si quiere multiplicar el numero o no despues de ingresarlo
void multiplicacion(int &numero) {
    std::string question = "quieres multiplicar el numero? S/n ";
    char sel;
    std::cout <<  question << std::endl;
    std::cin >> sel;
    if (sel == 'N' || sel == 'n') {
        std::cout << "Ptm.. ok." << std::endl;
    } else {
        numero = numero*2;
        std::cout << "resultado: " << numero << std::endl;
    
    }
}

//aca se ahorran muchas lineas de codigo solo por la funcion anterior
int main() {
    int n1, n2;
    std::cout << "ingresa un numero: " << std::endl;
    std::cin >> n1;
    multiplicacion(n1);
    std::cout << "ingresa un numero: " << std::endl;
    std::cin >> n2;
    multiplicacion(n2);
    //hice que preguntara el numero para hacerlo mas dinamico pero simplemente pude haber puesto un numero fijo y funciona de la misma manera
    intercambio(n1, n2);
    std::cout << "primer numero = " << n1 << " segundo numero = " << n2 << std::endl;
    return 0;
}
