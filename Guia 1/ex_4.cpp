#include <iostream>

using namespace std;

int main()
{
    const int PORCENTAJE = 100;
    int asientos_totales;
    int pasajes_vendidos;
    int asientos_libres;
    float porcentaje_libres;
    float porcentaje_ocupados;

    cout << "Ingrese la cantidad total de asientos: ";
    cin >> asientos_totales;

    cout << "Ingrese la cantidad de pasajes vendidos: ";
    cin >> pasajes_vendidos;

    asientos_libres = asientos_totales - pasajes_vendidos;
    
    porcentaje_ocupados = ((float)pasajes_vendidos * PORCENTAJE) / asientos_totales;

    porcentaje_libres = ((float)asientos_libres * PORCENTAJE)/ asientos_totales;


    cout << " El porcentaje de ocupacion es del: " << porcentaje_ocupados << "%" << endl;
    cout << " El porcentaje de asientos libres es del: " << porcentaje_libres << "%" << endl;
    return 0;
}