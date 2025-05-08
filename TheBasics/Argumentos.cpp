#include <iostream>
using namespace std;

//mostrar un numero
void displayNum(int n1, float n2) {
    cout << "El int es " << n1;
    cout << "El double es " << n2;
}



int main() {
    int num1 = 7;
    double num2 = 8.9;
    //llamado a la funcion
    displayNum(num1, num2);

    return 0;
}