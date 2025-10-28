/*Declara dos variables float: base y altura.
Calcula el área (base * altura) y muestra el resultado.
*/

#include <iostream>
using namespace std;

void menuu(char &sel, int &age) {
    cout << "==== EDAD IDENTIFICATOR ====" << endl;
    cout << "deseas saber tu edad futura? S/N";
    cin >> sel;

    if (sel == 'S' || sel == 's') {

    cout << "ingresa tu edad: " << endl;
    cin >> age;
    age += 10;
    cout << "tendras " << age << " en 10 años :o" << endl;

    } else {
        cout << "ok, adios!!" << endl;
    }
}
int main() {
    float base = 0, altura = 0;
    int edad;
    char selection;

    cout << "ingresa la base: "  << endl;
    cin >> base;
    cout << "ingresa la altura: " << endl;
    cin >> altura;
    cout << (base*altura) << endl;

    menuu(selection, edad);

    return 0;
}

