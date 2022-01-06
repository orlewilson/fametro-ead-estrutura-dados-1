/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Inicialização de Ponteiro
*/

#include <stdio.h>

int main()
{
    int a = 5, b = 7;
    int *ptr = NULL; // ponteiro aponta para "nada"

    printf("conteudo de a: %d\n", a);
    printf("conteudo de b: %d\n", b);
    printf("conteudo de ptr: %d\n", ptr);

    ptr = &a;
    printf("conteudo de ptr: %d\n", *ptr);

    return 0;
}