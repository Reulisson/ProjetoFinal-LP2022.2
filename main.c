#include <stdio.h>
#include <windows.h>
#include "vetores.h"

int main()
{
    int x[TAM], y[TAM], m[N][N];

    preencherVetor(x, TAM);
    Sleep(1000); // Sleep 1,0s
    preencherVetor(y, TAM);

    matrizCoocorrencias(x, y, TAM, m, N);

    printf("X = [ ");
    imprimirVetor(x, TAM);
    printf("]\n-----\nY = [ ");
    imprimirVetor(y, TAM);
    printf("]\n-----\n");
	
    puts("Matriz das coocorrencias");
    imprimirMatriz(m, N);
    puts("");

    return 0;
}
