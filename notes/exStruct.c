/* exemplo básico */

#include <stdio.h>

struct Aluno 
{
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    struct Aluno aluno1 = {"João", 12345, 9.5};

    printf("Nome: %s\n", aluno1.nome);
    printf("Matrícula: %d\n", aluno1.matricula);
    printf("Nota: %.1f\n", aluno1.nota);

    return 0;
}