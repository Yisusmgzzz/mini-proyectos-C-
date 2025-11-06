/* 
En una institución educativa, el profesor de la clase de tecnología requiere desarrollar una aplicación que calcule el promedio de las notas de sus estudiantes
y determine si aprobaron o no aprobaron la materia.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float n1, n2, n3, n4, prom = 0;
     
    //Nombre: Jesus Esteban Muñoz Gomez
    
    cout<<"ingresa las 4 notas: "<<endl;cin>>n1>>n2>>n3>>n4;
    prom = (n1+n2+n3+n4)/4; //se crea la variable del promedio para que se pueda procesar el resultado
    prom = round(prom*100)/100; //se redondea el valor para que no se pase de lo esperado

    if (prom>=3.5 && prom<=5.0) {
        cout<<"\n"<<prom<<endl;
        cout<<"Aprobado ✅"<<endl;
    } else; if (prom>=3.0 && prom<3.5) {
        cout<<"\n"<<prom<<endl;
        cout<<"en este momento no tiene aprobada la materia de tecnologia, " <<
            "pero tiene oportunidad de recuperar. ⚠️"<<endl;
    } else; if (prom < 3.0) {
        cout<<"\n"<<prom<<endl;
        cout<<"No aprobo ❌"<<endl;
    } 
    return 0;
}
