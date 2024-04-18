#include <iostream>

using namespace std;

int main ()
{
    int betamol = 45;
    int micilina = 2;
    int acido_sinitico = 7;
    int cant_pildoras = 75;
    int frascos;
    int pildoras_totales;
    int cant_betamol;
    int cant_micilina;
    int cant_acido_sinitico;

    cout << "Ingrese la cantidad de frascos: ";
    cin >> frascos;

    pildoras_totales = frascos * cant_pildoras;
    cant_betamol = pildoras_totales * betamol;
    cant_micilina = pildoras_totales * micilina;
    cant_acido_sinitico = pildoras_totales * acido_sinitico;

    cout << " Para preparar " << frascos << " frascos se necesitan: " << cant_betamol << "mg de betamol, " << cant_micilina << " grs. de micilina y " << cant_acido_sinitico << "mg de acido sinitico. " << endl;
    

    return 0;
}