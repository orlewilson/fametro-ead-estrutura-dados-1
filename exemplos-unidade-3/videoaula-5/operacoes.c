/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de biblioteca de operações matemáticas (implementação)
*/

#include "operacoes.h"

int soma(int a, int b)
{
    return a + b;
}

int subtracao(int a, int b)
{
    return a - b;
}

int multiplicacao(int a, int b)
{
    return a * b;
}

int divisao(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        return 0;
    }
}