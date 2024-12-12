/* estrutura básica */

#include <stdio.h>                  // standard input-output
#include <stdlib.h>                 // standard library

int valor;                          // declarando variável global

void funcao_teste() {               // declarando função
    printf("teste");
}

int main() {
    printf("Hello World \n");
    funcao_teste();
}