#include<iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

int main() 
{
    Distance *ptr, d;

    ptr = &d;

    cout << "Ingrese el valor de pies: ";
    cin >> (*ptr).feet;
    cout << "Ingrese el valor de pulgadas: ";
    cin >> (*ptr).inch;

    cout << "Mostrando la informacion." << endl;
    cout << "Distancia = " << (*ptr).feet << " pies " << (*ptr).inch << " pulgadas.";


    return 0;
}