#include <iostream>
using namespace std;

int main()

{
    int num1;
    int num2;
    int diferencia;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 > num2)
    {
        diferencia = num1 - num2;
        cout << "La diferencia absoluta es: " << diferencia << endl;
    }else{
        diferencia = num2 - num1;
        cout << "La diferencia absoluta es: " << diferencia << endl;
    }
    

    return 0;
}