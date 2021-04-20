#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include "fecha.h"

//void cocienteYresto(int,int,int *cociente,int *resto);


#define TAM 6; // macros, directivas para el pre-compilador
int main()
{
    int es_valida;
    tFecha tfecha;

    printf("Dia: "); scanf("%d",&tfecha.dia);
    printf("Mes: "); scanf("%d",&tfecha.mes);
    printf("Anio: "); scanf("%d",&tfecha.anio);

    printf(" Ud ingreso: %d/%d/%d \n",tfecha.dia,tfecha.mes,tfecha.anio);

    es_valida=validaFecha(&tfecha);

    if (es_valida==1){
        printf("La fecha es valida ");
        }
    else {
        printf("La fecha NO es valida");
        }

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
