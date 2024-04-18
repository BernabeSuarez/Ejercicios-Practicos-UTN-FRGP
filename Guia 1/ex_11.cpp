#include <iostream>

using namespace std;

int main()
{
    int input_minutos;
    int dias;
    int horas;
    int hora;
    int minutos;
    cout << "Ingrese la cantidad de minutos: ";
    cin >> input_minutos;

    minutos = input_minutos % 60;
    horas = input_minutos / 60;
    hora = input_minutos % 60;
    dias = horas/24;

    cout << "Equivalen a: "<< dias << " dias, " << hora << " horas, " << minutos << " minutos " << endl;
    return 0;
}