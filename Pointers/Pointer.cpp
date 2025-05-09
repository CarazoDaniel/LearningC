#include <iostream>
using namespace std; 

int main(){
    int var = 7;
    int* pointVar;
    pointVar = &var;

    //mostramos los valores de var de ambas formas
    cout << "var = " << var << endl;
    cout << "*pointVar =  " << *pointVar << endl;

    cout << "Cambiando el calor de var, a 12:" << endl;

    var = 12;

    cout << "var = " << var << endl;
    cout << "*pointVar =  " << *pointVar << endl;

    cout << "Cambiando el valor de *pointVar, a 218:" << endl;

    *pointVar = 218;

    //mostramos que var se ve afectado
    cout << "var = " << var << endl;
    cout << "*pointVar =  " << *pointVar << endl;


    return 0;
}