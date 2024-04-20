#include <iostream>
using namespace std;

int main ()
{
    float temp_maxima;
    float temp_minima;
    float amplitud_termica;

    cout << "Ingrese la temperatura maxima: ";
    cin >> temp_maxima;
    cout << "Ingrese la temperatura minima: ";
    cin >> temp_minima;

    amplitud_termica = temp_maxima - temp_minima;

    cout << " la amplitud termica es de: " << amplitud_termica << " grados" << endl;

    return 0;
}
