/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de conjuntos
*/

#include <stdio.h>
#include <string.h> // funções para manipular strings

int main()
{
    // estrutura Produto
    typedef struct {
        int codigo;
        char nome[50];
        float valor;
    } Produto;
    
    // declarando variável do tipo Produto
    Produto sacola_feira[5];

    sacola_feira[0].codigo = 1;
    strcpy(sacola_feira[0].nome, "Banana"); // conj. caracteres não é assinalável
    sacola_feira[0].valor = 5.00;

    sacola_feira[1].codigo = 2;
    strcpy(sacola_feira[1].nome, "Pera");
    sacola_feira[1].valor = 8.56;

    float somaProdutos = 0.0;
    for (int cont=0; cont<2; cont++){
        printf("Produto %d: {%d, %s, R$ %2.2f} \n", 
            cont, sacola_feira[cont].codigo, sacola_feira[cont].nome, sacola_feira[cont].valor);
        somaProdutos += sacola_feira[cont].valor;
    }

    printf("Valor total dos produtos contidos na sacola: R$ %2.2f \n", somaProdutos); 

    return 0;
}