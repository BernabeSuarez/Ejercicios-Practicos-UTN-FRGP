#include <iostream>
using namespace std;

int main()
{
    int premio_por_auto = 700;
    int sueldo_fijo = 5000;
    int premio;
    int autos_vendidos;
    int sueldo_a_cobrar;

    cout << "Ingrese los autos vendidos: ";
    cin >> autos_vendidos;
    
    premio = autos_vendidos * premio_por_auto;
    sueldo_a_cobrar = sueldo_fijo + premio;

    cout << "El sueldo a cobrar es de : $" << sueldo_a_cobrar << endl;
    return 0;
}
