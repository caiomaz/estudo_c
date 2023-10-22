#include <stdio.h>
#include <stdlib.h>


// ponteiro como parametro


// passagem de parametro por valor
void imprimir(int num){
    printf("%d\n", num);
    num = 80;
}

// passagem de parametro por referencia
void imprimir2(int *num){
    // mostrar o conteudo apontado pelo ponteiro
    printf("%d\n", *num);
    // alterar o conteudo apontado pelo ponteiro
    *num = 80;
}

int main(){

    int idade = 19;

    // passagem de parametro por valor
    imprimir(idade);
    printf("na funcao main: %d\n\n", idade);


    // passagem de parametro por referencia
    imprimir2(&idade);
    printf("na funcao main: %d\n", idade);

    return 0;
}