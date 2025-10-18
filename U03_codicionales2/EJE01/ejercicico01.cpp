/*
    GUIA 3 - EJERCICIO 01:
    Hacer un programa que solicite el ingreso de un número, luego emitir un cartel por pantalla aclarando si el
    mismo es múltiplo de 5.


*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int numero;

    // Pido datos
    cout << "Ingrese un numero: ";
    cin >> numero;

    // Pregunto
    if(numero % 5 == 0){
        cout << "Es multiplo de 5" << endl;
    }



    system("pause");
    return 0;
}