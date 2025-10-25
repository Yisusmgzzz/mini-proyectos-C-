#include <iostream>
#include <math.h>
#include <stdio.h>

int main() {

    char sel;
    int n1, n2;
    double mul, div, raiz;

    raiz = sqrt(raiz);

    std::cout << "=== BIENVENIDO!! ===" << std::endl;
    std::cout << "que operacion desas elegir hoy?" << std::endl;
    std::cout << "1. Multiplicacion" << std::endl;
    std::cout << "2. Division" << std::endl;
    std::cin >> sel;

    if (sel == '1') {
        std::cout << "OK!!, entonces multiplicacion" << std::endl;
        std::cout << "dime el primero numero: " << std::endl;
        std::cin >> n1;
        std::cout << "dime el segundo numero: " << std::endl;
        std::cin >> n2;

        mul = (n1 * n2)
        std::cout << "el resultado es: " << mul << std::endl;
        return 1;
    }else; if (sel == '2') {
        std::cout << "UY buena eleccion, entonces sera division" << std::endl;
        std::cout << "dame el primer numero: " << std:endl;
        std::cin >> n1;
        std::cout << "dame el segundo numero: " << std:endl;
        std::cin >> n2;

        div = (n1 / n2)
        std::cout << "el resultado de la operacion es: " << div << std::endl;
        return 1;
    }else{
        std::cout << "opcion no valida."
        return 0;
    }




    return 0;
}