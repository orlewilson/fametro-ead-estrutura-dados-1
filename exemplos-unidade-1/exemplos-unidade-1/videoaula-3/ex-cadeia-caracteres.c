/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de cadeia de caracteres
*/

#include <stdio.h>

int main()
{
    // declaração de uma cadeia de caracteres
    char meu_nome[15] = "Orlewilson";
    char seu_nome[50];

    printf("Escreva seu nome:\n");
    gets(seu_nome); // recebe todos os caracteres digitados no console

    // leitura de valor no vetor
    printf("Meu nome: %s \n", meu_nome);
    printf("Seu nome: %s \n", seu_nome);

    return 0;
}