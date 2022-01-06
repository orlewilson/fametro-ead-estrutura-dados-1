/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de vetor com carga inicial automática
*/

#include <stdio.h>

int main()
{
    // declaração e inicialização automática de vetor
    char vogal[5] = {'a', 'e', 'i', 'o', 'u'};

    // leitura de valor no vetor
    for (int cont = 0; cont < 5; cont++)
    {
        printf("[%d] = %c \n", cont, vogal[cont]);
    }

    return 0;
}