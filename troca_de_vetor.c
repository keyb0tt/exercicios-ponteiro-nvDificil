// Crie uma função que troque o conteúdo de dois vetores de mesmo tamanho usando ponteiros.
#include <stdio.h>
#include <stdlib.h>

void trocaArray(int *array1, int *array2)
{
    int *arrayCopia = (int *)malloc(3 * sizeof(int));
    
    for (int i = 0; i < 3; i++)
    {   
        arrayCopia[i] = *(array1 + i);
    }

    for (int i = 0; i < 3; i++)
    {   
        array1[i] = *(array2 + i);
    }

    for (int i = 0; i < 3; i++)
    {   
        array2[i] = *(arrayCopia + i);
    }

    free(arrayCopia);
}

int	main()
{
    system("clear");
    int arraySize = 3;
    int array1[3] = {1, 2, 3};    
    int array2[3] = {4, 5, 6};   

    printf("\n\nElementos originais das arrays: \nArray1:\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("Array1[%d] = %d\n", i + 1, array1[i]);    
    }
    printf("\nArray2:\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("Array2[%d] = %d\n", i + 1, array2[i]);    
    }

    trocaArray(array1, array2);
    
    printf("\n\nElementos das arrays após as alterações: \nArray1:\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("Array1[%d] = %d\n", i + 1, array1[i]);    
    }
    printf("\nArray2:\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("Array2[%d] = %d\n", i + 1, array2[i]);    
    }

    return 0;
}
