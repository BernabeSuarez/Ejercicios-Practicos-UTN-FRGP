#include <iostream>
using namespace std;

int main()
{
    float premio_por_auto = 700;
    float sueldo_fijo = 5000;
    float premio;
    int autos_vendidos;
    float sueldo_a_cobrar;

    cout << "Ingrese los autos vendidos: ";
    cin >> autos_vendidos;
    
    premio = autos_vendidos * premio_por_auto;
    sueldo_a_cobrar = sueldo_fijo + premio;

    cout << "El sueldo a cobrar es de : $" << sueldo_a_cobrar << endl;
    return 0;
}
