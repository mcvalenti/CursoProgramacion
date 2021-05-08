#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
#include "fecha.h"

int escribe_archivo(const char* nombreArchivo)
{

    Dalumno vectorAlumno[]={
                            {25644899,"Pedro Paramo",{15,3,2000},"F",{27,1,2018},"INF",10,{27,3,2020},"R",{31,12,9999}},
                            {22644899,"Victoria Ocampo",{1,9,1996},"F",{27,1,2005},"INF",10,{27,3,2012},"R",{24,6,92012}}
                            };

    FILE *pf;

    pf=fopen(nombreArchivo,"wb");// crea la estructura y reserva el buffer

    if (pf){
        fwrite(vectorAlumno,sizeof(vectorAlumno),1,pf);
        // o puedo poner el tipo Dalumno y la cantidad de elementos
        //fwrite(vectorAlumno,sizeof(Dalumno),sizeof(vectorAlumno)/sizeof(Dalumno),pf);
        fclose(pf);
        return 0;
    }
        return -2;
}



   /* if (pf==NULL){ // Siempre validar que archivo no sea NULO
        system("PAUSE");
        exit(-1);
    }
    else{

        fwrite(vectorAlumno,sizeof(vectorAlumno),1,pf);
    }
    fclose(pf);*/
    //fread(&alu2,sizeof(t_alumno),1,pf)


/*
t_alumno alu[ALUMNOS]={{41704776,"      Jose,Perez",{12,1,1999},'M',{1,4,2018},"INF",
                       23,{15,12,2020},'R',{31,12,9999}},
                      {32709214,"     Mario,    Soso",{2,3,1992},'H',{1,4,2010},"ECO",
                       32,{1,12,2020},'R',{31,12,9999}},
                      {38564126,"Francisco,ortega ",{4,7,1995},'F',{1,4,2014},"EDF",
                       38,{30,11,2020},'R',{31,12,9999}},
                      {34926182,"juan        Lucero",{15,2,1993},'F',{1,4,2011},"IND",
                       39,{10,12,2019},'R',{31,11,9999}},
                      {42251216,"       Thiago ,Almada       ",{5,10,2000},'H',{1,4,2019},"ADM",
                       12,{23,12,2020},'R',{31,12,9999}}
                    };

*/
