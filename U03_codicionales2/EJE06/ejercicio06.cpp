/*
    GUIA 3 - EJERCICIO 06:
    Hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y que luego
    determine e informe con un cartel aclaratorio a qué tipo de triángulo corresponde:

    a. Equilátero: cuando los tres lados sean iguales.
    b. Isósceles: cuando dos de los tres lados sean iguales.
    c. Escaleno: cuando todos los lados sean distintos.

*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int lado1;
    int lado2;
    int lado3;

    // Pedir datos
    cout << "Ingrese el lado1: ";
    cin >> lado1;
    cout << "Ingrese el lado2: ";
    cin >> lado2;
    cout << "Ingrese el lado3: ";
    cin >> lado3;

    // Pregunto
    if(lado1 == lado2 && lado1 == lado3){
        cout << "Equilatero" << endl;
    }
    else{
        if(lado1 != lado2 && lado2 != lado3 && lado1 != lado3){
            cout << "Escaleno" << endl;
        }
        else{
            cout << "Isoseles" << endl;
        }
    }



    system("pause");
    return 0;
}