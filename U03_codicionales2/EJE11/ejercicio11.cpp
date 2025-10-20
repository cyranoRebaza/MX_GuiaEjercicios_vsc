/*
    GUIA 3 - EJERCICIO 11:
    Hacer un programa para ingresar tres números, luego mostrarlos ordenados de menor a mayor.

*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int numero1;
    int numero2;
    int numero3;    
    
    int menor;
    int medio;
    int mayor;

    // Pedir datos
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout << "Ingrese un numero: ";
    cin >> numero2;

    cout << "Ingrese un numero: ";
    cin >> numero3;

    // calculo
    if(numero1 < numero2){
        menor = numero1;
        if(numero2 < numero3){
            medio = numero2;
            mayor = numero3;
        }
        else{
            medio = numero3;
            mayor = numero2;
        }
    }
    else{
        menor = numero2;
        if(numero1 < numero3){
            medio = numero1;
            mayor = numero3;
        }
        else{
            medio = numero3;
            mayor = numero1;
        }

    }

    // Mostrar
    cout << "-----------------" << endl;
    cout << "orden Creciente: " << endl;
    cout << menor << endl;
    cout << medio << endl;
    cout << mayor << endl;

    
    system("pause");
    return 0;
}