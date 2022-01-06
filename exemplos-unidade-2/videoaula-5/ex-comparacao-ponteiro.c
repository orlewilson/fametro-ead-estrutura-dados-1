/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Comparação/Diferença em Ponteiro
*/

#include <stdio.h>

int main()
{
    int x = 5, y = 6; // int 4 bytes

    int *p1 = &x, *p2 = &x, *p3 = &y;

    printf("Endereco de x: %d\n", &x);
    printf("Endereco de y: %d\n", &y);

    printf("Valor de p1: %d\n", p1);
    printf("Valor de p2: %d\n", p2);
    printf("Valor de p3: %d\n", p3);

    printf("p1 == p2: %s\n", (p1 == p2) ? "V" : "F");
    printf("p1 != p2: %s\n", (p1 != p2) ? "V" : "F");
    printf("p2 != p3: %s\n", (p2 != p3) ? "V" : "F");

    return 0;
}
