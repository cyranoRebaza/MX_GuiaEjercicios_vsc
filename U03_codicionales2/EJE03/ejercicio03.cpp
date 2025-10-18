/*
    GUIA 3 - EJERCICIO 03:
    Hacer un programa para ingresar dos números. Si el segundo es distinto de cero, 
    calcular la división del    primero por el segundo y mostrar el resultado por pantalla; 
    caso contrario, emitir un cartel aclarando que no se puede dividir por cero.


*/

#include <iostream>

using namespace std;

int main(){

    // Declaracion variables
    int numero1;
    int numero2;

    float cociente;

    // Pedir datos
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout << "Ingrese un numero: ";
    cin >> numero2;

    // Pregunto
    if(numero2 != 0){
        cociente = (float)numero1 / numero2;
        
        cout << "La division de " << numero1 << " con " << numero2 << " es " << cociente << endl;
    }
    else{
        cout << "No se puede dividir por 0" << endl;
    }


    
    
    
    system("pause");
    return 0;
}