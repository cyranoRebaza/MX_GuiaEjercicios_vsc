/*
    GUIA 4 - EJERCICIO 03:
    Hacer un programa para mostrar los números del 1 al 10. No se debe realizar ningún pedido de datos.


*/

#include <iostream>

using namespace std;

int main(){
    
    // usaremos la variable de control como contador
    for(int i = 1; i <= 10; i++){
        cout << "numero: " << i << endl;
    }
    
    system("pause");
    return 0;
}