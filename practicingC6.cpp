/* escriba un programa que lea la nota de 4 alumnos
  y calcule la nota final media de los 4 alumnos.
*/
#include <iostream>
using namespace std;

int main()
{
    //Jesus Esteban Muñoz Gomez
    float notaAlumnos[4], suma = 0, notaFinalMedia;

    cout<<"ingresa las notas de los 4 alumnos: "<<endl;
    for(int i=0;i<4;i++){
        cin>>notaAlumnos[i]; //como no le di ningun valor lo que hara sera iterar el input de los valores que quiera (en este caso 4)
        suma += notaAlumnos[i]; //lo que hace aca basicamente sumar cada indice del array
    }
    cout.precision(2);
    notaFinalMedia = suma/4; //se saca el promedio o la media de las notas de cada estudiante
    cout<<"la nota final media de los 4 alumnos es: "<<notaFinalMedia;
    return 0;
}
