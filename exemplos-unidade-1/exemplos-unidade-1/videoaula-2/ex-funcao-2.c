/*  Disciplina:     Estrutura de Dados 1 - EAD Fametro
    Facilitador:    Orlewilson B. Maia
    Descrição:      Exemplo de função com passagem de parâmetro
*/

#include <stdio.h>

void verificaNumero(int num){
    // % - é o resto da divisão    
    if (num % 2 == 0){ printf("%d é par\n", num);} 
    else { printf("%d é impar\n", num); }
}

int main()
{
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor); // para ler dados do console
    verificaNumero(valor);

    return 0;
}