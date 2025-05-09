#include<iostream>
//#include "factorial.hpp"
//en el que estaria el prototipo de la funcion.

using namespace std;

//prototipo que iria en factoria.hpp

int factorial(int);

int main()
{
    int n, result;

    cout << "Ingrese un numero no negativo: ";
    cin >> n;

    //llamado de la funcion
    result = factorial(n);
    cout << "El factorial de " << n << " = " << result;


    return 0;
}


// lo que iria en el archivo factorial.cpp que definiria la funcion recursiva, por aparte del programa principal
int factorial(int n){
    if (n > 1)
    {   
        //llamado recursivo, en el que la funcion se llama a ella misma
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}