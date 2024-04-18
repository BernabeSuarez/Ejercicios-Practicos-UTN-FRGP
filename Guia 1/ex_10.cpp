#include <iostream>

using namespace std;

int main()
{
    int input_horas;
    int dias;
    int horas;
    cout << "Ingrese la cantidad de horas: ";
    cin >> input_horas;
    dias = input_horas/24;
    horas = input_horas % 24;

    cout << "Dias: "<< dias << " horas: " << horas << endl;
    return 0;
}