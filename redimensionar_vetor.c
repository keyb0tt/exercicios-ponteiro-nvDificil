// Use realloc para dobrar o tamanho do vetor e leia novos valores.
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int size, count = 1;

    // -----------------Manipulação-da-array-original--->
    size = 5; // Var 'int size' usado para referenciar o n° de elementos de memória que serão alocados inicialmente;

    // FUNÇÃO MALLOC: int '*array'<-[Declaração da array/ponteiro original] = (int *) malloc(size:'size' * sizeof(int)); 
    // Usada para alocar endereços de memória de arrays, criando assim uma array dinâmica a partir de um ponteiro
    // ('*array') e definindo seu tamanho com o parâmetro: (size:'valor' * sizeof(int));  
    int *array = (int *) malloc(size * sizeof(int));

    // Verificação da alocação de memória: caso o ponteiro usado em malloc não for preenchido corretamente, encerrar o programa;
    // Sempre deve-se fazer um uso seguro de alocação de memória para evitar problemas que podem ser prejudiciais ao computador;
    if(array == NULL){ // Caso não exista memória, return 1 (encerrar com true);
        printf("\n\nErro ao alocar memória inicial\n\n");
        return 1;
        // Fim da verificação;
    }

    printf("\nConteúdo da array original\n\n");
    for(int i = 0; i < size; i++){
        array[i] = count++; // Preenchimento da array original;
        printf("Array[%d]: %d\n", i + 1, array[i]); // Impressão do conteúdo original da array;
    } // Fim da impressão;
    // ----------------------------Fim-da-manipulação--->
    
    
    // ---------Manipulação-da-cópia-'arrayDuplicata'--->
    size = 10; // Valor de 'size' alterado para indicar novo tamanho da variável;

    // FUNÇÃO REALLOC: É declarada com uma nova array ('*arrayDuplicata') que receberá os valores do ponteiro declarado em seu parâmetro 'ptr:'('array') e criará um novo número de espaços de memória determinado pelo parâmetro 'size:'('size');
    int *arrayDuplicata = (int *) realloc(array, size * sizeof(int));
    // SINTAXE: int '*array2'<-[nova array(temporária) com conteúdo duplicado] = (int *) realloc(ptr:'array'<-[ptr da array original], size:'size'<-[variável/valor do novo tamanho] * sizeof(int)); 

    // Verificando se a realocação de memória foi bem sucedida;
    if(arrayDuplicata == NULL){
        printf("\n\n!! Erro ao alocar memória !!\n\n"); 
        free(array); // Após o fim do programa (ou uso da memória) sempre deve-se limpar a memória alocada usando free('ponteiro');
        return 1;
        // Fim da verificação;
    }
    
    array = arrayDuplicata; // Atualização do ponteiro para o bloco da nova array;

    for(int i = 5; i < size; i++){
        array[i] = count++; // Inicializando novas posições da array (começando +1 elemento após o último da array original);
    }

    
    printf("\n\nElementos da array redimensionada: \n");
    for(int i = 0; i < size; i++){
        printf("Array[%d]: %d\n", i + 1, array[i]); // Impressão dos elementos da array redimensionada;
    } // Fim da impressão;
    
    free(array); // Liberação da memória alocada;
    // ----------------------------Fim-da-manipulação--->

    return 0;
}