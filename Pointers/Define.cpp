#include <iostream>
using namespace std;

#define MI_PRIMER_DEFINE 730

    enum seasons {
        spring = 34,
        summer = 4,
        autum = 9,
        winter = 32,
    };
    enum enumcito {
        carro = 40,
        casa,
        arbol,
        patio
    };

    int main()
     {
        seasons s;
        s = summer;
        cout << "Summer = " << s << endl;
        cout << "Define = " << MI_PRIMER_DEFINE << endl;
        //esto equivale a reemplazarlo en el codigo, ya que esto pasa en pre compilacion
        cout << "arbol:  " << arbol << endl;

        return 0;

    }