/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Declaração de Ponteiro
*/

#include <stdio.h>

int main()
{
    int x = 5;
    float pi = 3.14;

    // criando um ponteiro para o endereço de x
    int *ptr_x = &x;

    printf("conteudo de x: %d\n", x);
    printf("conteudo de pi: %2.2f\n", pi);
    printf("endereco de x: %x\n", &x);
    printf("ponteiro de x: %x\n", ptr_x);

    return 0;
}
