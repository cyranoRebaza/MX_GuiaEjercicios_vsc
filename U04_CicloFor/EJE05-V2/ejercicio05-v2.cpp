/*
    GUIA 4 - EJERCICIO 05 - verision2:
    Hacer un programa que muestre los números del 0 al 100 de 5 en 5. Ejemplo: 0, 5, 10, 15, 20…100.



*/

#include <iostream>

using namespace std;

int main(){
    
      
    // buscando multiplos de 5 de la variable control
    for(int i = 0; i <= 100; i++){   

        if(i % 5 == 0){
            cout << i << endl;
        }
        
    }
    
    system("pause");
    return 0;
}