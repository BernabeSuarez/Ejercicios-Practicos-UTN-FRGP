#include <iostream>

using namespace std;

int main ()
{
    const int BETAMOL = 45;
    const int MICILINA = 2;
    const int ACIDO_SINITICO = 7;
    const int CANT_PILDORAS = 75;
    int frascos;
    int pildoras_totales;
    int cant_betamol;
    int cant_micilina;
    int cant_acido_sinitico;

    cout << "Ingrese la cantidad de frascos: ";
    cin >> frascos;

    pildoras_totales = frascos * CANT_PILDORAS;
    cant_betamol = pildoras_totales * BETAMOL;
    cant_micilina = pildoras_totales * MICILINA;
    cant_acido_sinitico = pildoras_totales * ACIDO_SINITICO;

    cout << " Para preparar " << frascos << " frascos se necesitan: " << cant_betamol << "mg de betamol, " << cant_micilina << " grs. de micilina y " << cant_acido_sinitico << "mg de acido sinitico. " << endl;
    

    return 0;
}