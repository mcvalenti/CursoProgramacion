#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include "fecha.h"
#include "menu.h"
#include "matrices.h"
#include "alumno.h"
//void cocienteYresto(int,int,int *cociente,int *resto);



//#define TAM 5 // macros, directivas para el pre-compilador
int main()
{
    int i;
    //Dalumno alu1;
    tFecha fecha_proceso;

    /// ingresar los datos
    /// validar
    /// normalizacion

    /// fecha de proceso --> validar


 //   printf("Ingrese la fecha de proceso: \n");
//    ingresaFecha(&fecha_proceso);

    char nombres[5][41]={
        {" Pepe,  Botella "},
        {" Jonathan, Uran "},
        {"Diego,Ruiz"},
        {" JUAN CARLOS, garcia "},
        {" ViolETA PARRA "},
    };

    for (i=0;i<5;i++){
        printf("%s \n",nombres[i]);
    }

//    for (i=0;i<5;i++){
//
//        mayusculasMinusculas(nombres[i]);
//        coma(nombres[i]);
//
//    /// no mas de un espacio entre apellido y nombre
//
//    /// espacios al inicio y al final
//
//    }



//    alu1.dni=25840684;
//    alu1.nombreComp="Victoria Ocampo";
//    alu1.nacimiento={4,9,1976};//Validación formal y < fecha de proceso – 10 años
//    alu1.sexo="F";
//    alu1.carrera="FIL";
//    alu1.materias_aprobadas=8;
//    alu1.ultima_materia;
//    alu1.estado="R"; // Se genera cuando se crea el alumno por default



}


//    MATRICES
//    int nf=5, nc=5;
//    int mat [5][TAM]  = {{  1,  2,  3, 0, 2},
//                            { 44,  5,  6, 3, 7},
//                            {  7,  8,44, 15, 16},
//                            {  11,  0,2, 1, 6},
//                            {  3,  99,4, 5, 0}};
//    print_matriz(mat,nf, nc);
//    printf("-----------------------\n");
//    triangulo_superior(mat, nf, nc);
//    printf("-----------------------\n");
//    diag_secundaria(mat,nf,nc);
//    return 0;


//    FECHAS
//    int opcion_elegida;
//    opcion_elegida=opcion_menu();
//    printf("La opcion seleccionada es: %d",opcion_elegida);
//    return 0;

//    int es_valida,jd0,jd1;
//    tFecha tfecha, tfecha1;
//
//    printf("------------------------------------------ \n");
//    printf("Ingrese una fecha. \n");
//    printf("Dia: "); scanf("%d",&tfecha.dia);
//    printf("Mes: "); scanf("%d",&tfecha.mes);
//    printf("Anio: "); scanf("%d",&tfecha.anio);
//
//    printf(" FECHA 1: %d/%d/%d \n",tfecha.dia,tfecha.mes,tfecha.anio);
//
//    es_valida=validaFecha(&tfecha);
//
//    if (es_valida==1){
//        printf("La fecha es valida \n");
//        }
//    else {
//        printf("La fecha NO es valida \n");
//        }
//    jd0=fecha2jd(tfecha.anio, tfecha.mes, tfecha.dia);
//    printf("La fecha Juliana es JD= %d \n",jd0);
//
//    printf("------------------------------------------ \n");
//    printf("Ingrese otra fecha. \n");
//    printf("Dia: "); scanf("%d",&tfecha1.dia);
//    printf("Mes: "); scanf("%d",&tfecha1.mes);
//    printf("Anio: "); scanf("%d",&tfecha1.anio);
//
//    printf(" FECHA 2: %d/%d/%d \n",tfecha1.dia,tfecha1.mes,tfecha1.anio);
//    jd1=fecha2jd(tfecha1.anio, tfecha1.mes, tfecha1.dia);
//    tfecha1.dia=0;
//    tfecha1.mes=0;
//    tfecha1.anio=0;
//    jd2fecha(jd1,&tfecha1);
//    printf(" La nueva fecha calculada es: %d/%d/%d \n",tfecha1.dia,tfecha1.mes,tfecha1.anio);
//    printf("La cantidad de dias entre fechas es: %d \n",jd1-jd0);
//    return 0;



//    VECTORES
//    int vect[]={7,3,9,2};
//    int ce=4;
//    int pos=2;
//    int value=8;
//    //mostrar_vector(vect,ce);
//    printf("\n tamVect:%d tamVar:%d tamElem:%d",sizeof(vect),sizeof(int),sizeof(vect)/sizeof(int));
//    // insertar el número 8 en la posición 2.
//    ce=5;
//    insertar_elemento(vect,ce);
//    mostrar_vector(vect,ce);
