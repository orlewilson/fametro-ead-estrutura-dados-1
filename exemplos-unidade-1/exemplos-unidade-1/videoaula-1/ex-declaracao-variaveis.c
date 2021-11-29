/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de declaração de variáveis
*/

#include <stdio.h>

int main()
{
    // declaração de variáveis
    int a; double b; float c; char d;
    
    // atribuição de valores
    a = 10; b = 5.2; c = 3.14; d = 'o';

    // mostrar valor no console
    printf("Valor de a = %d!!!!\n\n", a);
    printf("Valor de b = %2.2f!!!!\n\n", b);
    printf("Valor de c = %2.5f!!!!\n\n", c);
    printf("Valor de d = %c!!!!\n\n", d);
    
    return 0;
}