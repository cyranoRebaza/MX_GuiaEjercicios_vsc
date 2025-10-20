/*
    GUIA 3 - EJERCICIO 12:
    Hacer un programa para ingresar tres números, emitir un cartel aclaratorio si la suma de los dos primeros es
    mayor al producto del segundo con el tercero.

*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int numero1;
    int numero2;
    int numero3;

    int suma;
    int producto;

    // Pedir datos
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout << "Ingrese un numero: ";
    cin >> numero2;

    cout << "Ingrese un numero: ";
    cin >> numero3;

    // Calculos
    suma = numero1 + numero2;
    producto = numero2 * numero3;

    if(suma > producto){
        cout << "Es mayor la suma" << endl;
    }




    system("pause");
    return 0;
}