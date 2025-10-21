// Crie uma matriz NxM com int **matriz, leia e exiba os valores.
#include <stdio.h>
#include <stdlib.h>

int	main()
{
    system("clear");    
    int **matriz;
    int LINHAS = 3, COLUNAS = 3, count = 1;

    // Alocação do ponteiro principal (contém os endereços das linhas, é constituida dinamicamente por uma array de ponteiros usando malloc);
    matriz = (int**)malloc(LINHAS * sizeof(int*)); 

    // Em um loop, cada posição do array principal é alocada para armazenar um array de inteiros, que será cada linha da matriz;
    for (int i = 0; i < LINHAS; i++)
    {
        matriz[i] = (int*)malloc(COLUNAS * sizeof(int));
    }
    
    // Preenchimento e impressão da matriz alocada dinamicamente;
    for (int r = 0; r < LINHAS; r++)
    {
        for(int c = 0; c < COLUNAS; c++)
        {
            matriz[r][c] = count++;
            printf(" %d ", matriz[r][c]);
        }
        printf("\n");
    }

    // Liberação da memória alocada;  
    for (int i = 0; i < LINHAS; i++)
    {
        free(matriz[i]); // Primeiro liberando cada linha;
    }
    free(matriz); // Depois o array principal;

    return 0;
}
