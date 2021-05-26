#include "matrices.h"
#include <stdio.h>

void print_matriz(int mat[][TAM], int nf, int nc){
    /**
      *Imprime matriz cuadrada
      */

    int i,j;
    for (i=0;i<nf;i++){
        for (j=0;j<nc;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return;
}

void triangulo_superior(int mat[][TAM], int nf, int nc){
    /**
      *Imprime matriz cuadrada
      */

    int i,j;
    for (i=0;i<nf;i++){
        for (j=0;j<nc;j++){
            if (i>j){
            printf("%d ",mat[i][j]);
            }
        }
        printf("\n");
    }
    return;
}

void diag_principal(int mat[][TAM], int nf, int nc){
    /**
      *Imprime matriz cuadrada
      */

    int i,j;
    for (i=0;i<nf;i++){
            printf("%d ",mat[i][i]);
        printf("\n");
    }
    return;
}

void diag_secundaria(int mat[][TAM], int nf, int nc){
    /**
      *Imprime matriz cuadrada
      */

    int i,j;
    for (i=nf-1;i>=0;i--){
        for (j=0;j<nc;j++){

            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return;
}

void triang_der(int mat[][TAM], int ord){
    /**
      *Imprime triangulo derecho de la matriz
      */

    int i,j, inij;
    for (i=0;i<ord;i++){
        inij=ord-i-1>i?ord-i-1:i;
        printf("\%*s",3*inij,""); // el 3 es la cantidad de lugares de los caracteres
        for (j=inij;j<ord;j++){

            printf("%3d ",mat[i][j]);
        }
        printf("\n");
    }
    return ;

//    int mat1 [3][TAM]= {{  1,  2,  3},
//                        { 44,  5,  6},
//                        {  7,  8,944}};
//    int mat2 [7][TAM]= {{  1,  2,  3, 78, 26, 27, 28},
//                        { 44,  5,  6, 55, 42, 47, 48},
//                        {  7,  8,944, 56, 22, 27, 28},
//                        { 45, 25, 16,  5, 12, 17, 18},
//                        { 14, 12,  1,  3, 55, 57, 58},
//                        { 11, 11, 11,  1, 51, 51, 58},
//                        { 12, 12, 12,  2, 52, 52, 58}
//                        };
