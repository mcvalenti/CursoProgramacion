#include <stdio.h>
#include "alumno.h"
#include "fecha.h"

/*
    VALIDACIONES POR CAMPO
*/
int valida_fecha_nacimiento(tFecha* nacimiento){

    tFecha now;
    int valNac1, valNac2;

    now.anio=0;
    now.mes=0;
    now.dia=0;

    today(&now);
    printf("Fecha de Procesamiento: ");
    muestraFecha(&now);
    printf("Fecha de Nacimiento ingresada: ");
    muestraFecha(nacimiento);

    valNac1=validaFecha(nacimiento);

    if (now.anio-10>nacimiento->anio){
        valNac2=1;
        }
    else {
        valNac2=0;
    }
    if (valNac1 && valNac2){
        printf("Fecha valida y con diferencia de 10 anios \n");
        }
    else{
        printf("ERROR: Revisar fecha de nacimiento! \n");
    }


}

int ingresaAlumno(Dalumno* alumno){
    /// donde se ingresan los datos del alumno
    return 1;
}


// VALIDACIONES

int validaAlumno(tFecha* fecha_proceso, Dalumno* alumno){

    return 1;
}

//int valida_dni(int dni){
//    /**
//      * Verifica 10000<dni<10000000
//      */
//
//    if (dni>10000 && dni<100000000){
//        return 1;
//        }
//    else {
//        return 0;
//    }
//
//}
