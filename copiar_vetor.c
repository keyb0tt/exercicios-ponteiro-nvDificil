// Crie uma função que copie um vetor em outro usando apenas ponteiros.
#include <stdio.h>
#include <stdlib.h>

void copyArray(int *mainArray, int *newArray, int size)
{
    for (int i = 0; i < size; i++)
    {
        newArray[i] = *(mainArray + i);
    }
}

int	main()
{
    int size, fill = 1;
    system("clear");
    printf("\n\nTamanho: ");
    scanf("%d", &size);

    printf("\n\n");
    int *mainArray = (int *)malloc(size * sizeof(int)); // Alocação de memória da array principal;
    for (int i = 0; i < size; i++)
    {
        mainArray[i] = fill++; // Preenchimento da array principal;
        printf("mainArray[%d]: %d\n", i + 1, mainArray[i]); // Impressão da array principal;
        
    }
    
    printf("\n\n");
    int *newArray = (int *)malloc(size * sizeof(int)); // Alocação de memória da array que irá copiar a array principal;
    copyArray(mainArray, newArray, size); // Chamando função que copia os elementos do primeiro parâmetro para o segundo;
    for (int i = 0; i < size; i++)
    {
        printf("newArray[%d]: %d\n", i + 1, newArray[i]); // Impressão da array com os valores copiados;
    }
    printf("\n\n");

    return 0;
}
