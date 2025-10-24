/*
    GUIA 5 - EJERCICIO 03:
    Hacer un programa que solicite la edad de un grupo de personas. El programa
    deberá pedir edades hasta que se ingrese una edad menor a 18 años. Deberá
    mostrar por pantalla cuántas personas mayores se registraron.




*/ 

#include <iostream>

using namespace std;

int main(){

    // Declaracion variables
    int edad;
    int cantidadMayores = 0;

    cout << "Ingrese edad: ";
    cin >> edad;

    while(edad > 18){
        cantidadMayores++;

        cout << "Ingrese edad: ";
        cin >> edad;

    }

    // muestro
    cout << "La cantidad  de mayores es: " << cantidadMayores << endl;


    system("pause");
    return 0;
}