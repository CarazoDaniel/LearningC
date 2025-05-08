#include <iostream> 
using namespace std; 

//Variable Global:
int g; 

int main (){
    // variables locales.
    int a, b;

    //se inician las variables.

    a = 10;
    b = 20;
    g = a + b;

    cout << g;

    return 0;
}