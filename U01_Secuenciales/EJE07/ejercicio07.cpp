/*
    EJERCICIO 07:
    Hacer un programa para ingresar por teclado los metros cuadrados totales de
    un predio y los metros cuadrados cubiertos; luego calcular y mostrar por
    pantalla el porcentaje de metros cuadrados cubiertos y el porcentaje de
    metros cuadrados descubiertos.


*/


#include <iostream>

using namespace std;

int main(){

    // Declarar las variables
    float metrosCuadradosTotales;
    float metrosCuadradosCubiertos;
    float metrosCuadradosDescubiertos;

    float porcentajeMetrosCubiertos;
    float porcentajeMetrosDescubiertos;

    // Pedir los datos
    cout << "Ingrese los metros cuadrados totales: ";
    cin >> metrosCuadradosTotales;

    cout << "Ingrese los metros cuadrados cubiertos: ";
    cin >> metrosCuadradosCubiertos;

    // calculo
    metrosCuadradosDescubiertos = metrosCuadradosTotales - metrosCuadradosCubiertos;

    porcentajeMetrosCubiertos = metrosCuadradosCubiertos * 100 / metrosCuadradosTotales;
    
    porcentajeMetrosDescubiertos = metrosCuadradosDescubiertos * 100 / metrosCuadradosTotales;

    // Mostrar
    cout << "Porcentaje metros cuadrados cubiertos: " << porcentajeMetrosCubiertos << " %" << endl;
    
    cout << "Porcentaje metros cuadrados descubiertos: " << porcentajeMetrosDescubiertos << " %" << endl;



    system("pause");
    return 0;
}