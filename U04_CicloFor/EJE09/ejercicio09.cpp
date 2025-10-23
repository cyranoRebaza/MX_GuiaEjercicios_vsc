/*
    GUIA 4 - EJERCICIO 09:
    Hacer un programa que solicite 20 edades y luego calcule el promedio de edad de aquellas personas mayores
    a 18 años.



*/

#include <iostream>

using namespace std;

int main(){

    // Declaracion variables
    int edad;
    float promedioEdad;

    int cantidadEdad = 0;
    int sumaEdad = 0;

    for(int i = 0; i < 20; i++){
        cout << "Ingrese edad: ";
        cin >> edad;

        if(edad > 18){
            cantidadEdad++;
            sumaEdad += edad;
        }
    }

    // Calculo Promedio
    promedioEdad = (float)sumaEdad / cantidadEdad;

    // Muestro
    cout << "El promedio de edades mayores a 18 es: " << promedioEdad << endl;


    system("pause");
    return 0;
}