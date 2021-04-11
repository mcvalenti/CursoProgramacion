#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "auxiliares.h"
#include "vector_lib.h"

//void cocienteYresto(int,int,int *cociente,int *resto);


#define TAM 6; // macros, directivas para el pre-compilador
int main()
{
    int vect[]={7,3,9,2};
    int ce=4;
    mostrar_vector(vect,ce);
    printf("\n");
    // insertar el número 8 en la posición 2.
    ce=5;
    insertar_elemento(vect,ce);
    mostrar_vector(vect,ce);

    return 0;
}

