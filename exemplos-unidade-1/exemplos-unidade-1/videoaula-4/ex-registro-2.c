/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de cadastro aluno usando registro
*/

#include <stdio.h>

int main()
{
    // estrutura Aluno
    struct Aluno {
        char nome[50];
        char cpf[15];
        int idade;
        char telefone[11];
    };
    
    // declarando variável do tipo Aluno
    struct Aluno novo_aluno;

    printf("Escreva seu nome:\n"); gets(novo_aluno.nome);
    printf("Escreva seu CPF:\n"); gets(novo_aluno.cpf);
    printf("Escreva seu telefone:\n"); gets(novo_aluno.telefone);
    printf("Escreva sua idade:\n"); scanf("%d", &novo_aluno.idade);
    
    printf("--------------------\n");
    printf("Nome: %s \n", novo_aluno.nome);
    printf("CPF: %s \n", novo_aluno.cpf);
    printf("Telefone: %s \n", novo_aluno.telefone);
    printf("Idade: %d \n", novo_aluno.idade);
    printf("--------------------\n");

    return 0;
}