#include <iostream>
using namespace std;

//se define la funcion con variable estatica
void test() {
    //svar es una variable estatica
    static int svar = 0;
    ++svar;

    cout << svar << endl;
    }

    int main() {

        test();
        test(); //al tener una variable estatica, al final del primer llamado, el valor persiste. siendo 1 en el segundo llamado

        return 0;
    }

