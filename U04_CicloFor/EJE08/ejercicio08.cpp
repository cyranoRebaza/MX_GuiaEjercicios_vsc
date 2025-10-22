/*
    GUIA 4 - EJERCICIO 07:
    Hacer un programa que solicite 20 números y luego mostrar por pantalla el menor 
    de ellos y la posición en la que fue encontrado.


*/

#include <iostream>

using namespace std;

int main(){

    // Declaracion variables
    int numero;
    int menor;
    int posicion = 0;


    for(int i = 0; i < 20; i++){
        cout << "Ingrese un numero: ";
        cin >> numero;

        if(i == 0){
            menor = numero;
            posicion = i + 1;
        }
        else{
            if(numero < menor){
                menor = numero;
                posicion = i + 1;
            }
        }
    }

    cout << "-------------------" << endl;
    cout << "Numero menor ---: " << menor << endl;
    cout << "Posicion --------: " << posicion << endl;


    system("pause");
    return 0;
}