#ifndef MATRICES_H_INCLUDED
#define MATRICES_H_INCLUDED
#define TAM 50


void print_matriz(int mat[][TAM], int nf, int nc);
void triangulo_superior(int mat[][TAM], int nf, int nc);
void diag_principal(int mat[][TAM], int nf, int nc);
void diag_secundaria(int mat[][TAM], int nf, int nc);

#endif // MATRICES_H_INCLUDED
