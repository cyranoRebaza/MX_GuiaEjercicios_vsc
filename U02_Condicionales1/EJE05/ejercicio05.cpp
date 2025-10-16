/*
    GUIA 2 - EJERCICIO 05:
    Hacer un programa para ingresar un número y mostrar por pantalla un cartel aclaratorio si el mismo
    es PAR o IMPAR.


*/

#include <iostream>

using namespace std;

int main(){

    // Declarar varibles
    int numero;

    // Pedir datos
    cout << "Ingrese un numero: ";
    cin >> numero;

    // Pregunto
    if(numero % 2 == 0){
        cout << "es PAR" << endl;
    }
    else{
        cout << "es IMPAR" << endl;
    }

    system("pause");
    return 0;
}