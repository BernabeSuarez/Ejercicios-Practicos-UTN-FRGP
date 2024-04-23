#include <iostream>
using namespace std;

int main()
{
    int horas_trabajadas;
    float valor_hora;
    float sueldo;


    cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> horas_trabajadas;
    cout << "Ingrese el valor de la hora: $";
    cin >> valor_hora ;
    cout << endl;
    sueldo = horas_trabajadas * valor_hora;
    cout << "Le correspoonde el sueldo de: $" << sueldo << endl ;


    return 0;
}
