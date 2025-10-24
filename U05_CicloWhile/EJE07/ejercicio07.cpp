/*
    GUIA 5 - EJERCICIO 07:
    Hacer un programa que solicite una lista de números que corta cuando se
    ingresa un cero y luego mostrar por pantalla el máximo de ellos y la posición
    en la que fue ingresado.


*/ 

#include <iostream>

using namespace std;

int main(){

    // Declaracion variables
    int numero;    
    
    int posicion = 0;
    int numeroMaximo = 0;
    int posicionNumeroMaximo = posicion;
    
    // Pedir datos
    cout << "Ingrese un numero: ";
    cin >> numero;    

    while (numero != 0)
    {
        posicion++;

        // algoritmo buscar el mayor
        if(posicion == 1){
            numeroMaximo = numero; 
            posicionNumeroMaximo = posicion;
        }
        else{
            if(numero > numeroMaximo){
                numeroMaximo = numero;
                posicionNumeroMaximo = posicion;
            }
        }      
       
        
        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    // Mostrar
    cout << "El numero maximo --: " << numeroMaximo << endl;
    cout << "La posicion es ----: " << posicionNumeroMaximo << endl;
    


    system("pause");
    return 0;
}