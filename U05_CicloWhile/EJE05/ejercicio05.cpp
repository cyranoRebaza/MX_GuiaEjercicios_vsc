/*
    GUIA 5 - EJERCICIO 05:
    Hacer un programa que muestre los números del 1 al 100 de 5 en 5. Ejemplo:
    0, 5, 10, 15, 20…. 100. Usando While.




*/ 
#include <iostream> 

using namespace std;

int main(){

    // Declarar variables
    int variableControl;

    variableControl = 0;
    
    while(variableControl <= 100){
        
        
        cout << variableControl << endl;

        variableControl +=5;
    }
    
    system("pause");
    return 0;
}