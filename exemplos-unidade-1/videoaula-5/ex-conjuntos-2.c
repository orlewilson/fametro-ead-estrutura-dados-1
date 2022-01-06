/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de conjuntos com inicialização
*/

#include <stdio.h>

int main()
{
    // estrutura Produto
    typedef struct
    {
        int codigo;
        char nome[50];
        float valor;
    } Produto;

    // declarando variável do tipo Produto inicializando com valores
    Produto sacola_feira[2] = {
        {1, "Banana", 5.00},
        {2, "Pera", 8.56}};

    float somaProdutos = 0.0;
    for (int cont = 0; cont < 2; cont++)
    {
        printf("Produto %d: {%d, %s, R$ %2.2f} \n",
               cont, sacola_feira[cont].codigo, sacola_feira[cont].nome, sacola_feira[cont].valor);
        somaProdutos += sacola_feira[cont].valor;
    }

    printf("Valor total dos produtos contidos na sacola: R$ %2.2f \n", somaProdutos);

    return 0;
}