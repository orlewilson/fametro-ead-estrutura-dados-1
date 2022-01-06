/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Ponteiro em Vetores
*/

#include <stdio.h>

int main()
{
    int v[3] = {10, 20, 30};
    int *ptr;

    ptr = &v[0];
    // ou ptr = v; (v == &v[0])

    printf("%d %d\n", v[0], *ptr);

    ptr = &v[2];
    printf("%d %d\n", v[2], *ptr);

    return 0;
}
