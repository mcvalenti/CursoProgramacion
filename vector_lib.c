#include "vector_lib.h"
#include <stdio.h>

void mostrar_vector(int* vect,int ce){
    int i;
    for (i=0;i<ce;i++){
        printf("%d ",*vect);
        vect++;
        }
    }

void insertar_elemento(int* vect,int ce){
    int i;
    int pos=2;
    int value=8;
    int* pf=vect+ce;
    for (i=0;i<(ce-pos)+1;i++){
        *pf=*(pf-1);
        pf--;
        }
        *pf=value;
    }
