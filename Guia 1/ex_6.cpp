#include <iostream>
using namespace std;

int main()
{
    float rec_semana1;
    float rec_semana2;
    float rec_semana3;
    float rec_semana4;
    float rec_promedio;
    float rec_total;
    float porc_rec_semanal_1;
    float porc_rec_semanal_2;
    float porc_rec_semanal_3;
    float porc_rec_semanal_4;


    cout << "Ingrese la recaudacion para la primer semana: ";
    cin >> rec_semana1 ;
    cout << "Ingrese la recaudacion para la segunda semana: ";
    cin >> rec_semana2 ;
    cout << "Ingrese la recaudacion para la tercer semana: ";
    cin >> rec_semana3 ;
    cout << "Ingrese la recaudacion para la cuarta semana: ";
    cin >> rec_semana4 ;

    rec_total = rec_semana1 +rec_semana2 +rec_semana3 +rec_semana4;
    rec_promedio = rec_total / 4; 

    porc_rec_semanal_1 = (rec_semana1*100) / rec_total;
    porc_rec_semanal_2 = (rec_semana2*100) / rec_total;
    porc_rec_semanal_3 = (rec_semana3*100) / rec_total;
    porc_rec_semanal_4 = (rec_semana4*100) / rec_total;

    cout << "La recaudacion promedio semanal es de : $" << rec_promedio << endl;
    cout << "El porcentaje semanal de recaudacion es: " << porc_rec_semanal_1 << "% " << porc_rec_semanal_2 << "% "<< porc_rec_semanal_3 << "% "<< porc_rec_semanal_4 << "% " << endl;

    return 0;
}
