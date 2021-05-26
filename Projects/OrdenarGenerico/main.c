#include <stdio.h>
#include <stdlib.h>
#include "../../libs/vector_lib.h"

typedef struct{
    char nombre[20];
    char animal[20];
    int edad;
}mascota;

int cmp_mascotas_edad(void* m1,void* m2)
{

    mascota *mas1=(mascota*)m1,
            *mas2=(mascota*)m2;

    return mas1->edad-mas2->edad;
}

int main()
{
    int vect[] = {4,0,-1,2,55,-7,-22,100};
    int i,ce,ce_mas;
    mascota vect_mascota[]={{"Kira","perro",7},
        {"Fausto","gato",5},
        {"Lara","perro",8},
        {"Salem","gato",3}
    };

    /*-----------------------------------------
    ORDENA VECTOR DE ENTEROS
    -----------------------------------------*/
    ce=sizeof(vect)/sizeof(int);
    mostrar_vector(vect,ce);
    ordenarSeleccionEnt(vect,ce);
    printf("\n VECTOR ORDENADO ");
    mostrar_vector(vect,ce);

    /*-----------------------------------------
    INTERCAMBIO GENERICO (Mascotas)
    -----------------------------------------*/

    ce_mas=sizeof(vect_mascota)/sizeof(mascota);
    //mas_menor=buscarMenorGen(vect_mascota,ce_mas,sizeof(mascota),cmp_mascotas_edad);

    for (i=0; i<ce_mas; i++)
    {
        printf("\n Mascota: %s %d",vect_mascota[i].nombre, vect_mascota[i].edad);
    }

    printf(" \n---------------------------------------- \n");
    printf(" ---------------------------------------- \n");
    ordenGenerico(vect_mascota,ce_mas,sizeof(mascota),cmp_mascotas_edad);

    for (i=0; i<ce_mas; i++)
    {
        printf("\n Mascota: %s %d",vect_mascota[i].nombre, vect_mascota[i].edad);
    }

    return 0;
}
