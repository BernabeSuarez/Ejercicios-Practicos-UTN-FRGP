#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if(num1 % num2 == 0){
    cout << "El primer numero es multiplo del segundo" << endl;
    }else {
    cout << "El primer numero no es multiplo del segundo" << endl;
    }

    return 0;
}