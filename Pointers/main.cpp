#include <iostream>
#include "sum.hpp"
using namespace std; 

int main(){
    int num1 = 7;
    int num2 = 8;
    int result = sum(num1, num2);

    cout << "El resultado de la suma de " << num1 << " y " << num2 << " es " << result << endl;


    return 0;
}