/*
    GUIA 2 - EJERCICIO 08:
    Hacer un programa para ingresar cuatro números distintos y luego mostrar por pantalla el menor de
    ellos.


*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int numero1;
    int numero2;
    int numero3;
    int numero4;

    int menor;

    // Pedir los datos
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout << "Ingrese un numero: ";
    cin >> numero2;

    cout << "Ingrese un numero: ";
    cin >> numero3;

    cout << "Ingrese un numero: ";
    cin >> numero4;

    // Calculo
    if(numero1 < numero2){
        menor = numero1;
    }
    else{
        menor = numero2;
    }

    if(numero3 < menor){
        menor = numero3;
    }

    if(numero4 < menor){
        menor = numero4;
    }

    // Mostrar
    cout << "El numero menor es: " << menor << endl;
    
    
    
    system("pause");
    return 0;
}