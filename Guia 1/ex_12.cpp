#include <iostream>
using namespace std;

int main ()
{
    int huevos_cliente;
    int docena = 1000;
    int huevo_suelto = 120;
    int total_pagar;
    int docenas_pedidas;
    int huevos_extra;

    cout << "Ingrese la cantidad de huevos que desea comprar: ";
    cin >> huevos_cliente;

    docenas_pedidas = huevos_cliente / 12;
    huevos_extra = huevos_cliente % 12;

    total_pagar = (docenas_pedidas * 1000) + (huevos_extra * 120);

    cout << "El total a pagar es de: $" << total_pagar << endl;
    
    return 0;
}