#include <iostream>
using namespace std;

//prototipo con valores por defecto, es necesario que los que tienen valor asignado, vayan al final 
void add(int a, int b, int c = 7, int d = 3);

    int main() {
        //llamado a la funcion;
        add(2,3);


        return 0;

    }

//se define la funcion
void add(int a, int b, int c, int d) {
    //codigo de la funcion
    cout << "la suma es " << a + b + c + d;
}