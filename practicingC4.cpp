#include <iostream>
using namespace std;

int main(){
    float a, b, c, d, e, f, resultado = 0;

    cout<<"ingresa los valores de cada una de las variables: ";cin>>a>>b>>c>>d>>e>>f;
    resultado = (a+(b/c))/(d+(e/f));
    
    cout.precision(2);
    cout<<"el resultado de la expresion es "<<resultado;


    return 0;
}
