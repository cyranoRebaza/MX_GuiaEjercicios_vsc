/*
    GUIA 4 - EJERCICIO 06:
    Hacer un programa que solicite UN número y luego calcule y emita un cartel aclaratorio 
    si el mismo es primo o no es primo.

    Nota: un número es primo cuando es divisible únicamente por 1 y por sí mismo.



*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int numero;
    int cantidadDivisores = 0;

    // Pedir datos
    cout << "Ingrese un numero: ";
    cin >> numero;

    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){
            cantidadDivisores++;
        }
    }

    if(cantidadDivisores == 2){
        cout << "Es primo" << endl;
    }
    else{
        cout << "No es primo" << endl;
    }
    
    system("pause");
    return 0;
}