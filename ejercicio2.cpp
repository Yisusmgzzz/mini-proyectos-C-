/* aca me sentia el doble de confiado que antes ya era capaz de usar condiciones
 * cuando se me diera la gana y anidarlas tambien, no se me hizo dificil pero si
 * estuve un poco enfocado aca estudiando un poco las librerias */
#include <iostream>
#include <math.h>

int main() {

    char sel;
    int n1, n2, mul, div, raiz;

//hacemos el menu para que quede mas chikiluki    
    std::cout << "=== BIENVENIDO!! ===" << std::endl;
    std::cout << "que operacion desas elegir hoy?" << std::endl;
    std::cout << "1. Multiplicacion" << std::endl;
    std::cout << "2. Division" << std::endl;
    std::cin >> sel;

    //hacemos que funcione con condiciones para asi poner en practica el if anidado
    if (sel == '1') {
        std::cout << "OK!!, entonces multiplicacion" << std::endl;
        std::cout << "dime el primer numero: " << std::endl;
        std::cin >> n1;
        std::cout << "dime el segundo numero: " << std::endl;
        std::cin >> n2;

        mul = (n1 * n2);

        std::cout << "el resultado es: " << mul << std::endl;
        if (mul % 2 == 0) {
            //esa funcion es de la libreria math y se supone q sirve pa pode saca raices pero cule nombre extraño :v
            raiz = sqrt(mul);
            std::cout << "la raiz cuadrada de " << mul << " es " << raiz << std::endl;
        }else{
            return 1;
        }
    }else; if (sel == '2') {
        std::cout << "UY buena eleccion, entonces sera division" << std::endl;
        std::cout << "dame el primer numero: " << std::endl;
        std::cin >> n1;
        std::cout << "dame el segundo numero: " << std::endl;
        std::cin >> n2;

        div = (n1 / n2);
        std::cout << "el resultado de la operacion es: " << div << std::endl;
        if (div % 2 != 0) {
            raiz = sqrt(div);
            std::cout << "la raiz cubica de " << div << " es " << raiz << std::endl;
        }else{
            return 1;
        }
    }else{
        std::cout << "opcion no valida.";
        return 1;
    }
    return 0;
}
