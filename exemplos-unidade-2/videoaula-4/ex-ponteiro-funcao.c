/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Ponteiro em Funções
*/

#include <stdio.h>

// passagem por valor
void duplica(int x)
{
    x = x * 2;
    printf("Valor de x duplicado: %d\n", x);
}

// passagem por referência
void duplicap(int *x)
{
    *x = *x * 2;
    printf("Valor de x duplicado: %d\n", *x);
}

int main()
{
    int x = 5;

    printf("Valor de x: %d\n", x);

    duplica(x);
    printf("Valor de x apos chamada da funcao duplica: %d\n", x);

    duplicap(&x);
    printf("Valor de x apos chamada da funcao duplicap: %d\n", x);

    return 0;
}
