/*
    GUIA 5 - EJERCICIO 04:
    Hacer un programa que solicite dos números y luego muestre los números
    entre el menor y el mayor de ellos. Acordate, usando While.




*/ 

#include <iostream>

using namespace std;

int main(){

    // Declaracion variables
    int numero1;
    int numero2;

    int numeroMenor;
    int numeroMayor;

    // Pedir datos
    cout << "Ingrese un numero: ";
    cin >> numero1;

    cout <<"Ingrese un numero: ";
    cin >> numero2;



    if(numero1 < numero2){
        numeroMenor = numero1;
        numeroMayor = numero2;
    }
    else{
        numeroMenor = numero2;
        numeroMayor = numero1;
    }



    while(numeroMenor < numeroMayor - 1){
        
        numeroMenor++;
        
        cout << numeroMenor << endl;        
      
    }



    return 0;
}