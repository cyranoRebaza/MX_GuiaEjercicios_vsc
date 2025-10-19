/*
    GUIA 3 - EJERCICIO 08:
     El negocio de desinfectantes, antes mencionado, vende detergente suelto, y los precios se 
     aplican según la siguiente escala:

    a. 25 ARS por litro, los primeros 50 litros.
    b. 20 ARS por litro, si la venta es de 101 a 200 litros.
    c. 15 ARS por litro, si la venta es de 201 a 500 litros.
    d. 10 ARS por litro, si la venta es de más de 500 litros.

    Además, si se paga en efectivo, tiene un descuento adicional del 10% sobre el importe final.

    Hacer un programa que solicite la cantidad de litros vendidos y el tipo de pago (ingresará 1 
    si paga en efectivo, y 0 con cualquier otro medio de pago); calcular y emitir por pantalla el 
    monto final a abonar por el cliente.

*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int litrosVendidos;
    int tipoPago;

    float montoFinal;

    const float PRECIO_LITRO1 = 25.0F; 
    const float PRECIO_LITRO2 = 20.0F; 
    const float PRECIO_LITRO3 = 15.0F; 
    const float PRECIO_LITRO4 = 10.0F; 

    const int PORCENTAJE_DESCUENTO = 10;



    // Pedir los datos
    cout << "Ingrese cantidad de litros vendidos: ";
    cin >> litrosVendidos;

    cout << "Ingrese tipo de pago (1 - efectivo, 0 - otro medio de pago): ";
    cin >> tipoPago;


    // Pregunto
    if(litrosVendidos > 500){
        montoFinal = litrosVendidos * PRECIO_LITRO4;
    }
    else{
        if(litrosVendidos > 200){
            montoFinal = litrosVendidos *  PRECIO_LITRO3;
        }
        else{
            if(litrosVendidos > 100){
                montoFinal = litrosVendidos * PRECIO_LITRO2;
            }
            else{
                montoFinal = litrosVendidos * PRECIO_LITRO1;
            }
        }
    }


    // Calculo
    if(tipoPago == 1){
        montoFinal = montoFinal - (montoFinal * PORCENTAJE_DESCUENTO / 100); 
    }

    // Muestro
    cout << "El monto final es: " << montoFinal << endl;
    
    
    system("pause");
    return 0;
}