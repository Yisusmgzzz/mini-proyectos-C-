/* Declara una variable string llamada nombre.

Pide al usuario que escriba su nombre.

Muestra en pantalla: "Hola, [nombre]".
*/

#include <iostream>
using namespace std;

void saludo(string &name) {
    cout << "hola como estas " << name << "!!!" << endl;
}

int main() {
    string nombre;

    cout << "por favor ingresa tu nombre" << endl;
    cin >> nombre;
    saludo(nombre);
}










