#include <stdio.h>
#include <windows.h>
#include "vetores.h"

int main()
{
    int mat[N][N], x[TAM], y[TAM], vet[N*N];

    preencherVetor(x, TAM);
    Sleep(1000); // Sleep 1,0s
    preencherVetor(y, TAM);
    
    matrizCoocorrencias(x, y, TAM, mat, N);

    printf("X = [ ");
    imprimirVetor(x, TAM);
    printf("]\n-----\nY = [ ");
    imprimirVetor(y, TAM);
    printf("]\n-----\n");
	
    puts("\n-- MATRIZ ORIGINAL --");
    imprimirMatriz(mat, N, N);
    puts("\n-- MATRIZ VETORIZADA --\n");
    vetorizacao(vet, mat, N, N);
    imprimirVetor(vet, N*N);
    puts("\n");

    return 0;
}
