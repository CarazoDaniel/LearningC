#include <iostream>
using namespace std;

int main ()
{
    //declaramos variables.
    int var1 = 3;
    int var2 = 32;
    int var3 = 56;

    //mostramos el lugar en memoria de las variables.
    cout << "Direccion de memoria de var1: " << &var1 << endl;
    cout << "Direccion de memoria de var2: " << &var2 << endl;
    cout << "Direccion de memoria de var3: " << &var3 << endl;

    return 0;
}