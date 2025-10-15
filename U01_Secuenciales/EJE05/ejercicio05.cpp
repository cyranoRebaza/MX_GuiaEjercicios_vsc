/*
    EJERCICIO 05:
    Una casa de computación paga a sus empleados un sueldo fijo de ARS15000
    más una comisión del 5% sobre el total facturado por cada empleado. Hacer un
    programa para ingresar el total facturado por un empleado y que luego calcule
    y emita por pantalla el sueldo total a cobrar por el mismo.

*/

#include <iostream>

using namespace std;

int main(){

    // Declarar las variables
    float totalFacturado;
    float sueldoTotal;
    float comision;

    const float SUELDO_FIJO = 15000;
    const float PORCENTAJE_COMISION = 5;

    // Pedir datos
    cout << "Ingrese el total facturado: ";
    cin >> totalFacturado;

    // Calcular
    comision = totalFacturado * PORCENTAJE_COMISION / 100;

    sueldoTotal = SUELDO_FIJO + comision;

    // Mostrar 
    cout << "El sueldo total es: " << sueldoTotal << endl;

    
    
    system("pause");
    return 0;
}