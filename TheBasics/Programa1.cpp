#include <iostream> 
using namespace std; 
int count ; // se define una variable utilizada en prog 2, no tienen un orden especifico.
extern void write_extern(); //se utiliza el extern para indicar que esta definido en otro archivo.

int main() { 
    count = 5;
    write_extern();
    return 0; 
}