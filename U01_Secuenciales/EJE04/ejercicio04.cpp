/*
    EJERCICIO 04:
    Hacer un programa que permita ingresar los kilómetros existentes entre dos
    ciudades y la velocidad promedio de un vehículo. Calcular y emitir por pantalla
    el tiempo aproximado que demandará llegar de un punto a otro teniendo en
    cuenta los datos ingresados.

*/

#include <iostream>

using namespace std;

int main(){
    
    // Declarar las variables
    float kilometros;
    int velocidadPromedio;
    float tiempo;

    // Pedir los datos
    cout << "Ingrese los kilometros: ";
    cin >> kilometros;

    cout << "Ingrese la velocidad promedio: ";
    cin >> velocidadPromedio;

    // Calcular el tiempo
    tiempo = kilometros / velocidadPromedio;

    // Mostrar
    cout << "El tiempo promedio es: " << tiempo << " horas" << endl;
    
    
    system("pause");
    return 0;
}