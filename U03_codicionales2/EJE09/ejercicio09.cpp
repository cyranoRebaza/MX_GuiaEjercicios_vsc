/*
    GUIA 3 - EJERCICIO 09:
    Una importante marca de computadoras permite elegir cierta configuración del equipo a comprar. 
    Para ello existe la siguiente escala de precios:

                I5 (1)          i7 (2)          i9 (3)
    8 RAM (1)   USD 800         USD 900         USD 1200
    16 RAM (2)  USD 900         USD 1000        USD 1400
    32 RAM (3)  USD 1000        USD 1400        USD 2000

    Además, el equipo viene con un disco que permite almacenar 500 GB de información, pudiéndose 
    ampliar a 1 TB, si así lo desea, el cual tiene un costo adicional de USD 300.

    Hacer un programa que solicite la opción de procesador, la opción de memoria RAM, y si extiende 
    el disco o no (ingresa 1 para extender y 0 para no extender). Calcular y emitir por pantalla el 
    monto de la máquina seleccionada.

*/

#include <iostream>

using namespace std;

int main(){

    // Declarar variables
    int procesador;
    int memoriRam;
    bool extenderDisco = false;

    float precio;

    const float COSTO_ADICIONAL = 300;


    // Pedir datos
    cout << "Ingrese el tipo procesador (1 - i5 | 2 - i7 | 3 - i9): ";
    cin >> procesador;

    cout << "Ingrese el tipo de memoria ram (1 - 8 RAM | 2 - 16 RAM | 3 - 32 RAM): ";
    cin >> memoriRam;

    cout << "Ingrese si va extender el disco (1 - extender disco | 1 - no extender disco): ";
    cin >> extenderDisco;

    // Calculo
    switch (procesador)
    {
    case 1:
        switch (memoriRam)
        {
        case 1:
            precio = 800;
            break;
        case 2:
            precio = 900;
            break;
        case 3:
            precio = 1000;
            break;        
        }

        break;    

    case 2:
        switch (memoriRam)
        {
        case 1:
            precio = 900;
            break;
        case 2:
            precio = 1000;
            break;
        case 3:
            precio = 1400;
            break;        
        }

        break;

    case 3:
        switch (memoriRam)
        {
        case 1:
            precio = 1200;
            break;
        case 2:
            precio = 1400;
            break;
        case 3:
            precio = 2000;
            break;        
        }

        break;

    }

    if(extenderDisco == true){
        precio = precio + COSTO_ADICIONAL;
    }

    // Muestro
    cout << "El precio de la maquina es: " << precio << endl;

    
    
    system("pause");
    return 0;
}