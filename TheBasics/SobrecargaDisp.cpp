#include <iostream>
using namespace std;



//funcion de desplegar un entero
void display(int var) {
     cout << "Integer number " << var << endl;
}
//funcion de despplegar un double
void display(double var) {
     cout << "Double number " << var << endl;
}

//funcion con 2 parametros
void display(int var1, double var2) {
     cout << "Integer number " << var1;
     cout << " and double number " << var2 << endl;
}




int main() {

    int a = 3;
    double b = 7.7;

    //llamado solo con un int
    display(a);

    //llamado solo con un int
    display(b);

    //llamado solo con ambos
    display(a, b);

    return 0;
}