#ifndef VECTOR_LIB_H_INCLUDED
#define VECTOR_LIB_H_INCLUDED

#include <stdbool.h>
#include <string.h>


void mostrar_vector(int* vect,int ce);
void insertar_elemento(int* vect,int ce, int pos, int value);
int * buscarMenorEnt(const int* vec, int ce);
void intercambiar(int* e1, int* e2);
void ordenarSeleccionEnt(int * vec, size_t ce);
void * buscarMenorGen(void* vec,
                      int ce,
                      size_t tam,
                      int (*cmp)(void*, void*));

void interGenerico_stat(void* e1, void* e2, size_t tam);
void ordenGenerico(void* vec,
                      int ce,
                      size_t tam,
                      int (*cmp)(void*, void*));

#endif // AUXILIARES_H_INCLUDED
