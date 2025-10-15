/*
    Ejercicio 02: 
    Hacer un programa para solicitar por teclado un número y luego devolver su valor elevado al cubo.

*/

#include <iostream>

using namespace std;

int main(){

    // Declaracion de variables
    int numero;
    int cubo;

    // Pedir el numero
    cout << "Ingrese un numero: ";
    cin >> numero;

    // Calcular el numero al cubo
    cubo = numero * numero * numero;

    // Mostrar
    cout << "El numero " << numero << " elvado al cubo es: " << cubo << endl;
    

    
    
    system("pause");
    return 0;
}