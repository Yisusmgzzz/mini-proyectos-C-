/* 
En una institución educativa, el profesor de la clase de tecnología requiere desarrollar una aplicación que calcule el promedio de las notas de sus estudiantes
y determine si aprobaron o no aprobaron la materia.
*/
#include <iostream>
#include <cmath>

int main() {
    double n1, n2, n3, n4, prom;
     prom = (n1+n2+n3+n4)/4;

    //Nombre: Jesus Esteban Muñoz Gomez
    
    std::cout << "ingresa las 4 notas: " << std::endl;
    std::cin >> n1 >> n2 >> n3 >> n4;
    prom = round(prom * 100)/100;

    if (prom >= 3.5 && prom <= 5.0) {
        std::cout << "Aprobado ✅" << std::endl;
    } else; if (prom >= 3.0 && prom < 3.5) {
        std::cout << "en este momento no tiene aprobada la materia de tecnologia, " <<
            "pero tiene oportunidad de recuperar. ⚠️" << std::endl;
    } else; if (prom < 3.0) {
        std::cout << "No aprobo ❌" << std::endl;
    } else {
        std::cout << "Error: la nota promedio no es valida" << std::endl;
    }

    return 0;
}
