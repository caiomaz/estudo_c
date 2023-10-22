#include <stdio.h>
#include <stdlib.h>


// estudo de ponteiros 


int main(){


    // teste com inteiros


    printf("\n\nponteiro com inteiro\n");

    int num = 10;
    // inicializando um ponteiro (*) que aponta para um inteiro (int)
    int *p;
    
    // o ponteiro guarda o endereço (&) de num;
    p = &num;

    // pra mostrar inteiro %d, pra mostrar endereço %p
    printf("valor de num: %d\n", num); 
    printf("endereco de num: %p\n", &num);
    // mostrando o valor de p (endereço de num) e o valor apontado por p (valor atribuido ao endereço que p aponta)
    printf("valor de p: %p\n", p); 
    printf("valor apontado por: %d\n", *p);
    // o endereço de p é diferente do conteúdo de p (endereço de num)
    printf("endereco de p: %p\n", &p);


    // teste com caracteres


    printf("\n\nponteiro com caracteres\n");

    char name = 'c';
    char *p2;

    p2 = &name;

    printf("valor de name: %c\n", name);
    printf("endereco de name: %p\n", &name);
    printf("valor de p2: %p\n", p2);
    printf("valor apontado por: %c\n", *p2);
    printf("endereco de p2: %p\n", &p2);

    return 0;
}