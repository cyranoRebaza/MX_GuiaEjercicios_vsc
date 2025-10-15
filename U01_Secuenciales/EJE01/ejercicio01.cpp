/*
Ejercicio 01: 
Hacer un programa que solicite por teclado dos numeros y luego devuelva la suma

*/

#include <iostream>

using namespace std;

int main(){

    // Declarar las variables
    int numero1;
    int numero2;
    int resultado;

    // Pido los numeros
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout << "Ingrese un numero: ";
    cin >> numero2;

    // Calcular
    resultado = numero1 + numero2;

    // Mostrar
    cout << "El resultado de la suma es: " << resultado << endl;
    
    system("pause");
    return 0;
}