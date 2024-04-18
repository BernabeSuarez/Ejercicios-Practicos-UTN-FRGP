#include <iostream>
using namespace std;

int main ()
{
    float importe_total;
    float descuento;
    float descuento_aplicado;
    float precio_total;

    cout << "Ingrese el importe total de la compra: $ ";
    cin >> importe_total;
    cout << "Ingrese el porcentaje de descuento: ";
    cin >> descuento;

    descuento_aplicado = importe_total * (descuento / 100);
    precio_total = importe_total - descuento_aplicado;

    cout << "Importe Total: $" << importe_total << endl;
    cout << "Descuento: $" << descuento_aplicado << endl;
    cout << "Precio Total: $" << precio_total << endl;


    return 0;
}