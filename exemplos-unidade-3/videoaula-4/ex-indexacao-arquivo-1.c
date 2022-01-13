/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
	Facilitador:    Orlewilson B. Maia
	Descrição:      Exemplo de Indexação de Arquivo (geração)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void criarArquivoIndexadoVazio(int qtdRegistros)
{
	FILE *fp;
	
	// apaga o arquivo indexado
	remove("filmes-indexados.txt");
	
	// cria um novo arquivo indexado
	fp = fopen("filmes-indexados.txt", "a+");

	for (int cont = 0; cont < qtdRegistros; cont++)
	{
		fputs("\n", fp);
	}
	fclose(fp);
}

void adicionarFilmeIndexado(char *titulo, char *registro)
{
	FILE *filmesIndexados, *temporario;

	filmesIndexados = fopen("filmes-indexados.txt", "r");
	temporario = fopen("replace.tmp", "w");

	int numeroLinha = hashIndice(titulo);

	int cont = 0;
	char linha[256];

	while (fgets(linha, sizeof linha, filmesIndexados) != NULL)
	{
		if (cont == numeroLinha)
		{
			fputs(registro, temporario);
		}
		else
		{
			fputs(linha, temporario);
		}
		cont++;
	}

	fclose(filmesIndexados);
	fclose(temporario);

	// apaga o arquivo original
	remove("filmes-indexados.txt");

	// renomeia o arquivo temporário para o arquivo original
	rename("replace.tmp", "filmes-indexados.txt");
}

void indexarFilmes(int qtdFilmes)
{
	FILE *filmes;

	filmes = fopen("filmes.txt", "r");

	char linha[256];

	char titulo[300];
	int cont = 0;
	while (fgets(linha, sizeof linha, filmes) != NULL)
	{
		char *temp = strchr(linha, ';');
		int tamanho = strlen(linha) - strlen(temp);

		strncpy(titulo, linha, tamanho);

		printf("%s\n", titulo);
		adicionarFilmeIndexado(titulo, linha);

		strncpy(titulo, "", 300);

		cont++;

		printf("%d\n", cont);

		if (cont == qtdFilmes)
			break;
	}
}

int main()
{

	criarArquivoIndexadoVazio(50000);

	indexarFilmes(10000);

	return 0;
}
