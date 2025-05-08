#include <iostream>
using namespace std;

struct Persona {
    char nombre[50];
    int edad;
    float salario;
};

int main(){
    Persona p1;

    cout << "Digite el nombre completo: ";
    cin.get(p1.nombre, 50);
    cout << "Digite la edad: ";
    cin >> p1.edad;
    cout << "Digite el salario: ";
    cin >> p1.salario;

    cout << "\nDesplegando informacion." << endl;
    cout << "Nombre: " << p1.nombre << endl;
    cout << "Edad: " << p1.edad << endl;
    cout << "Salario: " << p1.salario;

    return 0;
}
