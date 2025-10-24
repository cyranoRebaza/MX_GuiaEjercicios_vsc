/*
    GUIA 5 - EJERCICIO 02:
    Hacer un programa para mostrar los números del 10 al 1. No se debe realizar
    ningún pedido de datos. USANDO WHILE.




*/ 
#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int variableControl;

    variableControl = 10;
    
    while(variableControl >= 1){
        cout << variableControl << endl;

        variableControl--;
    }


    return 0;
}