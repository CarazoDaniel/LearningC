/* 
int *ptr;
int arr[5];
ptr = arr;

ptr + 1 is equivalent to &arr[1];
ptr + 2 is equivalent to &arr[2];
//ptr + n is equivalent to &arr[n];


// de igual forma al dereferenciar
*ptr == arr[0];

*(ptr + 1) is equivalent to arr[1];
*(ptr + 2) is equivalent to arr[2];
//*(ptr + n)is equivalent to arr[n];
*/

#include <iostream>
using namespace std;

int main () 
{
    float arr[3];

    //declaramos puntero
    float *ptr;
    cout << "Mostrando direccion con arrays: " << endl;

    //usamos un for para sacar las direcciones
    for (int i = 0; i < 3; i++)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }
    
    ptr = arr;

    cout << "\n mostrando direcciones usando punteros: " << endl;

      for (int i = 0; i < 3; i++)
    {
        cout << "ptr + " << i << " = " << ptr + i << endl;
    }


    return 0;
}