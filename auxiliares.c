#include "auxiliares.h"
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

int es_bisiesto(int);


float compute_root(float a, float TOL)
{   float raiz, aux;
    raiz=1.0;
    aux=0;
    if (a<0)
        raiz=-1;
    else
        while (fabs(raiz-aux)>TOL){
            aux=raiz;
            raiz=(1.0/2.0)*(raiz+a/raiz);
        };
    return raiz;
}

float factorial(int N)
{
    int i;
    float factorial;
    factorial=1.0;
    for(i=1;i<=N;i++){
        factorial=factorial*i;
    }
    return factorial;
}

float n_term(float x, float term, int n)
{
    float final_term;
    final_term=(-1)*term*x*x/(n*(n+1));
    return final_term;
}

float seno(float x, float TOL)
{
    int n;
    float sin_x, term, last_term;
    term=x;
    sin_x=term;
    n=0;
    while (fabs(term)>TOL){
        n=n+2;
        last_term=n_term(x,term,n);
        sin_x=sin_x+last_term;
        term=last_term;
        }
    return sin_x;
}

float power(float x, int n)
{
    int i;
    float r;
    r=1.0;
    for (i=0;i<n;i++){
        r=r*x;
        }
    return r;
}

int add(int x, int y)
{
    int r;
    r=x+y;
    return r;

}

float combinatoria(int m, int n)
{
    float m_fact, n_fact, m_n_fact;
    float combinatoria;
    m_fact=factorial(m);
    n_fact=factorial(n);
    m_n_fact=factorial(m-n);
    combinatoria=m_fact/(n_fact*m_n_fact);
    return combinatoria;
}

void cocienteYresto(int dividendo,int divisor,int *cociente,int *resto)
{
    int producto=1;
    while(producto<=dividendo-divisor){
        *cociente=*cociente+1;
        producto=divisor*(*cociente);
    }
    *resto=dividendo-producto;
}

bool es_divisible(int dividendo, int divisor)
{
    int cociente,resto;
    cociente=0;
    resto=0;
    if (divisor!=0){
        cocienteYresto(dividendo,divisor,&cociente,&resto);
    }
    else {
        printf("Division por cero \n");
    }
    if (resto==0){
        return true;
    }else {
        return false;
    }

}

int es_bisiesto(int anio)
{
    bool divisible_x_4, divisible_x_100, divisible_x_400;

    divisible_x_4= es_divisible(anio, 4);
    divisible_x_100= es_divisible(anio, 100);
    divisible_x_400= es_divisible(anio, 400);

    if (divisible_x_4 && !divisible_x_100)
    {
        return 1;
    }else if (divisible_x_4 && divisible_x_100 && divisible_x_400){
        return 1;
    }else{
        return 0;
    }
}


int validaFecha2(tFecha* fecha1, int* vec){
    /* This function modifies initial vec values*/

    bool anio_valido=false, mes_valido=false, dia_valido=false;
    int cant_dias[][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},
                    {31,29,31,30,31,30,31,31,30,31,30,31}};

    if ((fecha1->dia >= 1) && (fecha1->dia <= cant_dias[es_bisiesto(fecha1->anio)][fecha1->mes-1])){
        dia_valido=true;
        *vec=1;
        }
    vec++;
    if (1<=fecha1->mes && fecha1->mes<=12){
        mes_valido=true;
        *vec=1;
        }
    vec++;
    if (1900<fecha1->anio && fecha1->anio<2099){
        anio_valido=true;
        *vec=1;
        }

    if (anio_valido && mes_valido && dia_valido){
        return 1;
        }
    else {
        return 0;
    }


}

int validaFecha(tFecha *fecha1){

    bool anio_valido=false, mes_valido=false, dia_valido=false;
    int cant_dias[2][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},
                    {31,29,31,30,31,30,31,31,30,31,30,31}};

    if ((fecha1->dia >= 1) && (fecha1->dia <= cant_dias[es_bisiesto(fecha1->anio)][fecha1->mes-1]))
    {
        dia_valido=true;
    }

    if (1900<fecha1->anio && fecha1->anio<2099){
        anio_valido=true;
        }

    if (1<=fecha1->mes && fecha1->mes<=12){
        mes_valido=true;
        }


    if (anio_valido && mes_valido && dia_valido){
        return 1;
        }
    else {
        return 0;
    }
}

