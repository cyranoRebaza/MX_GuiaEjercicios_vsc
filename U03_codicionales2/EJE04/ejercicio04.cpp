/*
    GUIA 3 - EJERCICIO 04:
    Un importante negocio de desinfectantes líquidos, realiza descuentos dependiendo de la cantidad de litros
    vendidos, según la siguiente escala:

    a. Si vende menos de 100 litros, no hay descuento.
    b. Si vende entre 101 y 300 litros, el descuento es del 10%.
    c. Si vende entre 301 y 500 litros, el descuento es del 15%.
    d. Finalmente, si la venta es de más de 500 litros, el descuento es del 25%.

    Hacer un programa que solicite el ingreso del importe total de la venta y la cantidad de litros vendidos. 
    Calcular y emitir el importe con el descuento aplicado.

*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    float importeVenta;
    float importeFinal;
    int LitrosVendidos;

    const float PORCENTAJE_DESCUENTO1 = 10;
    const float PORCENTAJE_DESCUENTO2 = 15;
    const float PORCENTAJE_DESCUENTO3 = 25;
    

    // Pedir datos
    cout << "Ingrese el Importe total de ventas: ";
    cin >> importeVenta;

    cout << "Ingrese la cantidad de litros vendidos: ";
    cin >> LitrosVendidos;


    // Pregunto
    if(LitrosVendidos > 500){
        importeFinal = importeVenta - (importeVenta * PORCENTAJE_DESCUENTO3 / 100);
    }
    else{
        if(LitrosVendidos > 300){
            importeFinal = importeVenta - (importeVenta * PORCENTAJE_DESCUENTO2 / 100);
        }
        else{
            if(LitrosVendidos > 100){
                importeFinal = importeVenta - (importeVenta * PORCENTAJE_DESCUENTO1 / 100);
            }
            else{
                importeFinal = importeVenta;
            }
        }
    }

    // Muestro
    cout << "El importe final es: " << importeFinal << endl;
    
    
    
    system("pause");
    return 0;
}

