#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED
#include "fecha.h"

typedef struct{
    int animal;
    int edad;
}mascota;

typedef struct {
    long dni;
    char nombre_completo[40];
    tFecha nacimiento;
    char sexo[1];
    tFecha ingreso;
    char carrera[4];
    int materias_aprobadas;
    tFecha ultima_materia;
    char estado[1];
    tFecha fecha_baja;
} Dalumno;


/*
    VALIDACIONES POR CAMPO
*/
int valida_fecha_nacimiento(tFecha* fecha_nacimiento);
//int ingresaAlumno(Dalumno* alumno);

//// Validaciones

//int validaAlumno(tFecha* fecha_proceso, Dalumno* alumno);
//int valida_dni(int dni);
//char* normalizar_nombre(char* nombre_completo);
//int valida_sexo(char sexo);
//int valida_fecha_ingreso(tFecha* fecha_ingreso);
//
//
//
//
//int carga_con_validacion(); //valida a medida que se cargan los datos
//int valida_alumno(Dalumno* alumno1, tFecha* fechaHoy); //valida la estuctura que recibe por referencia


#endif // ALUMNO_H_INCLUDED
