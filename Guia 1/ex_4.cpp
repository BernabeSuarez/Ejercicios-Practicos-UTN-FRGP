#include <iostream>

using namespace std;

int main()
{
    float asientos_totales;
    float pasajes_vendidos;
    float asientos_libres;
    float porcentaje_libres;
    float porcentaje_ocupados;

    cout << "Ingrese la cantidad total de asientos: ";
    cin >> asientos_totales;

    cout << "Ingrese la cantidad de pasajes vendidos: ";
    cin >> pasajes_vendidos;

    asientos_libres = asientos_totales - pasajes_vendidos;
    
    porcentaje_ocupados = (pasajes_vendidos * 100) / asientos_totales;

    porcentaje_libres = (asientos_libres * 100)/ asientos_totales;


    cout << " El porcentaje de ocupacion es del: " << porcentaje_ocupados << "%" << endl;
    cout << " El porcentaje de asientos libres es del: " << porcentaje_libres << "%" << endl;
    return 0;
}