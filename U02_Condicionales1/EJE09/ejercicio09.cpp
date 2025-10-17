/*
    GUIA 2 - EJERCICIO 09:
    Hacer un programa para ingresar cinco números distintos y luego mostrar por pantalla el mayor y el
    menor de ellos.


*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int numero1;
    int numero2;
    int numero3;
    int numero4;

    int menor;
    int mayor;

    // Pedir los datos
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout << "Ingrese un numero: ";
    cin >> numero2;

    cout << "Ingrese un numero: ";
    cin >> numero3;

    cout << "Ingrese un numero: ";
    cin >> numero4;

    // Calculo
    if(numero1 > numero2){
        mayor = numero1;
        menor = numero2;
    }
    else{
        mayor = numero2;
        menor = numero1;
    }

    if(numero3 > mayor){
        mayor = numero3;
    }
    else{
        if(numero3 < menor){
            menor = numero3;
        }
    }

    if(numero4 > mayor){
        mayor = numero4;
    }
    else{
        if(numero4 < menor){
            menor = numero4;
        }
    }
   

    // Mostrar
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    
    
    
    system("pause");
    return 0;
}