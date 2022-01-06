/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Arquivo Sequencial (leitura de arquivo)
*/

#include <stdio.h>

int main()
{
    // Definição do ponteiro para o arquivo
    FILE *ptr_arq;

    // Abre o arquivo
    ptr_arq = fopen("ex-arquivo-sequencial.txt", "r");

    // Ler linha por linha armazenadas no arquivo, máximo de 256 bytes
    const unsigned MAX_LENGTH = 256;
    char palavra_a_ser_lida[MAX_LENGTH];

    while (fgets(palavra_a_ser_lida, MAX_LENGTH, ptr_arq))
        printf("%s", palavra_a_ser_lida);

    // Fecha o arquivo
    fclose(ptr_arq);

    return 0;
}
