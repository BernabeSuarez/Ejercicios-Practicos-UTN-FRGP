#include <iostream> 
using namespace std;

int main ()
{
    int alf_A;
    int alf_B;
    int alf_C;
    float total_venta;
    float porcentaje_A;
    float porcentaje_B;
    float porcentaje_C;
    
    cout << "Ingrese la cantidad vendida del alfajor A: ";
    cin >> alf_A;
    cout << "Ingrese la cantidad vendida del alfajor B: ";
    cin >> alf_B;
    cout << "Ingrese la cantidad vendida del alfajor C: ";
    cin >> alf_C;

    total_venta  = alf_A + alf_B + alf_C;

    porcentaje_A = (alf_A*100) / total_venta;
    porcentaje_B = (alf_B*100) / total_venta;
    porcentaje_C = (alf_C*100) / total_venta;
    
    cout << " El porcentaje del alfajor A es: " << porcentaje_A << "%" << endl;
    cout << " El porcentaje del alfajor B es: " << porcentaje_B << "%" << endl;
    cout << " El porcentaje del alfajor C es: " << porcentaje_C << "%" << endl;
    return 0;
}