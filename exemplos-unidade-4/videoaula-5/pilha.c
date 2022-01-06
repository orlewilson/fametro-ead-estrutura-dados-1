/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Biblioteca de Pilha
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pilha.h"

void IniciaPilha(TipoPilha *pilha)
{
    pilha->topo = NULL;
    pilha->tamanho = 0;
}

int Vazia(TipoPilha *pilha)
{
    return (pilha->topo == NULL);
}

void Empilha(int x, TipoPilha *pilha)
{
    TipoNo *aux;
    aux = (TipoNo *)malloc(sizeof(TipoNo));
    aux->valor = x;
    aux->prox = pilha->topo;
    pilha->topo = aux;
    pilha->tamanho++;
}

int Desempilha(TipoPilha *pilha)
{
    TipoNo *q;
    int v;

    if (Vazia(pilha))
    {
        printf("Lista vazia\n");
        return 0;
    }

    q = pilha->topo;
    pilha->topo = q->prox;
    v = q->valor;
    free(q);
    pilha->tamanho--;
    return v;
}