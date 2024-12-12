/* exemplo básico */

#include <stdio.h>  // inclui biblioteca padrao, necessaria para a funcao printf

struct Aluno // define a estrutura, q eh usada para agrupar diferentes tipos de dados
{
    char nome[50];
    int matricula;
    float nota;
};

int main() { // aqui o codio cria a variavel aluno1 do tipo struct Aluno e inicializa os 3 campos
    struct Aluno aluno1 = {"João", 12345, 9.5};

    printf("Nome: %s\n", aluno1.nome);
    printf("Matrícula: %d\n", aluno1.matricula);
    printf("Nota: %.1f\n", aluno1.nota);

    return 0;
}