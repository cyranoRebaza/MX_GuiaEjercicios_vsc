/*
    EJERCICIO 08:
    Una importante cadena de delivery cuenta con una promoción por tiempo limitado en la que otorga un
    15% de descuento sobre el total del valor de la compra realizada. Hacer un programa para solicitar el monto
    total y el mismo calcule y emita por pantalla el total a cobrar con el descuento aplicado.


*/

#include <iostream>

using namespace std;

int main(){

    // Declarar las variables
    float montoTotal;
    float descuento;
    float totalCombrar;
    
    const int PORCENTAJE_DESCUENTO = 15;

    // Pedir datos
    cout << "Ingrese monto total: ";
    cin >> montoTotal;

    // Calculo
    descuento = montoTotal * PORCENTAJE_DESCUENTO / 100;
    totalCombrar = montoTotal - descuento;

    // Mostrar
    cout << "El total a cobrar es: " << totalCombrar << endl;

    
    system("pause");
    return 0;
}