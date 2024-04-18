#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "Ingrese un numero A: ";
    cin >> a ;
    cout << "Ingrese otro numero B: ";
    cin >> b;

    cout << " Ingresaste A :" << a << endl;
    cout << " Ingresaste B :" << b << endl;

    c = b;
    b = a;
    a = c;

    cout << " Ahora el valor de A es: " << a << endl;
    cout << " Ahora el valor de B es: "  << b << endl;



    return 0;
}
