#include <stdio.h>
#include <stdlib.h>


// quanto de memoria um ponteiro precisa


int main(){

    int *p;
    char *p2;
    float *p3;

    printf("tamanho: %d\n", sizeof(int));
    printf("tamanho para p: %d\n", sizeof(p));
    printf("tamanho para p2: %d\n", sizeof(p2));
    printf("tamanho para p3: %d\n", sizeof(p3));

    // um endereço de memoria sempre terá o mesmo tamanho, por isso todos os ponteiros precisam de 8 bytes de memoria

    return 0;
}