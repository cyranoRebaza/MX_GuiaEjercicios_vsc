/*
    GUIA 5 - EJERCICIO 01:
    Hacer un programa para mostrar los números del 1 al 10. No se debe realizar
    ningún pedido de datos. USANDO WHILE.




*/ 

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int variableControl;

    variableControl = 1;
    
    while(variableControl <= 10){
        cout << variableControl << endl;

        variableControl++;
    }



    system("pause");
    return 0;
}