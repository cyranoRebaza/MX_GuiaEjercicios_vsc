/*
    GUIA 4 - EJERCICIO 01 - version 2:
    Hacer un programa que solicite el ingreso de 10 números y que muestre el mayor de ellos por
    pantalla. Solo se debe emitir UN valor por pantalla.


*/

#include <iostream>

using namespace std;

int main(){
    
    // Declarar variables
    int numero;
    int mayor = 0;

    // Algoritmo para buscar el mayor de numeros positivos
    for(int i = 0; i < 10; i++){
        cout << "Ingrese un numero: ";
        cin >> numero;
        
        if(numero > mayor){
            mayor = numero;
        }

    }

    // Mostrar
    cout << "------------------------" << endl;
    cout << "El numero mayor es: " << mayor << endl;
    
    system("pause");
    return 0;
}