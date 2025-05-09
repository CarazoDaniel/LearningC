#include <iostream>
using namespace std; 

int main(){
    int var = 7;
    
    //se declara una variable de puntero
    int* pointVar;

    //almacenamos el espacio en memoria de una variable, en el puntero
    pointVar = &var;

    //mostramos las diferencias de las variables
    cout << "var = " << var << endl;
    cout << "Direccion de var = " << &var << endl;
    cout << "pointVar = " << pointVar << endl;

    // con * podemos acceder el valor en la direccion almacenada en el puntero
    cout << "El contenido de la direccion apuntada por pointVar (*pointVar) =  " << *pointVar << endl;

    return 0;
}