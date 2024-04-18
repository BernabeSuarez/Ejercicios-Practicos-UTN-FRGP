#include <iostream>

using namespace std;

int main()
{
    int input_min;
    int horas;
    int minutos;
    cout << "Ingrese la cantidad de minutos: ";
    cin >> input_min;
    horas = input_min/60;
    minutos = input_min % 60;

    cout << "Horas: "<<horas << " minutos: "<<minutos<< endl;
    return 0;
}