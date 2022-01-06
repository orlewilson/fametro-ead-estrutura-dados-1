/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Biblioteca de Fila
*/

#include <stdio.h>
#include "fila.h"

int main()
{
  TipoFila doc;
  int a;

  cria_fila(&doc);
  inserir_fila(&doc, 10);
  inserir_fila(&doc, 2);
  inserir_fila(&doc, 3);
  inserir_fila(&doc, 4);
  inserir_fila(&doc, 5);
  inserir_fila(&doc, 5);

  // Imprime a Fila
  printf("Imprimindo elementos da Fila \n");
  imprime_fila(&doc);

  // Remove da Fila
  printf("\nRemovendo elemento da Fila \n");
  while (!fila_vazia(&doc))
  {
    remover_fila(&doc, &a);
    printf("Removido: %d\n", a);
  }
  return 0;
}