# Estruturas de Comando e Repetição
## Comando, definições, sintaxe

### declaração de variável

tipo_de_dado nome_da_variavel;

***Exemplos*** <br>
```c
int idade; 
float altura;
char inicial;
```

### declaração de constante
 
#define NOME_CONSTANTE valor

***exemplo*** <br>
`def float PI = 3.14159;`

### if
#### comando condicional

```c  
if (condicao) {
    // codigo a ser executado se for verdadeiro
} else {
    // codigo a ser executado se for falso
}
```

### switch
#### comando condicional

```c
switch(expressao) {
    case valor1:
        // codigo para o caso valor1
        break;
    case valor2:
        // codigo para o caso valor2
        breal;
    default:
        // codigo para os demais casos
}
```
***exemplo***
` switch(i) {} `

### while
#### estrutura de controle de fluxo com pré-validação

```c
while(condicao) {
    //codigo a ser repetido enquanto a condicao for verdadeira
}
```
***exemplo***
```c
int i = 1;
while (i <= 10>) {
    printd("%d", i++);
}
```

### do
#### estrutura de controle de fluxo com pré-validação

```c
do {
    // codigo a ser executado pelo menos uma vez
} while (condicao);
```
***exemplo***
```c
int i = 1;
do {
    printf("%d", i++);
} while(i <= 10>);
```

### for
#### estrutura de controle de fluxo simples

```c
for(inicializacao; condicao; incremento) {
    // codigo a ser repetido
}
```
***exemplo***
```c
for(i = 1; i <= 10; i++>) {
    printf("\n%d", i);
}
```

### break
#### interrompe a execução do laço mais interno
` break; `

### continue
#### pula para a próxima iteracao do laço
` continue `

### sub-rotinas
#### funcoes

```c
tipo_de_retorno nome_da_funcao(lista_de_parametros) {
    // corpo da funcao
}
```
***exemplo***
```c
float area(float altura, float base) {
    return altura * base;
}
```

#### procedimentos
```c
void area(float altura, float base) {
    printf("A área é %f", altura * base);
}
```

### vetores
#### variaveis unidimensionais

`tipo_de_dado nome_do_vetor[tamanho];`

***exemplo***
`int numero[5];`

### matrizes
#### variaveis multidimensionais

`tipo_de_dado nome_da_matriz[linhas][colunas];`

***exemplo***
`float matriz[3][3];`

### structure
#### tipos de dados compostos

```c
struct nome_da_estrutura {
    tipo_de_dado membro1;
    tipo_de_dado membro2;
    //..
};
```

***exemplo***
```c
struct Pessoa{
    char nome[50];
    int idade;
};
```

### typedef
#### definicao de novos tipos de dados

`typedef tipo_de_novo_dado novo_nome;`

***exemplo***
`typedef int inteiro;`

### enum
#### conjunto de constantes nomeadas

```c
enum dias_da_semana {
    DOMINGO;
    SEGUNDA;
    TERÇA;
    QUARTA;
    QUINTA;
    SEXTA;
    SABADO;
};