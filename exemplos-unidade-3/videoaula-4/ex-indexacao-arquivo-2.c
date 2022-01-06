/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Indexação de Arquivo (busca)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void pesquisarTituloArquivoSequencial(char *titulo)
{
    // Definição do ponteiro para o arquivo
    FILE *ptr_arq;

    // Abre o arquivo
    ptr_arq = fopen("filmes.txt", "r");

    // Ler linha por linha armazenadas no arquivo, máximo de 256 bytes
    const unsigned MAX_LENGTH = 256;
    char linha[MAX_LENGTH];

    int palavra_encontrada = 0;

    while (fgets(linha, MAX_LENGTH, ptr_arq))
    {

        if (strstr(linha, titulo))
        {
            palavra_encontrada = 1;
            break;
        }
    }

    if (palavra_encontrada)
    {
        printf("Registro encontrado: %s", linha);
    }
    else
    {
        printf("Registro nao encontrado para o titulo: %s", titulo);
    }

    // Fecha o arquivo
    fclose(ptr_arq);
}

int hashIndice(char *tituloFilme)
{
    int tamanho, primeiroCaracter, ultimoCaracter;

    tamanho = strlen(tituloFilme);
    primeiroCaracter = tituloFilme[0];
    ultimoCaracter = tituloFilme[tamanho - 1];

    int resultado = ((tamanho * primeiroCaracter) + ultimoCaracter);
    return resultado;
}

void pesquisarTituloArquivoIndexado(char *titulo)
{
    // Definição do ponteiro para o arquivo
    FILE *ptr_arq;

    // Abre o arquivo
    ptr_arq = fopen("filmes-indexados.txt", "r");

    // Ler linha por linha armazenadas no arquivo, máximo de 256 bytes
    const unsigned MAX_LENGTH = 256;
    char linha[MAX_LENGTH];

    int palavra_encontrada = 0;

    int cont = 1;
    int indice = hashIndice(titulo);

    while (fgets(linha, MAX_LENGTH, ptr_arq))
    {

        if (cont == indice + 1)
        {
            palavra_encontrada = 1;
            break;
        }
        cont++;
    }

    if (palavra_encontrada)
    {
        printf("Registro encontrado: %s", linha);
    }
    else
    {
        printf("Registro nao encontrado para o titulo: %s", titulo);
    }

    // Fecha o arquivo
    fclose(ptr_arq);
}

int main()
{

    clock_t start_t, end_t, total_t;

    printf("===== pesquisarTituloArquivoSequencial =====\n");
    start_t = clock();
    pesquisarTituloArquivoSequencial("Easy Rider");
    end_t = clock();

    total_t = (end_t - start_t) / (CLOCKS_PER_SEC / 1000);

    printf("Tempo execucao: %d\n", total_t);
    printf("===== =====\n\n");

    printf("===== pesquisarTituloArquivoIndexado =====\n");
    start_t = clock();
    pesquisarTituloArquivoIndexado("Easy Rider");
    end_t = clock();

    total_t = (end_t - start_t) / (CLOCKS_PER_SEC / 1000);

    printf("Tempo execucao: %d\n", total_t);
    printf("===== =====\n");

    return 0;
}
