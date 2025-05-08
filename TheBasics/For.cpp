#include <iostream> 
using namespace std; 

int main () {
    for (int i = 1; i <= 5; i++){
        cout << i << " ";
    }
    
    cout << "\n Utilizando un arreglo\n";
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int n : num_array)
    {
        cout << n << " "; //n en este caso tiene el valor del elemento, no del indice, se recorre el arreglo en orden.
    }

    // resto del codigo luego del bucle

        return 0;
}