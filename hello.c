#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

int main() {
    /*
    puts("Hello World!");
    */

    char nome[10];
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe seu nome: ");
    __fpurge(stdin);
    fgets(nome, 9, stdin);

    if(nome[strlen(nome)-1] == '\n') nome[strlen(nome)-1] = '\0';

    printf("Meu nome é: %s e minha idade é %d!\n", nome, idade);

    return 1;
}