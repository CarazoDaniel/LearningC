#include <iostream>
using namespace std;

//funcion de suma
int add(int a, int b) {
    return(a + b);
}

    int main() {
        int sum;
        sum = add(220, 37);
        cout << "220 + 37 = " << sum << endl;

        return 0;
    }