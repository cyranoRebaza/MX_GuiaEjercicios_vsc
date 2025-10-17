/*
    GUIA 2 - EJERCICIO 07:
    Hacer un programa para ingresar cuatro números distintos y luego mostrar por pantalla el mayor de ellos.


*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int numero1;
    int numero2;
    int numero3;
    int numero4;

    int mayor;


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
    if(numero1 > numero2){
        mayor = numero1;
    }
    else{
        mayor = numero2;
    }

    if(numero3 > mayor){
        mayor = numero3;
    }

    if(numero4 > mayor){
        mayor = numero4;
    }

    // Mostrar
    cout << "El numero mayor es: " << mayor << endl;
    
    
    system("pause");
    return 0;
}