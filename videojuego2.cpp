#include <iostream>
#include <string>

using namespace std;

void startGame(string name)
{
    int bOption = 25;
    int bResult;
    int year;
    char continuar, selectOption;

    string* p = &name;
  
    if (continuar == 's'){

    cout << endl << "Hola, bienvenido has ingresado al MiniJuego TEMPORAL SPACE, ingresa tu nombre por favor: " << endl;
        cin >> name;
    cout << "Ahora si " << name << " presiona [S + ENTER] para continuar con el juego." << endl;
        cin >> continuar;

        cout << endl << "Acabas de despertar con una carta en la mano, la cual te explica que has sido seleccionado para realizar pruebas en un viaje a traves del tiempo, debajo encontraras una caja con tu nombre" << endl;
        cout << "    __________" << endl;
        cout << "  /           / " << endl;
        cout << " /__________ / |" << endl;
        cout << " |          |  |" << endl;
        cout << " |  "  << name <<      "  |  |" << endl;
        cout << " |          | /" << endl;
        cout << " |__________|/ " << endl << endl;
        cout << "Dentro tienes tres sobres" << endl;
        cout << "El primero [a + ENTER]: Te llevara a tu infancia, para esto escribiras en esta carta el anio al que desees regresar." << endl;
        cout << "El Segundo [b + ENTER]: Te llevara 25 anios despues de tu epoca actual, para esto deberas escribir en esta carta el anio en el que te encuentras." << endl;
        cout << "El Tercero [c + ENTER]: Te llevara a un anio a tu seleccion, la cual deberas escribir en dicha carta." << endl;
        cin >> selectOption;
        cout << "Ahora que has escogido un sobre, escribe el anio al que deseas ir (si tu seleccion fue [a] o [c]), sino fue asi, escribe el anio en el que te encuentras (si escogiste [b]): " << endl;
        cin >> year;
        switch (selectOption)
        {
        case 'a':
            cout << endl << "Estas en el anio " << year << ", podras revivir los momentos que pasaste de pequenio pero no debes afectar lo que ha sucedido o todo cambiara en tu presente." << endl << endl;
            break;

        case 'b':
            bResult = bOption + year;
            cout << endl << "Estas en el anio " << bResult << ", en este momento te veras inmerso en la trama de reconocer que has conseguido hasta ese momento y podras observar que ensenianza te dejara ese viaje para realizar acciones en el presente." << endl << endl;
            break;
        case 'c':
            cout << endl << "Estas en el anio " << year << ", ahora puedes conocer o hacer lo que creas necesario en esa fecha, mejorar alguna cuestion o simplemente revivir un recuerdo." << endl << endl;
            break;
        default:
            cout << endl << "La opcion que escribiste, es inexistente." << endl;
            break;
        }

        cout << "Ahora imagina la situacion que has escogido, muchas gracias por participar en este juego!! FELICIDADES.";
        
    } else{
        cout << endl << "OPS! Has escrito la letra incorrecta. [VUELVE A INTENTARLO]" << endl;
    }
}


int main(){
    
  startGame("Jesus");
    
    return 0;
}
