#include <stdio.h>
#include <windows.h>
#include "vetores.h"

int main()
{
    int x[TAM], y[TAM], m[N][N];

    preencherVetor(x, TAM);
    Sleep(1000); // Sleep 1,0s
    preencherVetor(y, TAM);

    /*// Verificando as coocorrências
    int lin;
    for(lin=0; lin<N; lin++)
    {
    	int col;
        for(col=0; col<N; col++)
        {
            int cont = 0; // conta o numero de coocorrências
			int k;
            for(k=0; k<TAM; k++)
            {
                if(x[k] == lin && y[k] == col)
                {
                    ++cont;
                }
            }

            m[lin][col] = cont;
        }
    }*/
    
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
