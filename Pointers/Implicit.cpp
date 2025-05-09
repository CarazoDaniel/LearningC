#include <iostream>
using namespace std;

    int main()
     {
        //iniciamos un valor int
        int num_int = 7;
        
        //se declrara un doble
        double num_double;

        //conversion implicita
        //asignando un in a una variable double
        num_double = num_int;

        cout << "num_int = " << num_int << endl;
        cout << "num_double = " << num_double << endl;
        
        return 0;

    }