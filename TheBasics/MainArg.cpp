#include <iostream>
using namespace std;

    int main(int argc, char*argv[]) {
        cout << "argc : " << argc << endl; // argc es almenos 1, ya que argv tiene el nombre
        cout << "argv[0] : " << argv[0] << endl;
        cout << "argv[1] : " << argv[1] << endl;
        cout << "argv[2] : " << argv[2] << endl;
        cout << "argv[3] : " << argv[3] << endl;
        return 0;

    }
    //argv se utiliza para pasarle parametros al programa. 