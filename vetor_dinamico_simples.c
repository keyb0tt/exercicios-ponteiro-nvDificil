// Use malloc para criar um vetor de tamanho n, preencha com números e exiba.
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int *array;
    int size;
    
    printf("\n\nInsira o tamanho da array: ");
    scanf("%d", &size);

    array = (int *) malloc(size * sizeof(int));

    if(array == NULL){
        printf("Erro ao alocar memória\n");
        return 1;
    } else {
        printf("\n\nMemória alocada com sucesso\n");
    }

    printf("\n\nPreencha o conteúdo da array:\n\n");
    for(int i = 0; i < size; i++){
        printf("Array[%d]: ", i + 1);
        scanf("%d", &array[i]);
    }

    free(array);

    return 0;
}