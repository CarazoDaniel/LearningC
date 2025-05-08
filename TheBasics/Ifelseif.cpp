#include <iostream> 
using namespace std; 

int main () {
    int num = 5;

    if (num < 0) {
        cout << "primera condicion"; //codigo de condicion
    }
    else if(num == 0){
        cout << "Segunda condicion"; // codigo de una sengunda condicion
    } else {
        // codigo para ninguna de las condiciones cumplidas.
    }
    // resto del codigo luego de las condiciones
    return 0;
}