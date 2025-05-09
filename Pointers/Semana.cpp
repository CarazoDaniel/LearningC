#include <iostream>
using namespace std;

    enum Week {
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };


    int main()
     {
        Week today;
        // tiene que ser un valor de identificador, no puede ser un numero.
        today = Wednesday;

        cout << "Day " << today+1 << endl;
        //el resultado al no tener valores asignados de una enumeracion, es ordenado segun su orden de definicion

        return 0;

    }