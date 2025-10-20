/*
    GUIA 3 - EJERCICIO 10:
    Hacer un programa que solicite cuatro números. Emitir un cartel aclaratorio si son todos iguales entre sí,
    caso contrario, no emitir nada.

*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int numero1;
    int numero2;
    int numero3;
    int numero4;

    // Pedir datos
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout << "Ingrese un numero: ";
    cin >> numero2;

    cout << "Ingrese un numero: ";
    cin >> numero3;

    cout << "Ingrese un numero: ";
    cin >> numero4;

    // Calculo
    if(numero1 == numero2 && numero2 == numero3 && numero3 == numero4){
        cout << "Son todos iguales" << endl;
    }

    system("pause");
    return 0;
}