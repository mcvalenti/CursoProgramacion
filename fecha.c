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



int validaFecha(tFecha* tfecha){

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


int fecha2jd(int y, int m, int dia){
    int a,anio,mes;
    int jd;
    a=(int)((14-m)/12);
    anio=y+4800-a;
    mes=m+12*a-3;
    jd=dia+(int)((153*mes+2)/5)+365*anio+(int)(anio/4)-(int)(anio/100)+(int)(anio/400)-32045;
    return jd;
}

void jd2fecha(float jd, tFecha* tfecha1){
// https://quasar.as.utexas.edu/BillInfo/JulianDatesG.html
    int Q,Z,W,X,A,B;
    int C,D,E,F;

//      Q = JD+0.5
//  Z = Integer part of Q
//  W = (Z - 1867216.25)/36524.25
//  X = W/4
//  A = Z+1+W-X
//  B = A+1524
//  C = (B-122.1)/365.25
//  D = 365.25xC
//  E = (B-D)/30.6001
//  F = 30.6001xE

    //Init
    Q=jd+0.5;
    Z=(int)(Q);
    W=(Z-1867216.25)/36524.25;
    X=W/4;
    A=Z+1+W-X;
    B=A+1524;
    C=(B-122.1)/365.25;
    D=365.25*C;
    E=(B-D)/30.6001;
    F=30.6001*E;
    // Valores finales
    tfecha1->dia=B-D-F+(Q-Z);
    if ((E-1 < 12) && (E-1 > 1)){
        tfecha1->mes=E-1;
    }
    else if ((E-13 < 12) && (E-13 > 1)){
        tfecha1->mes=E-13;
    }

    if ((tfecha1->mes==1) || (tfecha1->mes==2)){
        tfecha1->anio=C-4715;
    }
    else {
        tfecha1->anio=C-4716;
    }
    return;
}

void ingresaFecha(tFecha* tfecha1){
    int es_correcta;
    do{
        scanf("%d/%d/%d", &tfecha1->dia,&tfecha1->mes,&tfecha1->anio);
        es_correcta=validaFecha(tfecha1);

        if (!es_correcta){
            printf("Fecha incorrecta! \n");
        }

    }while(!es_correcta);

}

void muestraFecha(tFecha* tfecha1){

    printf("%d/%d/%d \n", tfecha1->dia,tfecha1->mes,tfecha1->anio);

}
