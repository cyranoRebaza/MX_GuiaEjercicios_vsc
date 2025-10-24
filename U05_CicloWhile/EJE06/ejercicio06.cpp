/*
    GUIA 5 - EJERCICIO 06:
    Hacer un programa que solicite UN número y luego calcule y emita un cartel
    aclaratorio si el mismo es primo o no es primo.

    Nota: usando While. Ya lo hicimos con FOR, ahora con While.


*/ 

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int numero;
    int variableControl;

    int cantidadDivisores = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    variableControl = 1;
    while (variableControl <= numero)
    {
        if(numero % variableControl == 0){
            cantidadDivisores++;
        }

        variableControl++;
    }

    if(cantidadDivisores == 2){
        cout << "El numero " << numero << ", Es primo" << endl;
    }
    else{
        cout << "El numero " << numero << ", NO es primo" << endl;
    }
    
    
    
    
    system("pause");
    return 0;
}