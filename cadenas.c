#include <stdio.h>
#include <string.h>
#include "cadenas.h"
#define TAM 41
#define MI_TOUPPER(c) (c)>='a' && (c)<='z'? (c)-('a'-'A'):(c)
#define MI_TOLOWER(c) (c)>='A' && (c)<='Z'? (c)+('a'-'A'):(c)

int cantidad_aparciones(const char* s,char c){

    int cantidad=0;
    while(*s){
        if(*s==c){
            cantidad++;
        }


    }
    s++;


}


char *mayusculasMinusculas(char* s){

    int es_principio=1; //es_principio es una funcion a desarrollar
    while(*s != '\0'){

        if (es_principio || *(s-1)==' '){

           *s= MI_TOUPPER(*s);

        }
        else {
            *s=MI_TOLOWER(*s);
        }
        s++;
    }

    return s;
}

char *coma(char* s){
    return s;
}
