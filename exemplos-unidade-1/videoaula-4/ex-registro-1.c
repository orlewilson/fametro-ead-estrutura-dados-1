/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de cadastro aluno sem usar registro
*/

#include <stdio.h>

int main()
{
    // inforações novo aluno
    char nome[50];
    char cpf[15];
    int idade;
    char telefone[11];

    printf("Escreva seu nome:\n");
    gets(nome);
    printf("Escreva seu CPF:\n");
    gets(cpf);
    printf("Escreva seu telefone:\n");
    gets(telefone);
    printf("Escreva sua idade:\n");
    scanf("%d", &idade);

    printf("--------------------\n");
    printf("Nome: %s \n", nome);
    printf("CPF: %s \n", cpf);
    printf("Telefone: %s \n", telefone);
    printf("Idade: %d \n", idade);
    printf("--------------------\n");

    return 0;
}