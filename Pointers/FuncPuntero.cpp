#include <iostream>
using namespace std;

//funcion de intercambio de valores

void swap(int* n1, int* n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
// al utilizar n1 y n2, dado que se tienen las referencias, las variables se ven afectadas.

int main() {
    int a = 1, b = 5;

    cout << "antes del intercambio a = " << a << " y b = " << b << endl;

    swap(&a, &b);
    cout << "\nLuego del intercambio a = " << a << " y b = " << b << endl;

    return 0;
}