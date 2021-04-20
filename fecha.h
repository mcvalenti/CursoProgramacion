#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED


typedef struct tFecha
{
    int dia;
    int mes;
    int anio;
} tFecha;

int es_bisiesto(int anio);
int validaFecha(tFecha* tfecha);
int cant_dias(int mes, int anio);

#endif // FECHA_H_INCLUDED
