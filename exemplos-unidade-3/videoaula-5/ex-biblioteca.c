/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Biblioteca
*/

#include <stdio.h>
#include "operacoes.h"

int main()
{
    int a = 5, b = 2;

    printf("Soma entre %d e %d = %d \n", a, b, soma(a, b));
    printf("Subtracao entre %d e %d = %d \n", a, b, subtracao(a, b));
    printf("Multiplicacao entre %d e %d = %d \n", a, b, multiplicacao(a, b));
    printf("Divisao entre %d e %d = %d \n", a, b, divisao(a, b));

    return 0;
}
