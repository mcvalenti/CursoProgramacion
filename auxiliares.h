#ifndef AUXILIARES_H_INCLUDED
#define AUXILIARES_H_INCLUDED

#include <stdbool.h>
#include <string.h>

typedef struct tFecha
{
    int dia;
    int mes;
    int anio;
} tFecha;


int add(int x, int y);
float power(float x, int n);
float factorial(int N);
float combinatoria(int m, int n);
float seno(float x, float TOL);
float n_term(float x, float term, int n);
float compute_root(float a, float TOL);
void cocienteYresto(int dividendo,int divisor,int *cociente,int *resto);
bool es_divisible(int dividendo, int divisor);
int es_bisiesto(int anio);
int validaFecha(tFecha* fecha1);
int validaFecha2(tFecha* fecha1, int* vec);

#endif // AUXILIARES_H_INCLUDED
