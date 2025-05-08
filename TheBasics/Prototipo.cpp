#include <iostream>
using namespace std;

//prototipo para que el compilador sepa que existe
int add(int, int);

    int main() {
        int sum;
        sum = add(220, 37);
        cout << "220 + 37 = " << sum << endl;

        return 0;
    }

//se define la funcion
int add(int a, int b) {
    return(a + b);
}