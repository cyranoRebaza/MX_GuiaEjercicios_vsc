/*
    GUIA 5 - EJERCICIO 10:
    Hacer un programa que solicite una lista de números que corta cuando se
    ingresa un cero y luego emitir por pantalla el máximo de los números
    negativos y el mínimo de los números positivos.


*/ 

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int numero;
    int minimoPositivo;
    int maximoNegativo;

    bool hayPositivos = false;
    bool hayNegativos = false;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero != 0)
    {
        if(numero > 0){
            // positivos
            if(hayPositivos == false){
                minimoPositivo = numero;
                hayPositivos = true;
            }
            else{
                if(numero < minimoPositivo){
                    minimoPositivo = numero;
                }
            }
        }
        else{
            // negativos
            if(hayNegativos == false){
                maximoNegativo = numero;
                hayNegativos = true;
            }
            else{
                if(numero > maximoNegativo){
                    maximoNegativo = numero;
                }
            }
        }
        
        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    // Mostrar
    cout << "------------------------" << endl;
    cout << "Minimo positivo: " << minimoPositivo << endl;
    cout << "Maximo negativo: " << maximoNegativo << endl;
    
    
    
    system("pause");
    return 0;
}