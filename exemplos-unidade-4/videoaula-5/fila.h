/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Biblioteca de Fila
*/

#ifndef _FILA_H
#define _FILA_H

struct No
{
    int dado;
    struct No *prox;
};

typedef struct No TipoNo;

// Criando o tipo fila
struct Fila
{
    TipoNo *inicio;
    TipoNo *final;
};

typedef struct Fila TipoFila;

// Cria uma fila vazia
void cria_fila(TipoFila *F);

// Verifica se a fila está vazia
int fila_vazia(TipoFila *F);

// Adiciona um novo elemento na fila
int inserir_fila(TipoFila *F, int valor);

// remoção de elemento
int remover_fila(TipoFila *F, int *valor);

// primeiro elemento da fila
int primeiro_fila(TipoFila *F, int *dado);

// Imprime valores da fila
void imprime_fila(TipoFila *F);

#endif