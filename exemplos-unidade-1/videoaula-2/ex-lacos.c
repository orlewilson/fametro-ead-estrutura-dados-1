/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de laços
*/

#include <stdio.h>

int main()
{
    int a, cont;
    a = 10;
    cont = 0;

    // enquanto
    while (cont < a)
    {
        printf("%d\n", cont);
        cont = cont + 1;
    }

    // para
    for (cont = 0; cont < a; cont = cont + 1)
    {
        printf("%d\n", cont);
    }

    return 0;
}