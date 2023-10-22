#include <stdio.h>
#include <stdlib.h>


// pq nao se usa & ao ler uma string com scanf


int main(){

    char palavra[100];

    // scanf("%100[^\n]", palavra);
    // printf("%s\n", palavra);

    printf("%p\n", palavra); // por padrão o nome do vetor é um ponteiro para a primeira posição deste vetor, não importando o tipo
    printf("%p\n", &palavra); // endereço do vetor todo, mas como o vetor é sequencial na memória ele retorna o endereço da primeira posição dnv
    printf("%p\n", &palavra[0]); // endereço da primeira posição do vetor

    return 0;
}