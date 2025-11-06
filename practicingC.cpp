/*
 * Escribe un programa que lea de la entrada estandar al precio de un producto
 * y muestre en la salida estandar el precio del producto al aplicarle el IVA
 */
#include <iostream>
using namespace std;
int main(){
    float precio, precioIVA = 0;
    cout<<"Digita el precio del producto: "<<endl;cin>>precio;

    precioIVA = 1.21*precio;
    cout<<"PRECIO FINAL POR IVA: "<<precioIVA;
    return 0;
}

