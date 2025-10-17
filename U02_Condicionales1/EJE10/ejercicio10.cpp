/*
    GUIA 2 - EJERCICIO 10:
    Hacer un programa para ingresar cuatro números y luego mostrar por pantalla cuáles son mayores a
    100.


*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int numero1;
    int numero2;
    int numero3;
    int numero4;

  
    // Pedir los datos
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout << "Ingrese un numero: ";
    cin >> numero2;

    cout << "Ingrese un numero: ";
    cin >> numero3;

    cout << "Ingrese un numero: ";
    cin >> numero4;

    cout << "-------------------------------" << endl;
    cout << "Los numeros mayores a 100 son: " << endl;

    // Pregunto y muetro
    if(numero1 > 100){
        cout << numero1 << endl;
    }

    if(numero2 > 100){
        cout << numero2 << endl;
    }

    if(numero3 > 100){
        cout << numero3 << endl;
    }

    if(numero4 > 100){
        cout << numero4 << endl;
    }

    
    
    
    system("pause");
    return 0;
}