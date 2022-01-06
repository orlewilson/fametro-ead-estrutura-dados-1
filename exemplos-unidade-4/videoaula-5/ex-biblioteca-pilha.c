/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Biblioteca de Fila
*/

#include <stdio.h>

/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Pilha
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pilha.h"

int main()
{
    int i, numero, max = 5;

    TipoPilha *pilha;
    pilha = (TipoPilha *)malloc(sizeof(TipoPilha));
    IniciaPilha(pilha);

    for (i = 0; i < max; i++)
    {
        printf("Leitura do valor (%d) :", i);
        scanf("%d", &numero);
        Empilha(numero, pilha);
        printf("Empilhou: %d \n", numero);
    }

    for (i = 0; i < max; i++)
    {
        numero = Desempilha(pilha);
        printf("Desempilhou: %d \n", numero);
    }
    return 0;
}
