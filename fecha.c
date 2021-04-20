#include "fecha.h"
#include "auxiliares.h"

int es_bisiesto(int anio){

    int divisible_x_4, divisible_x_100, divisible_x_400;

    divisible_x_4= es_divisible(anio, 4);
    divisible_x_100= es_divisible(anio, 100);
    divisible_x_400= es_divisible(anio, 400);

    if (divisible_x_4==1 && divisible_x_100==0)
    {
        return 1;
    }else if (divisible_x_400==1){
        return 1;
    }else{
        return 0;
    }
}

int cant_dias(int mes, int anio){

    int cant_dias[][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},
                    {31,29,31,30,31,30,31,31,30,31,30,31}};
    return cant_dias[es_bisiesto(anio)][mes-1];
}



int validaFecha(tFecha *tfecha){

    int anio_valido=0, mes_valido=0, dia_valido=0;

    if (1600<tfecha->anio && tfecha->anio<9999){
        anio_valido=1;
        }
    if ((tfecha->dia >= 1) && (tfecha->dia <= cant_dias(tfecha->mes,tfecha->anio))){
        dia_valido=1;
        }
    if (1<=tfecha->mes && tfecha->mes<=12){
        mes_valido=1;
        }


    if (anio_valido && mes_valido && dia_valido){
        return 1;
        }
    else {
        return 0;
    }


}

