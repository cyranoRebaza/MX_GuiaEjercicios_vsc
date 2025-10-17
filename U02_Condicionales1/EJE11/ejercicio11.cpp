/*
    GUIA 2 - EJERCICIO 11:
    Hacer un programa para ingresar cuatro números y luego mostrar por pantalla cuántos son menores
    a 100.


*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int numero1;
    int numero2;
    int numero3;
    int numero4;

    int cantidadMenores = 0;

  
    // Pedir los datos
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout << "Ingrese un numero: ";
    cin >> numero2;

    cout << "Ingrese un numero: ";
    cin >> numero3;

    cout << "Ingrese un numero: ";
    cin >> numero4;


    // Pregunto y muetro
    if(numero1 < 100){
        cantidadMenores++;
    }

    if(numero2 < 100){
        cantidadMenores++;
    }

    if(numero3 < 100){
        cantidadMenores++;
    }

    if(numero4 < 100){
        cantidadMenores++;

    }

    
    cout << "-----------------------------------------------" << endl;
    cout << "Los cantidad de numeros menores a 100 son: " << cantidadMenores << endl;
    
    system("pause");
    return 0;
}