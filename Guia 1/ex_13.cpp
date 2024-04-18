#include <iostream>

using namespace std;

int main ()
{
    int billete_100;
    int billete_200;
    int billete_500;
    int billete_1000;
    int importe_a_retirar;

    cout << "Ingrese el monto a retirar: ";
    cin >> importe_a_retirar;

    billete_1000 = importe_a_retirar / 1000;
    billete_500 = (importe_a_retirar % 1000) / 500;
    billete_200 = (importe_a_retirar % 500) / 200;
    billete_100 = (importe_a_retirar % 200) % 100;

    cout << "Usted retirara: " << billete_1000 << " billete de 1000 " << billete_500 << " billete de 500 " << billete_200 << " billete de 200 " << billete_100 << " billete de 100 " << endl;

    return 0;
}