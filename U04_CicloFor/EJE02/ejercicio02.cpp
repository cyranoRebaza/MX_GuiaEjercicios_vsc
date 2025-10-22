/*
    GUIA 4 - EJERCICIO 02:
    Hacer un programa que solicite 20 números y calcule y emita por pantalla cuántos son positivos (mayores a
    cero). Se debe mostrar un solo valor: el conteo final.


*/

#include <iostream>

using namespace std;

int main(){
    
    // Declarar variables
    int numero;
    int cantidadPositivos;

    // busco la cantidad de positivos
    cantidadPositivos = 0;

    for(int i = 0; i < 20; i++){
        cout << "Ingrese un numero: ";
        cin >> numero;

        if(numero > 0){
            cantidadPositivos++;
        }

    }

    // Mostrar
    cout << "La cantidad de numeros positivos es: " << cantidadPositivos << endl;
    
    
    system("pause");
    return 0;
}