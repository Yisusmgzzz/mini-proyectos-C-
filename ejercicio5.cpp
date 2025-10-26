/*aca estaba practicando funciones con variables de entorno
 * con la intencion de mejorar mi logica usando funciones */

#include <iostream>
#include <math.h>

//esta funcion tiene como objetivo intercambiar numeros (simplemente eso xd)
void intercambio(int &numero1, int &numero2) {
    int temp = numero1;
    numero1 = numero2;
    numero2 = temp;
}

//aca se ahorran muchas lineas de codigo solo por la funcion anterior
int main() {
    int n1, n2;
    std::cin >> n1;
    std::cout << n1;
    std::cin >> n2;
    std::cout << n2;
    //hice que preguntara el numero para hacerlo mas dinamico pero simplemente pude haber puesto un numero fijo y funciona de la misma manera
    intercambio(n1, n2);
    std::cout << "primer numero = " << n1 << " segundo numero = " << n2 << std::endl;
    return 0;
}
