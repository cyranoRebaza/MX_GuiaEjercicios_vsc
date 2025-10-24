/*
    GUIA 5 - EJERCICIO 08:
    Hacer un programa que solicite una lista de números que corta cuando se
    ingresa un cero y luego mostrar por pantalla el menor y el segundo menor.


*/ 

#include <iostream>

using namespace std;

int main(){

    // Declaracion variables
    int numero;    
    
    int posicion = 0;
    int PrimerNumeroMenor = 0;
    int segundoNumeroMenor = 0;

    
    // Pedir datos
    cout << "Ingrese un numero: ";
    cin >> numero;    

    while (numero != 0)
    {
        posicion++;

        // algoritmo buscar el menor
        if(posicion == 1){
            PrimerNumeroMenor = numero;             
        }
        else{
            if(posicion == 2){
                if(numero < PrimerNumeroMenor){
                    segundoNumeroMenor = PrimerNumeroMenor;
                    PrimerNumeroMenor = numero;
                }
                else{
                    segundoNumeroMenor = numero;
                }

            }
            else{
                if(numero < PrimerNumeroMenor){
                    segundoNumeroMenor = PrimerNumeroMenor;
                    PrimerNumeroMenor = numero;
                }
                else{
                    if(numero < segundoNumeroMenor){
                        segundoNumeroMenor = numero;
                    }
                }
            }
    
        }      
       
        
        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    // Mostrar
    cout << "El primer numero menor es -----: " << PrimerNumeroMenor << endl;
    cout << "El segundo numero menor es ----: " << segundoNumeroMenor << endl;
    


    system("pause");
    return 0;
}