/*
    GUIA 5 - EJERCICIO 11:
    Hacer un programa para ingresar una lista de números que corta cuando se ingresa un cero y luego
    mostrar: 
    A) la cantidad de números primos
    B) la cantidad de números pares 
    C) la cantidad de positivos
    D) la cantidad de negativos.


*/ 

#include <iostream> 

using namespace std;

int main(){

    // Declarar variables
    int numero;


    // Variables puntoA
    int variableControl;
    int cantidadDivisores;

    int cantidadPrimos = 0;



    // Variables puntoB
    int cantidadPares = 0;


    // Variables puntoC
    int cantidadPositivos = 0;

    // Variables puntoD
    int cantidadNegativos = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero != 0)
    {
        
        // puntoA             
        variableControl = 1;
        cantidadDivisores = 0;

        while (variableControl <= numero)
        {
            if(numero % variableControl == 0){
                cantidadDivisores++;
            }

            variableControl++;
        }

        if(cantidadDivisores == 2){
            cantidadPrimos++;
        }       
                

        // puntoB
        if(numero % 2 == 0){
            cantidadPares++;
        }


        // puntoC
        if( numero > 0){
            cantidadPositivos++;
        }

        // punto D
        if(numero < 0){
            cantidadNegativos++;
        }
        

        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    // mostrar puntoA
    cout << "La cantidad de numeros primos es: " << cantidadPrimos << endl;

    // mostrar puntoB
    cout << "La cantidad de numeros pares es: " << cantidadPares << endl;

    // mostrar puntoC
    cout << "la cantidad de numeros positivos es: " << cantidadPositivos << endl;

    // mostrar puntoC
    cout << "la cantidad de numeros negativos es: " << cantidadNegativos << endl;

    
    
    system("pause");
    return 0;
}