/*
    GUIA 4 - EJERCICIO 11:
    Hacer un programa para ingresar 10 números y luego calcule y emita el mayor de los primos de la lista. En
    caso de no haber ningún número primo, deberá aclararlo con un cartel.




*/ 

#include <iostream>

using namespace std;

int main(){

    // Declaracion variables
    int numero;
    int cantidadDivisores;

    int maximoPrimo = 0;
    bool hayPrimo = false;

    for(int i = 0; i < 10; i++){
        cout << "Ingrese un numero: ";
        cin >> numero;

        // algoritmo primo
        cantidadDivisores = 0;

        for(int j = 1; j <= numero; j++){
            if(numero % j == 0){
                cantidadDivisores++;
            }
        }

        if(cantidadDivisores == 2){
            // buscamos el mayor de los primos
            if(hayPrimo == false){
                maximoPrimo = numero;
                hayPrimo = true;
            }
            else{
                if(numero > maximoPrimo){
                    maximoPrimo = numero;
                }
            }
        }
    }

    if(hayPrimo == true){
        cout << "el maximo primo es: " << maximoPrimo << endl;
    }
    else{
        cout << "No hay numero primo" << endl;
    }
    
    system("pause");
    return 0;
}
