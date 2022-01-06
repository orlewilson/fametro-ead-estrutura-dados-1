/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
	Facilitador:    Orlewilson B. Maia
	Descrição:      Exemplo de Biblioteca de Pilha
*/

#ifndef _PILHA_H
#define _PILHA_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct No
{
	int valor;
	struct No *prox;
};

typedef struct No TipoNo;

struct Pilha
{
	TipoNo *topo;
	int tamanho;
};

typedef struct Pilha TipoPilha;

void IniciaPilha(TipoPilha *pilha);

int Vazia(TipoPilha *pilha);

void Empilha(int x, TipoPilha *pilha);

int Desempilha(TipoPilha *pilha);

#endif