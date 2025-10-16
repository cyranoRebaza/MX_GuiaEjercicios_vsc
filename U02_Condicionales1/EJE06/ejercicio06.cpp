/*
    GUIA 2 - EJERCICIO 06:
    Una casa de video juegos otorga un descuento dependiendo del importe de la compra realizada
    según los siguientes valores:

        • Si el importe es menor a ARS 1000, no hay descuento.
        • Si el importe es ARS 1000 o más pero menor a ARS 5000, aplica un descuento del 10%.
        • Si el importe es ARS 5000 o más, aplica un descuento del 18%. 
        
    Hacer un programa para ingresar un importe de venta y luego muestre por pantalla el 
    importe final con el descuento que corresponda.


*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    float importeVenta;
    float importeFinal;

    const float  PORCENTAJE_DESCUENTO1 = 10.0;
    const float  PORCENTAJE_DESCUENTO2 = 18.0;


    const float LIMITE_IMPORTE1 = 1000;
    const float LIMITE_IMPORTE2 = 5000;

    // Pedir datos
    cout << "Ingrese importe de venta: $ ";
    cin >> importeVenta;

    // Pregunto
    if(importeVenta >= LIMITE_IMPORTE2){
        importeFinal = importeVenta - (importeVenta *  PORCENTAJE_DESCUENTO2 / 100);
    }
    else{
        if(importeVenta >= LIMITE_IMPORTE1){
            importeFinal = importeVenta - (importeVenta * PORCENTAJE_DESCUENTO1 / 100);
        }
        else{
            importeFinal = importeVenta;
        }
    }

    // Muestro
    cout << "El importe final es: $ " << importeFinal << endl;
    


    system("pause");
    return 0;
}