#include <iostream>
using namespace std;

//funcion con parametro int
int absoluto(int num) {
    if (num < 0){
        num = -num;
    }
    return num;
}
//misma funcion con parametro de float
float absoluto(float num) {
    if (num < 0.0){
        num = -num;
    }
    return num;
}



    int main() {

        //llamado a la funcion con parametro entero
        cout << "El valor absoluto de -5 es " << absoluto(-5) << endl;

        //llamado a la funcion con parametro float
        cout << "El valor absoluto de 5.5 es " << absoluto(5.5f) << endl;
        return 0;
    }