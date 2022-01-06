/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Biblioteca de Fila
*/

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

// Cria uma fila vazia
void cria_fila(TipoFila *F)
{
   F->inicio = F->final = NULL;
}

// Verifica se a fila está vazia
int fila_vazia(TipoFila *F)
{
   if (F->inicio == NULL && F->final == NULL)
      return 1;
   else
      return 0;
}

// Adiciona um novo elemento na fila
int inserir_fila(TipoFila *F, int valor)
{
   TipoNo *novo;

   novo = (TipoNo *)malloc(sizeof(TipoNo));

   // Atribuição do valor e apontando o próximo para NULL
   novo->dado = valor;
   novo->prox = NULL;

   // Se a fila estiver vazia, o novo n� sera o primeiro
   // da fila
   if (fila_vazia(F))
   {
      F->inicio = novo;
   }
   else
   {
      (F->final)->prox = novo;
   }

   // Senão, o ponteiro para o final da fila apontará
   // para o novo n�
   F->final = novo;

   return 1;
}

// remoção de elemento
int remover_fila(TipoFila *F, int *valor)
{
   TipoNo *aux;

   // Retorna o conteúdo do primeiro da fila
   primeiro_fila(F, valor);

   // Se existir somente um nó na fila, apontamos
   // o final da fila para NULL
   if (F->inicio == F->final)
   {
      F->final = NULL;
   }

   // Atribuímos o nó retornado da fila ao nó auxiliar
   aux = F->inicio;

   // O início da fila apontará para o próximo nó
   // do que estamos removendo
   F->inicio = (F->inicio)->prox;
   free(aux);
   return 1;
}

// primeiro elemento da fila
int primeiro_fila(TipoFila *F, int *dado)
{

   if (fila_vazia(F))
      return 0;

   *dado = (F->inicio)->dado;

   return 1;
}

// Imprime valores da fila
void imprime_fila(TipoFila *F)
{

   TipoNo *temp; // Variável auxiliar para percorrer a fila

   for (temp = F->inicio; temp != NULL; temp = temp->prox)
   {
      if (temp->prox == NULL)
      {
         printf("%d ", temp->dado);
      }
      else
      {
         printf("%d <- ", temp->dado);
      }
   }
   printf("\n");
}
