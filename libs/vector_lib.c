#include "vector_lib.h"
#include <stdio.h>

void mostrar_vector(int* vect,int ce)
{
    int i;
    for (i=0; i<ce; i++)
    {
        printf("%d ",*vect);
        vect++;
    }
}

void insertar_elemento(int* vect,int ce, int pos, int value)
{
    int i;
    int* pf=vect+ce;
    for (i=0; i<(ce-pos)+1; i++)
    {
        *pf=*(pf-1);
        pf--;
    }
    *pf=value;
}

void intercambiar(int* e1, int* e2)
{
    /*Intercambia los valores de dos punteros a enteros*/
    int aux=*e1;
    *e1=*e2;
    *e2=aux;
}

void interGenerico_stat(void* e1, void* e2, size_t tam)
{
    /*Intercambia elementos byte a byte*/
    char tmp;
    int i;
    for(i=0;i<tam;i++)
    {
        tmp=*(char*)e1;
        *(char*)e1=*(char*)e2;
        *(char*)e2=tmp;
        e1++;
        e2++;
    }
}

int * buscarMenorEnt(const int* vec, int ce)
{
    /*Devuelve el puntero al menor elmento de
    un vector de enteros */

    int* men=(int*)vec;
    int * fin=(int*)(vec+ce-1);
    vec++;
    while(vec<=fin)
    {
        if (*vec<*men)
        {
            men=(int*)vec;
        }
        vec++;
    }
    return men;

}

void * buscarMenorGen(void* vec,
                      int ce,
                      size_t tam,
                      int (*cmp)(void*, void*))
{
    void* men=vec;
    void* fin=vec+(ce-1)*tam;
    vec+=tam;
    while(vec<=fin)
    {
        if (cmp(vec, men)<0)
        {
            men=vec;
        }
        vec+=tam;
    }
    return men;

}


void ordenarSeleccionEnt(int * vec, size_t ce)
{
    /*Ordena un vector de Enteros*/
    int * fin=vec+ce-1,
          * men;

    while (vec<fin)
    {
        men=buscarMenorEnt(vec,ce);
        if (vec!=men)
        {
            intercambiar(vec,men);
        }
        vec++;
        ce--;
    }

}

void ordenGenerico(void* vec,
                      int ce,
                      size_t tam,
                      int (*cmp)(void*, void*))
{
    /*Ordena en forma generica*/
    void* fin=vec+(ce-1)*tam,
        * men;

    while (vec<fin)
    {

        men=buscarMenorGen(vec,ce,tam,cmp);
        if (vec!=men)
        {
            interGenerico_stat(vec,men,tam);
        }
        vec+=tam;
        ce--;
    }
    return;
}
