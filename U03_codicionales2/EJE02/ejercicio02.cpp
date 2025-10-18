/*
    GUIA 3 - EJERCICIO 02:
    Hacer un programa que solicite el ingreso de dos números y luego calcular:

    a. La resta, si el primero es mayor que el segundo.
    b. La suma, si son iguales.
    c. El producto, si el primero es menor.

    Se deberá emitir un cartel por pantalla con el resultado correspondiente.


*/

#include <iostream>

using namespace std;

int main(){

    // Declaracion variables
    int numero1;
    int numero2;

    int resultado;

    // Pedir datos
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout << "Ingrese un numero: ";
    cin >> numero2;

    // Calcular
    if(numero1 > numero2){
        resultado = numero1 - numero2;
    }
    else{
        if(numero1 == numero2){
            resultado = numero1 + numero2;
        }
        else{
            resultado = numero1 * numero2;
        }
    }

    // Mostrar
    cout << "El resultado es: " << resultado << endl;
    
    system("pause");
    return 0;
}