/*
    GUIA 2 - EJERCICIO 12:
    Hacer un programa para ingresar un valor que estará expresado en minutos. Si los minutos superan los
    60, pasar el valor a horas, de lo contrario dejarlo en minutos. Mostrar el resultado en pantalla aclarando si se
    muestran minutos u horas.


*/

#include <iostream>

using namespace std;

int main(){

    // Declarar las variables
    int minutos;
    int horas;

    int restoMinutos;

    // Pedir datos
    cout << "Ingrese los valor en minutos: ";
    cin >> minutos;

    // Calculo
    if(minutos > 60){
        restoMinutos = minutos % 60;
        horas = (minutos - restoMinutos) / 60;
              
    }
    else{
        restoMinutos = minutos % 60;
        horas = (minutos - restoMinutos) / 60;
    }

    // mostrar

    cout << "El valor en horas es: " << horas << " horas" << endl;
    cout << "El valor en minutos es: " << restoMinutos << " minutos" << endl;

   
    
    
    
    
    system("pause");
    return 0;
}