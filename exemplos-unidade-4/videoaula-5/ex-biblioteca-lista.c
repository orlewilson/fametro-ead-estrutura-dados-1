/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Biblioteca de Fila
*/

#include <stdio.h>
#include "lista.h"

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