/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Atribuição em Ponteiro
*/

#include <stdio.h>

int main()
{
    int x = 5;
    int *p1, *p2;

    p1 = &x;
    p2 = p1;

    printf("Endereco de x: %x\n", &x);
    printf("Conteudo de p1: %x\n", p1);
    printf("Conteudo de p2: %x\n", p2);

    return 0;
}
