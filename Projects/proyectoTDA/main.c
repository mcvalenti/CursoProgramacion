#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dpila.h"

int main()
{
    int i,r,d;
    tPila p;
    crear_pila(&p);
    for (i=0;i<15;i++)
    {
        r=poner_en_pila(&p,&i,sizeof(i));
        if (!r)
            {printf("Pila llena");}
    }
    ver_tope(&p,&d,sizeof(d));
    printf("Tope de pila: %d \n",d);
    while(sacar_de_pila(&p,&i,sizeof(i))){
        printf("%d ",i);
    }
    return 0;

}
