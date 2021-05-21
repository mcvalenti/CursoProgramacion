#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include "fecha.h"
#include "menu.h"
#include "matrices.h"
#include "alumno.h"
#include "archivo.h"
#define TAM_LINEA 100

int main(){

    char payn="paramo, pedro";

    mayusculasMinusculas(&payn);
    printf("Apellido y Nombre: %s ",payn);

    tFecha nacimiento;

    nacimiento.anio=2020;
    nacimiento.mes=5;
    nacimiento.dia=24;
    valida_fecha_nacimiento(&nacimiento);
}

/*    tFecha fecha_proceso;
    int i;
    char path_txt[100], cadena_txt[100];
    FILE *arch_txt, *arch_bin, *arch_error;

    /*******************************
    LEER DEL ARCHIVO DE TEXTO
    *********************************/

/*
    while(!feof(arch_txt)){
        /// tengo la cadena y tengo que pasar eso a la estructura alumno
        if (texto_a_alumno(cadena_txt,&alumno,&fecha_proceso)){
            graba_binario(arch_bin,&alumno);

        }
        else{

            graba_error(arch_error,cadena_txt);
        }
        fgets(cadena_txt,TAM_LINEA,arch_txt);

    }
*/
/*

    FILE *pf;
    Dalumno alu;

    pf=fopen("salida.txt","r+b");
    /// ver que el archivo exite
    /// ver que el archivo no este vacio
    while(!eof(pf)){
        if (alu.ingreso < 2000 && alu.estado="A" ){
            alu.estado='I';

            fseek(pf,(long)-sizeof(Dalumno),SEEK_CUR);
            fwrite(&alu,sizeof(Dalumno),1,pf);
            fseek(pf,0,SEEK_CUR);
        }
        fread(&alu,sizeof(Dalumno),1,pf);


    }

    fclose(pf)

*/
