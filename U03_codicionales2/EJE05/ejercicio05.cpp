/*
    GUIA 3 - EJERCICIO 05:
    Hacer un programa que solicite el ingreso de las notas del primer parcial y del segundo parcial de una alumna
    de programación. El programa deberá analizar las notas y emitir la situación de la alumna según la siguiente
    escala:

    A. Si tiene 8 o más en ambos parciales, emitir “aprobación directa”.
    B. Si no tiene 8 o más en ambos, pero tiene aprobados ambos parciales (se aprueba con 6 o más), emitir
    “rinde examen final”.
    C. Si tiene menos de 6 en alguno de los dos parciales, emitir “debe recuperar”.

    El programa debe emitir solo un cartel, el que corresponda.

*/
#include <iostream>

using namespace std;

int main(){

    // Declaracion variables
    int nota1;
    int nota2;

    // Pedir datos
    cout << "Ingrese la nota 1: ";
    cin >> nota1;

    cout << "Ingrese la nota 2: ";
    cin >> nota2;

    if(nota1 >= 8 && nota2 >= 8){
        cout << "Aprobacion directa" << endl;
    }
    else{
        if(nota1 >= 6 && nota2 >= 6){
            cout << "Rinde examen final" << endl;
        }
        else{
            cout << "Debe recuperar" << endl;
        }
    }


    system("pause");
    return 0;
}