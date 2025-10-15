/*
    EJERCICIO 06:
    Hacer un programa para ingresar por teclado las tres notas de exámenes de un
    alumno y luego calcule y emita por pantalla el promedio final.

*/

#include <iostream>

using namespace std;

int main(){

    // Declarar las variables
    int nota1;
    int nota2;
    int nota3;

    const int CANTIDAD_NOTAS = 3;

    float promedioNotas;

    // Pedir los datos
    cout << "Ingrese la nota 1: ";
    cin >> nota1;

    cout << "Ingrese la nota 2: ";
    cin >> nota2;

    cout << "Ingrese la nota 3: ";
    cin >> nota3;

    // Calcular
    promedioNotas = (float)(nota1 +  nota2 + nota3) / CANTIDAD_NOTAS;

    // Mostrar
    cout << "El promedio de notas es: " << promedioNotas << endl;

    
    system("pause");
    return 0;
}