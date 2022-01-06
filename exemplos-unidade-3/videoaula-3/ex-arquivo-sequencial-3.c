/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Arquivo Sequencial (pesquisa de arquivo)
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // Definição do ponteiro para o arquivo
    FILE *ptr_arq;

    // Abre o arquivo
    ptr_arq = fopen("ex-arquivo-sequencial.txt", "r");

    // Ler linha por linha armazenadas no arquivo, máximo de 256 bytes
    const unsigned MAX_LENGTH = 256;
    char palavra_lida[MAX_LENGTH];
    char palavra_a_ser_pesquisada[MAX_LENGTH];

    printf("Escreva uma palavra para ser pesquisada: ");
    fgets(palavra_a_ser_pesquisada, MAX_LENGTH, stdin);

    int palavra_encontrada = 0;

    while (fgets(palavra_lida, MAX_LENGTH, ptr_arq))
    {

        if (strcmp(palavra_lida, palavra_a_ser_pesquisada) == 0)
        {
            palavra_encontrada = 1;
            break;
        }
    }

    if (palavra_encontrada)
    {
        printf("Palavra encontrada no arquivo: %s", palavra_a_ser_pesquisada);
    }
    else
    {
        printf("Palavra nao encontrada no arquivo: %s", palavra_a_ser_pesquisada);
    }

    // Fecha o arquivo
    fclose(ptr_arq);

    return 0;
}
