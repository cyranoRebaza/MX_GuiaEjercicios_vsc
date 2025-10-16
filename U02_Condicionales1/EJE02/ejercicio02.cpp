/*
    GUIA 2 - EJERCICIO 02:
    Hacer un programa para ingresar dos números distintos y luego se muestre por pantalla el
    menor de ellos.


*/

#include <iostream>

using namespace std;

int main(){

    // Declaracion variables
    int numero1;
    int numero2;

    int menor;

    // Pedir los datos
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout << "Ingrese un numero: ";
    cin >> numero2;


    // Pregunto
    if(numero1 < numero2){
        menor = numero1;
    }
    else{
        menor = numero2;
    }

    // muestro
    cout << "El numero menor es: " << menor << endl;
    
    
    
    system("pause");
    return 0;
}