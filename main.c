#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include "fecha.h"
#include "menu.h"
//void cocienteYresto(int,int,int *cociente,int *resto);


#define TAM 6; // macros, directivas para el pre-compilador
int main()
{
//    int opcion_elegida;
//    opcion_elegida=opcion_menu();
//    printf("La opcion seleccionada es: %d",opcion_elegida);
//    return 0;

    int es_valida,jd0,jd1;
    tFecha tfecha, tfecha1;

    printf("------------------------------------------ \n");
    printf("Ingrese una fecha. \n");
    printf("Dia: "); scanf("%d",&tfecha.dia);
    printf("Mes: "); scanf("%d",&tfecha.mes);
    printf("Anio: "); scanf("%d",&tfecha.anio);

    printf(" FECHA 1: %d/%d/%d \n",tfecha.dia,tfecha.mes,tfecha.anio);

    es_valida=validaFecha(&tfecha);

    if (es_valida==1){
        printf("La fecha es valida \n");
        }
    else {
        printf("La fecha NO es valida \n");
        }
    jd0=fecha2jd(tfecha.anio, tfecha.mes, tfecha.dia);
    printf("La fecha Juliana es JD= %d \n",jd0);

    printf("------------------------------------------ \n");
    printf("Ingrese otra fecha. \n");
    printf("Dia: "); scanf("%d",&tfecha1.dia);
    printf("Mes: "); scanf("%d",&tfecha1.mes);
    printf("Anio: "); scanf("%d",&tfecha1.anio);

    printf(" FECHA 2: %d/%d/%d \n",tfecha1.dia,tfecha1.mes,tfecha1.anio);
    jd1=fecha2jd(tfecha1.anio, tfecha1.mes, tfecha1.dia);
    tfecha1.dia=0;
    tfecha1.mes=0;
    tfecha1.anio=0;
    jd2fecha(jd1,&tfecha1);
    printf(" La nueva fecha calculada es: %d/%d/%d \n",tfecha1.dia,tfecha1.mes,tfecha1.anio);
    printf("La cantidad de dias entre fechas es: %d \n",jd1-jd0);
    return 0;
}


//    VECTORES
//    int vect[]={7,3,9,2};
//    int ce=4;
//    int pos=2;
//    int value=8;
//    //mostrar_vector(vect,ce);
//    printf("\n tamVect:%d tamVar:%d tamElem:%d",sizeof(vect),sizeof(int),sizeof(vect)/sizeof(int));
//    // insertar el número 8 en la posición 2.
//    ce=5;
//    insertar_elemento(vect,ce);
//    mostrar_vector(vect,ce);
