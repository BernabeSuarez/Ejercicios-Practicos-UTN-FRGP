#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "ingrese un número: ";
    cin >> num;

    if(num % 2 == 0){
    cout << "El numero es par" << endl;
    }else {
    cout << "El numero es impar" << endl;
    }

    return 0;
}