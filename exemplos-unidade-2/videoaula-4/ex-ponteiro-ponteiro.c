/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Ponteiro para Ponteiro
*/

#include <stdio.h>

int main()
{
    int x = 5;
    int *ptr_x;      // Ponteiro para x
    int **ptr_ptr_x; // Ponteiro para o ponteiro de x

    // Inicialização dos ponteiros
    ptr_x = &x;
    ptr_ptr_x = &ptr_x;

    // Impressão dos valores das variáveis
    printf("x = %d | &x = %x\n", x, &x);
    printf("*ptr_x = %d | ptr_x = %x\n", *ptr_x, ptr_x);
    printf("**ptr_ptr_x = %d | *ptr_ptr_x = %x\n", **ptr_ptr_x, *ptr_ptr_x);

    return 0;
}
