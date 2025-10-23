/*
    GUIA 4 - EJERCICIO 10 - version 2:
    Hacer un programa que solicite 20 números y luego emitir por pantalla el máximo de los números pares y el
    mínimo de los números impares.



*/ 

#include <iostream>

using namespace std;

int main(){

    // Declaracion variables
    int numero;

    int maximoPar = 0;
    int minimoImpar = 0;

    bool hayPares = false;
    bool hayImpares = false;

    for(int i = 0; i < 20; i++){
        cout << "Ingrese un numero: ";
        cin >> numero;

        if(numero % 2 == 0){
            // busco maximo par            
            if(hayPares == false){
                maximoPar = numero;
                hayPares = true;
            }
            else{
                if(numero > maximoPar){
                    maximoPar = numero;
                }
            }
        }
        else{
            // busco minimo impar        
            if(hayImpares == false){
                minimoImpar = numero;
                hayImpares = true;
            }
            else{
                if(numero < minimoImpar){
                    minimoImpar = numero;
                }
            }
        }

    }

    // Mostrar
    cout << "-----------------------" << endl;
    cout << "Maximo par ------: " << maximoPar << endl;
    cout << "Minimo impares --: " << minimoImpar << endl;
    
    system("pause");
    return 0;
}