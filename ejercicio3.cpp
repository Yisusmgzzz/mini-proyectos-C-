/*aca estaba practicando funciones con variables de entorno
 * con la intencion de mejorar mi logica usando funciones */
#include <string>
#include <iostream>
#include <math.h>
#include <string>
//funcion que hace que se multipliquen 2 numeros
int multiplicar(int &n1, int &n2) {
    //devuelve el producto
    return n1 * n2;
}

//esta funcion tiene como objetivo intercambiar numeros (simplemente eso xd)
void intercambio(int &numero1, int &numero2) {
    int temp = numero1;
    int i = 0;
    numero1 = numero2;
    numero2 = temp;
}

int suma(int &n1, int &n2) {
    //devuelve la adicion 
    return n1 + n2;
}

std::string saludo(std::string nombre) {
    return "Hola!! mi nombre es " + nombre + " como estas :D";
}

//aca se ahorran muchas lineas de codigo solo por la funcion anterior
int main() {
    int n1, n2;
    int i = 0;

    std::cout << "ingresa un numero: " << std::endl;
    std::cin >> n1;
    std::cout << "ingresa un numero: " << std::endl;
    std::cin >> n2;
    std::cout << "la operacion dio: " << multiplicar(n1, n2) << "\n";
    std::cout << "la suma dio: " << suma(n1, n2) << "\n";
    //hice que preguntara el numero para hacerlo mas dinamico pero simplemente pude haber puesto un numero fijo y funciona de la misma manera
    intercambio(n1, n2);
    std::cout << "primer numero = " << n1 << " segundo numero = " << n2 << std::endl;
    saludo("Jesus");
    return 0;
}
