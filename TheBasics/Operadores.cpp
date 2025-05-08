#include <iostream> 
using namespace std; 

int main () {
    int var1 = 0;
    int var2;
    var2 = (var1 == 0) ? 15 : 27;   // se utiliza como un if, si se cumple la conducion, se le asigna el primer valor
    cout << "var2 : \n" << var2 << "\n";
    var2 = (var1 == 3) ? 15 : 27;   // comprobando el caso falso
    cout << "var2 : \n" << var2 << "";
    return 0;
}