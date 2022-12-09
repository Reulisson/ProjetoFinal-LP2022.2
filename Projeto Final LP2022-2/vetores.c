#include <stdio.h>
#include <time.h>
#include "vetores.h"

void preencherVetor(int *pv, int qtd)
{
    srand(time(NULL));
	int i;
    for(i=0; i<qtd; i++)
    {
        *(pv+i) = rand() % N;
    }
}

void imprimirVetor(int *pv, int qtd)
{
	int i;
    for(i=0; i<qtd; i++)
    {
        printf("%d ", *(pv+i));
    }
}

void imprimirMatriz(int *pm, int dim)
{
	int qnl = dim;
	int qnc = dim;
	int i;
    for (i=0; i<qnl*qnc; i++)
    {
        if (!(i%qnc)) printf("\n");
        printf("%3d ", *(pm+i));
    }
    printf("\n");
}

void matrizCoocorrencias(int *px, int *py, int qtd, int *pm, int dim)
{
	// Verificando as coocorrências
    int lin;
    for(lin=0; lin<dim; lin++)
    {
    	int col;
        for(col=0; col<dim; col++)
        {
            int cont = 0; // conta o numero de coocorrências
			int k;
            for(k=0; k<qtd; k++)
            {
                if(*(px+k) == lin && *(py+k) == col)
                {
                    ++cont;
                }
            }

            *(pm + dim * lin + col) = cont;
        }
    }
}
