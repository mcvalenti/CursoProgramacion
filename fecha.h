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
int fecha2jd(int anio, int mes, int dia);
void jd2fecha(float jd, tFecha* tfecha1);
void ingresaFecha(tFecha* tfecha1);
void muestraFecha(tFecha* tfecha1);
void today(tFecha* now);
int masModerno(tFecha* tfecha1, tFecha* tfecha2);

#endif // FECHA_H_INCLUDED
