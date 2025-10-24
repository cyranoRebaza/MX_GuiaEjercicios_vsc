/*
    GUIA 5 - EJERCICIO 08 - verision 2:
    Hacer un programa que solicite una lista de números que corta cuando se
    ingresa un cero y luego mostrar por pantalla el menor y el segundo menor.


*/ 

#include <iostream>

using namespace std;

int main(){

    // Declaracion variables
    int numero;    
    
    bool banderaPrimerMenor = false;
    bool banderaSegundoMenor = false;

    int PrimerMenor = 0;
    int segundoMenor = 0;

    
    // Pedir datos
    cout << "Ingrese un numero: ";
    cin >> numero;    

    while (numero != 0)
    {
           
        if(banderaPrimerMenor == false){
            PrimerMenor = numero;
            banderaPrimerMenor = true;             
        }
        else{
            if(banderaSegundoMenor == false){
                
                banderaSegundoMenor = true;

                if(numero < PrimerMenor){
                    segundoMenor = PrimerMenor;
                    PrimerMenor = numero;
                }
                else{
                    segundoMenor = numero;
                }

            }
            else{
                if(numero < PrimerMenor){
                    segundoMenor = PrimerMenor;
                    PrimerMenor = numero;
                }
                else{
                    if(numero < segundoMenor){
                        segundoMenor = numero;
                    }
                }
            }
    
        }      
       
        
        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    // Mostrar
    cout << "El primer numero menor es -----: " << PrimerMenor << endl;
    cout << "El segundo numero menor es ----: " << segundoMenor << endl;
    


    system("pause");
    return 0;
}