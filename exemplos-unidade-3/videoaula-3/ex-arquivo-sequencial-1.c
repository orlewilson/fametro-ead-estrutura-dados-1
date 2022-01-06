/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Arquivo Sequencial (escrita em arquivo)
*/

#include <stdio.h>

int main()
{
    // Definição do ponteiro para o arquivo
    FILE *ptr_arq;

    char palavra_a_ser_salva[20];

    // Abre o arquivo
    ptr_arq = fopen("ex-arquivo-sequencial.txt", "a");

    // Ler conteúdo a partir do teclado
    printf("Escreva algum texto de até 20 caracteres: ");
    fgets(palavra_a_ser_salva, 20, stdin);

    // Grava no arquivo a string
    fputs(palavra_a_ser_salva, ptr_arq);

    // Fecha o arquivo
    fclose(ptr_arq);

    return 0;
}