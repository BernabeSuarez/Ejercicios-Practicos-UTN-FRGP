#include <iostream>

using namespace std;

int main()
{
    float importe_venta;
    float descuento;
    float porcentaje_descuento;
    

    cout << "Ingrese el importe de la venta sin descuento: ";
    cin >> importe_venta;
    cout << "Ingrese el importe de la venta con descuento: ";
    cin >> descuento;

    porcentaje_descuento = 100 - ((descuento * 100) / importe_venta);
    cout << "El porcentaje de descuento fue de: " << porcentaje_descuento << "%" << endl;


    return 0;
}
