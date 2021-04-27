#include <stdio.h>


int opcion_menu(){

    int opcion_seleccionada;

    do{
    printf("Seleccione una opcion del menu indicando el numero \n");
    printf("-----------------------------------------------------\n");
    printf("1-Ingresar Alumno validando campo por campo \n");
    printf("2- Ingresar Alumno validando al final de la carga \n");
    printf("3-Otra operacion \n");
    scanf("%d",&opcion_seleccionada);
    }while((opcion_seleccionada<1)||(opcion_seleccionada>3));

    return opcion_seleccionada;
}
