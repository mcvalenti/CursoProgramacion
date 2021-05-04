#include "cadenas.h"

char *mayusculasMinusculas(char* s){

    if (*s>'A' && *s<'Z'){
        printf("La letra es mayuscula");
        }
    else {
        printf("La letra NO es mayuscula");
        }

    return s;
}

char *coma(char* s){
    return s;
}
