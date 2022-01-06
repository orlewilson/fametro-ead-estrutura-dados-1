/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de vetor multidimensional
*/

#include <stdio.h>

int main()
{
    // declaração e inicialização automática de vetor
    char jogo_velha[3][3] = {
        {'X', ' ', 'O'}, // linha 1
        {' ', 'X', ' '}, // linha 2
        {' ', ' ', 'O'}, // linha 3
    };

    // leitura de valor no vetor
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("%c ", jogo_velha[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
