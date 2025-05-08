#include <iostream> 
using namespace std; 

int main () {
    int num;
    cout << "Digite un entero" << endl;
    cin >> num;

    //condicion externa
    if (num != 0) {
        //condicion anidada
        if (num > 0){
        cout << "El entero es positivo" << endl;
         }   //else anidado
        else {
        cout << "El entero es negativo" << endl;
        }     
    }
    // else externo
    else {
        cout << "Digito un 0, que no es considerado positivo ni negativo" << endl;
    }
    
    // codigo fuera de condiciones
    cout << "Hola permanenete" << endl;
    return 0;
}