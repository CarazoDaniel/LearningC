#include <iostream>
using namespace std;

    int main()
     {
        //se inicia un double
        double num_double = 7.45;
        cout << "num_double = " << num_double << endl;    


        //conversion de double a int C-style
        int num_int1 = (int)num_double;
        cout << "num_int1 = " << num_int1 << endl;

        //conversion de double a int function style

         int num_int2 = int(num_double);
        cout << "num_int2 = " << num_int2 << endl;

        return 0;

    }