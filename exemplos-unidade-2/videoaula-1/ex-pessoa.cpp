/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de representação dados de uma pessoa
                    em linguagem orientada a objetos
*/
#include <stdio.h>

class Pessoa
{
private:
    char *nome;
    int idade;

public:
    void setNome(char *nome) { this->nome = nome; }
    void setIdade(int idade) { this->idade = idade; }

    char *getNome() { return this->nome; }
    int getIdade() { return this->idade; }
};

int main()
{

    Pessoa joao;

    joao.setNome("Joao da Silva");
    joao.setIdade(30);

    printf("Nome: %s \n", joao.getNome());
    printf("Idade: %d \n", joao.getIdade());

    return 0;
}