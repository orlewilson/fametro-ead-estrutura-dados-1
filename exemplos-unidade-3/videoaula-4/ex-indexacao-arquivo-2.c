/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de Indexação de Arquivo (busca)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int hashIndice(char *tituloFilme)
{
	int tamanho, primeiroCaracter, ultimoCaracter;

	tamanho = strlen(tituloFilme);
	primeiroCaracter = tituloFilme[0];
	ultimoCaracter = tituloFilme[tamanho - 1];

	int resultado = (tamanho * (ultimoCaracter - primeiroCaracter + 1)) % 5000;

	// se houver valor negativo
	if (resultado < 0) resultado *= -1; 

	return resultado;
}

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

    clock_t start_t, end_t;
    double total_t;

    printf("===== pesquisarTituloArquivoSequencial =====\n");
    start_t = clock();
    pesquisarTituloArquivoSequencial("Schizopolis");
    end_t = clock();
    
    total_t = (double)(end_t - start_t) / (CLOCKS_PER_SEC);
    printf("Tempo execucao (em segundos): %f\n", total_t);
    printf("===== =====\n\n");

    printf("===== pesquisarTituloArquivoIndexado =====\n");
    start_t = clock();
    pesquisarTituloArquivoIndexado("Schizopolis");
    
    end_t = clock();

    total_t = (double)(end_t - start_t) / (CLOCKS_PER_SEC);

    printf("Tempo execucao (em segundos): %f\n", total_t);
    printf("===== =====\n");

    return 0;
}
