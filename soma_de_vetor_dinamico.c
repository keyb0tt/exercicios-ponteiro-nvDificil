// Crie uma função que receba um ponteiro e o tamanho do vetor e retorne a soma dos elementos.
#include <stdio.h>
#include <stdlib.h>

int somaArray(int arraySize, int *array){
    int arraySum = 0, count = 1;

    array = (int *) malloc(arraySize * sizeof(int));

    if(array == NULL){
        printf("\n\n ~ !! Erro ao alocar memória !! ~\n");
        printf("\n\n-------------------------------------\n");
    } else {
        printf("\n\n ~ Memória alocada com sucesso ~ \n");
        printf("\n-------------------------------------\n");
    }

    printf("\n ~ Conteúdo da array:\n");
    for(int i = 0; i < arraySize; i++){
        array[i] = count++;
        arraySum += array[i];
        printf("Array[%d]: %d \n",i + 1, array[i]);
    }

    return arraySum;
}

int main(){
    system("clear");
    int arraySize = 3, arraySum;
    int *array;

    arraySum = somaArray(arraySize, array);

    printf("\n\n ~ Soma dos elementos da array: %d\n\n", arraySum);

    return 0;
}
