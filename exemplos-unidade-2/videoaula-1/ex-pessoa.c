/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de representação dados de uma pessoa
                    em linguagem estruturada
*/
#include <stdio.h>

typedef struct
{
    char *nome;
    int idade;
} Pessoa;

int main()
{

    Pessoa joao;

    joao.nome = "Joao da Silva";
    joao.idade = 30;

    printf("Nome: %s \n", joao.nome);
    printf("Idade: %d \n", joao.idade);

    return 0;
}