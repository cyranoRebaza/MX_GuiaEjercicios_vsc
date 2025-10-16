/*
    GUIA 2 - EJERCICIO 04:
    Hacer un programa para ingresar un número y luego se emita un cartel por pantalla “Positivo” si el
    número es mayor a cero, “Negativo” si el número es menor a cero o “Cero” si el número es igual a cero.


*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int numero;

    // Pedir datos
    cout << "Ingrese un numero: ";
    cin >> numero;

    // Pregunto
    if(numero > 0){
        cout << "Positivo" <<endl;
    }
    else{
        if(numero < 0){
            cout << "Negativo" << endl;
        }
        else{
            cout << "Cero" << endl;
        }
    }
    
    
    system("pause");
    return 0;
}