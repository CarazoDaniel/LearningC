#include <iostream> 
using namespace std; 

int main () {
    char oper;
    float num1, num2;
    cout << "Digite un operador (+, -, *, /): ";
    cin >> oper;
    cout << "Digite 2(dos) numeros: "<<endl;
    cin >> num1 >> num2;
    switch (oper)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;    
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        default:
            //caso en el que el oper no es uno de los caracteres.
            cout << "Error! El operando es incorrecto, se espera (+, -, *, /)\n";
            break;
    }
    

    int var1 = 2;
    switch (var1)
    {
        case 1:
            cout << "Caso 1!\n";
            break;
        case 2:
        case 3:
            cout << "Caso Final!\n";
            //con esta sintaxis, se pueden unir casos a dar un mismo resultado
            break;
        default:
            cout << "Default\n";
            //el caso que cae el swith al no cumplir ninguno especificado
            break;
    }

    return 0; 

}

