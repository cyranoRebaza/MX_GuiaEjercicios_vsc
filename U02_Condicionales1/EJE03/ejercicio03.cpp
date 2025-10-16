/*
    GUIA 2 - EJERCICIO 03:
    Hacer un programa para ingresar dos números y que luego emita por pantalla el mayor de ellos o un
    cartel aclaratorio “Son iguales” en el caso de que así sea.


*/

#include <iostream>

using namespace std;

int main(){

    // Declarar las variables
    int numero1;
    int numero2;
   
    // Pedir datos
    cout << "Ingrese un numero: ";
    cin >> numero1;
    
    cout << "Ingrese un numero: ";
    cin >> numero2;

    // Pregunto
    if(numero1 == numero2){
        cout << "Son iguales" << endl;
    }
    else{
        if(numero1 > numero2){
            cout << "El mayor es: " << numero1 << endl;
        }
        else{
            cout << "El mayor es: " << numero2 << endl;
        }
    }

    


    system("pause");
    return 0;
}