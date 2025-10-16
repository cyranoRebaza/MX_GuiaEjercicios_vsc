/*
    EJERCICIO 10:
    Hacer un programa que permita ingresar por teclado dos números y que luego muestre por pantalla la
    suma, la resta, la multiplicación y la división de dichos números Se deben mostrar cuatro resultados en
    pantalla. Los números deben ser solicitados una única vez.


*/

#include <iostream>

using namespace std;

int main(){

    // Declarar las variables
    int numero1;
    int numero2;

    int suma;
    int resta;
    int multiplicacion;
    float division;

    // Pedir datos
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout << "Ingrese un numero: ";
    cin >> numero2;

    // Calculo
    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = (float)numero1 / numero2;

    // Mostrar
    cout << "-------------------------------" << endl;
    cout << "suma ------------------: " << suma << endl;
    cout << "resta -----------------: "<< resta << endl;
    cout << "multiplicacion --------: " << multiplicacion << endl;
    cout << "division --------------: " << division << endl;





    system("pause");
    return 0;
}