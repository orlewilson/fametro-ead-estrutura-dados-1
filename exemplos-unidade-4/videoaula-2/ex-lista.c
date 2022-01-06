/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Lista
*/

#include <stdio.h>
#include <stdlib.h>

// Estrutura do Nó
struct estrutura_no
{
   int info;
   struct estrutura_no *prox;
};

typedef struct estrutura_no Lista;

// retorna uma lista vazia
Lista *lst_cria(void)
{
   return NULL;
}

// insere um novo elemento no começo da lista
Lista *lst_insere(Lista *l, int i)
{
   Lista *novo = (Lista *)malloc(sizeof(Lista));

   novo->info = i;
   novo->prox = l;

   return novo;
}

// imprime valores dos elementos
void lst_imprime(Lista *l)
{

   Lista *p; // Variável auxiliar para percorrer a lista

   for (p = l; p != NULL; p = p->prox)
   {
      if (p->prox == NULL)
      {
         printf("%d", p->info);
      }
      else
      {
         printf("%d -> ", p->info);
      }
   }
}

// retorna 1 se vazia e 0 se não vazia
int lst_vazia(Lista *l)
{
   if (l == NULL)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}

// busca um elemento na lista
Lista *lst_busca(Lista *l, int num)
{

   Lista *p;
   for (p = l; p != NULL; p = p->prox)
   {
      if (p->info == num)
      {
         return p;
      }
   }
   return NULL; // não achou o elemento
}

// retira um elemento da lista
Lista *lst_retira(Lista *l, int num)
{

   Lista *ant = NULL; // ponteiro para o elemento anterior
   Lista *p = l;      // ponteiro para percorrer a lista

   // procura elemento na lista, guardando o anterior
   while (p != NULL && p->info != num)
   {
      ant = p;
      p = p->prox;
   }

   // Verifica se achou o elemento
   if (p == NULL)
   {
      return l; // n�ao achou: retorna a lista original
   }

   // Retira o elemento
   if (ant == NULL)
   {
      // retira o elemento do inicio
      l = p->prox;
   }
   else
   {
      // retira o elemento do meio da lista
      ant->prox = p->prox;
   }

   free(p); // libera o ponteiro da memória
   return l;
}

// retorna o tamanho da lista
int lst_comprimento(Lista *l)
{

   Lista *p;
   int cont = 0;

   for (p = l; p != NULL; p = p->prox)
   {
      cont = cont + 1;
   }

   return cont;
}

// Função principal
int main(void)
{
   Lista *l1; // declara uma lista não inicializada

   l1 = lst_cria();         // cria e inicializa lista como vazia
   l1 = lst_insere(l1, 23); // insere na lista o elemento 23
   l1 = lst_insere(l1, 45); // insere na lista o elemento 45
   l1 = lst_insere(l1, 55); // insere na lista o elemento 55

   lst_imprime(l1);
   printf("\nTamanho da lista: %d", lst_comprimento(l1));

   return 0;
}
