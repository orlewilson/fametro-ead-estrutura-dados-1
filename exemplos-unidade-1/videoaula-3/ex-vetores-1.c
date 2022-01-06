/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de declaração de vetor
*/

#include <stdio.h>

int main()
{
    // declaração de vetor
    int comissao[5];

    // atribuição de valor no vetor
    comissao[0] = 3500;
    comissao[1] = 3560;
    comissao[2] = 4000;
    comissao[3] = 4000;
    comissao[4] = 5000;

    // leitura de valor no vetor
    for (int cont = 0; cont < 5; cont++)
    {
        printf("[%d] = %d \n", cont, comissao[cont]);
    }

    return 0;
}