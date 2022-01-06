/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Operações em Arquivos
*/

#include <stdio.h>

int main()
{
    // Definição do ponteiro para o arquivo
    FILE *ptr_arq; 
    
    // Abre o arquivo
    ptr_arq = fopen("arqtxt001.txt","a");

    // Comandos para manipulação de arquivo
    // ...

    // Fecha o arquivo
    fclose(ptr_arq);
    
    return 0;
}