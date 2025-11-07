/*7.La calificacion final de un estudiante es la media ponderada de tres notas:
 la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un
 60% del total y la nota de participacion que cuenta con el 10% restante. Escriba un
 programa que lea de la entrada estandar las tres notas de un alumno y escriba en la salida estandar
 su nota final
*/
#include <iostream>
using namespace std;

int main()
{
 float nota[3], notaPractica, notaTeorica, notaParticipacion, notaFinal = 0;
 float peso[3] = {0.30, 0.60, 0.10};

  for(int i=0;i<3;i++)
  {
     cout<<"ingresa la nota "<<i+1<<endl;cin>>nota[i];
  } 
  notaPractica = nota[0]*peso[0];
  notaTeorica = nota[1]*peso[1];
  notaParticipacion = nota[2]*peso[2];
  
  notaFinal = (notaPractica+notaTeorica+notaParticipacion);
  cout.precision(2);
  cout<<"la calificacion final segun la practica, teoria y participacion es: "<<notaFinal<<endl;
    return 0;
}
