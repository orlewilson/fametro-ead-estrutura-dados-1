/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Biblioteca de Lista
*/

#ifndef _LISTA_H
#define _LISTA_H

// Estrutura do Nó
struct estrutura_no
{
    int info;
    struct estrutura_no *prox;
};

typedef struct estrutura_no Lista;

// retorna uma lista vazia
Lista *lst_cria(void);

// insere um novo elemento no começo da lista
Lista *lst_insere(Lista *l, int i);

// imprime valores dos elementos
void lst_imprime(Lista *l);

// retorna 1 se vazia e 0 se não vazia
int lst_vazia(Lista *l);

// busca um elemento na lista
Lista *lst_busca(Lista *l, int num);

// retira um elemento da lista
Lista *lst_retira(Lista *l, int num);

// retorna o tamanho da lista
int lst_comprimento(Lista *l);

#endif