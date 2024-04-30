#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "ingrese un número, puede ser positivo, negativo o cero: ";
    cin >> num;

    if(num > 0){
    cout << "El numero es positivo" << endl;
    }else if(num < 0) {
    cout << "El número es negativo" << endl;
    }else {
    cout << "El numero es cero" << endl;
    }

    return 0;
}