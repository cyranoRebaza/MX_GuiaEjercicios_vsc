/*
    GUIA 5 - EJERCICIO 09:
    Realizar nuevamente el ejercicio 8, pero ahora debe devolver además la posición en la que fue encontrado
    cada uno de los mínimos.


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

    int posicion = 0;
    int posicion1 = 0;
    int posicion2 = 0;

    
    // Pedir datos
    cout << "Ingrese un numero: ";
    cin >> numero;    

    while (numero != 0)
    {
        posicion++;   
        
        if(banderaPrimerMenor == false){
            PrimerMenor = numero;
            posicion1 = posicion;
            banderaPrimerMenor = true;             
        }
        else{
            if(banderaSegundoMenor == false){
                
                banderaSegundoMenor = true;

                if(numero < PrimerMenor){
                    segundoMenor = PrimerMenor;
                    PrimerMenor = numero;

                    posicion2 = posicion1;
                    posicion1 = posicion;
                }
                else{
                    segundoMenor = numero;
                    posicion2 = posicion;
                }

            }
            else{
                if(numero < PrimerMenor){
                    segundoMenor = PrimerMenor;
                    PrimerMenor = numero;
                    
                    posicion2 = posicion1;
                    posicion1 = posicion;

                }
                else{
                    if(numero < segundoMenor){
                        segundoMenor = numero;
                        posicion2 = posicion;
                    }
                }
            }
    
        }      
       
        
        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    // Mostrar
    cout << "------------------------------------------------" << endl;
    cout << "El primer numero menor es -----: " << PrimerMenor << ", posicion " << posicion1 << endl;
    cout << "El segundo numero menor es ----: " << segundoMenor << ", posicion " << posicion2 << endl;
    


    system("pause");
    return 0;
}