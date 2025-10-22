/*
    GUIA 4 - EJERCICIO 07:
    Hacer un programa que solicite 10 números y luego mostrar por pantalla el máximo 
    de ellos y la posición en la que fue ingresado.


*/

#include <iostream>

using namespace std;

int main(){

    // Declaracion variables
    int numero;
    int maximo;
    int posicion = 0;


    for(int i = 0; i < 10; i++){
        cout << "Ingrese un numero: ";
        cin >> numero;

        if(i == 0){
            maximo = numero;
            posicion = i + 1;
        }
        else{
            if(numero > maximo){
                maximo = numero;
                posicion = i + 1;
            }
        }
    }

    cout << "-------------------" << endl;
    cout << "Numero maximo ---: " << maximo << endl;
    cout << "Posicion --------: " << posicion << endl;


    system("pause");
    return 0;
}