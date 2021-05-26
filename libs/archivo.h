#ifndef ARCHIVO_H_INCLUDED
#define ARCHIVO_H_INCLUDED


int escribe_archivo(char* nombreArchivo);
int texto_a_alumno(const char* cadena_txt, Dalumno* alumno, tFecha* tfecha1);
void graba_error(FILE* arch_error,const char* cadena_txt);
#endif // ARCHIVO_H_INCLUDED
