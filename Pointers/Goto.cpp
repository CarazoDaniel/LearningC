#include <iostream> 
using namespace std; 

int main () 
{   
    float num, average, sum = 0.0;
    int i, n;
    cout << "Numero maximo de entrada: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << "Digitar n" << i << ": ";
        cin >> num;
        if (num < 0.0)
        {
            //obliga al progama a moverse al lable, "jump"
            goto jump;
        }
        

        sum += num;
    }
    
    jump:
        average = sum / (i - 1);
        cout << "\nAverage = " << average;

        return 0;
}