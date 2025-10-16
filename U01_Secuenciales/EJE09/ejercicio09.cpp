/*
    EJERCICIO 09:
    Una universidad desea conocer los porcentajes de mujeres y hombres en las carreras de ciencias exactas.
    Se solicita un programa para cargar la cantidad de mujeres y la cantidad de hombres y que el mismo calcule
    y emita por pantalla los porcentajes correspondientes.


*/

#include <iostream>

using namespace std;

int main(){

    // Declarar las variables
    int cantidadMujeres;
    int cantidadHombres;

    float porcentajeMujeres;
    float porcentajeHombres;

    int totalPersonas;

    // Pedir datos
    cout << "Ingrese la cantidad de mujeres: ";
    cin >> cantidadMujeres;

    cout << "Ingrese la cantidad de hombres: ";
    cin >> cantidadHombres;

    // calculo
    totalPersonas = cantidadMujeres + cantidadHombres;

    porcentajeMujeres = (float)cantidadMujeres * 100 / totalPersonas;
    porcentajeHombres = (float)cantidadHombres * 100 / totalPersonas;

    // Mostrar
    cout << "Porcentaje Mujeres: " << porcentajeMujeres << " %" << endl;
    cout << "Porcentaje Hombres: " << porcentajeHombres << " %" << endl;
    
    
    
    system("pause");
    return 0;
}