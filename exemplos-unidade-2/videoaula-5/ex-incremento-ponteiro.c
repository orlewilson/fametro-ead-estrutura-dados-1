/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Incremento/Decremento em Ponteiro
*/

#include <stdio.h>

int main()
{
    int x = 5; // int 4 bytes

    int *p1 = &x;
    int *p2 = &x;

    printf("Endereco de x: %d\n", &x);
    printf("Valor de p1: %d\n", p1);
    printf("Valor de p2: %d\n", p2);

    p1++;
    p2--;

    printf("Valor de p1++: %d\n", p1);
    printf("Valor de p2--: %d\n", p2);

    return 0;
}
