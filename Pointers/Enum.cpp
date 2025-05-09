#include <iostream>
using namespace std;

    enum seasons {
        spring = 34,
        summer = 4,
        autum = 9,
        winter = 32,
    };


    int main()
     {
        seasons s;
        // tiene que ser un valor de identificador, no puede ser un numero.
        s = summer;

        cout << "Summer = " << s << endl;

        return 0;

    }