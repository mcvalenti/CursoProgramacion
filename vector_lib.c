#include "vector_lib.h"
#include <stdio.h>

void mostrar_vector(int* vect,int ce){
    int i;
    for (i=0;i<ce;i++){
        printf("%d ",*vect);
        vect++;
        }
    }

void insertar_elemento(int* vect,int ce, int pos, int value){
    int i;
    int* pf=vect+ce;
    for (i=0;i<(ce-pos)+1;i++){
        *pf=*(pf-1);
        pf--;
        }
        *pf=value;
    }

//void intercambiar(int* e1, int* e2){
//
//    int *aux=*e1;
//        *e1=*e2;
//        *e2=*aux;
//}

int * buscarMenorEnt(const int* vec, const int* fin){
    const int* men=vec;
                vec++;
            while(vec<=fin)
            {
                if (*vec<*men)
                {
                    men=vec;
                }
                vec++;
            }
    return (int*) men;
}


void ordenarSeleccionEnt(int * vec, size_t ce){
    int * fin=vec+ce-1,
        * men;

    while (vec<fin)
    {
        men=encontrarMin(vec,fin);
        if (vec!=men)
        {
                intercambiar(vec,men);
        }
        vec++;
    }

}
