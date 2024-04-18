#include <iostream>
using namespace std;

int main()
{
    float importe_venta;
    float porcentaje_descuento;
    float descuento;
    float total_a_pagar;

    cout << "Ingrese el importe de la venta: ";
    cin >> importe_venta;
    cout << "Ingrese el descuento a aplicar (%):  ";
    cin >> porcentaje_descuento;

    descuento = importe_venta * (porcentaje_descuento/100);

    total_a_pagar = importe_venta - descuento;

    cout << "El importe a pagar es de : $" << total_a_pagar << endl;
    return 0;
}
