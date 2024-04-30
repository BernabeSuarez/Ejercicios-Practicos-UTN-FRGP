#include <iostream>
using namespace std;

int main()
{

    float importe_venta;
    float importe_a_pagar;
    cout << "Ingrese el importe de la venta: ";
    cin >> importe_venta;

    if(importe_venta < 100){
        importe_a_pagar = importe_venta - (importe_venta * 0.05);
        cout << "El importe con el descuento es de: $" << importe_a_pagar << endl;
    }else if (importe_venta >= 100 && importe_venta < 500){
        importe_a_pagar = importe_venta - (importe_venta * 0.10);
        cout << "El importe con el descuento es de: $" << importe_a_pagar << endl;
    }else if (importe_venta >= 500){
        importe_a_pagar = importe_venta - (importe_venta * 0.15);
        cout << "El importe con el descuento es de: $" << importe_a_pagar << endl;
    }else {
        cout << "Ingrese un importe valido por favor" << endl;
    }
    return 0;
}