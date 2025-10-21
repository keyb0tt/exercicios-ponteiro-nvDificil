// Crie e preencha um vetor com malloc, depois use free() e mostre que o ponteiro agora é inválido.
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int size = 5;

    int *array = (int *) malloc (size * sizeof(int));

    printf("\n\nConteúdo original da array:\n\n");
    for (int i = 0; i < size; i++)
    {
        array[i] = i + 1;
        printf("Array[%d] = %d", i + 1, array[i]);
        printf("\n");
    }

    free(array);
    
    printf("\n\nConteúdo da array após o uso de free() (ponteiro inválido)\n\n");
    for(int i = 0; i < size; i++)
    {
        printf("Array[%d] = %d", i + 1, array[i]);
        printf("\n");
    }

    return 0;
}