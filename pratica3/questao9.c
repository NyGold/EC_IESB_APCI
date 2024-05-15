// faça um programa que leia núemros inteiros até ler zero, 
// e imprima o maior e o menor entre eles

#include <stdio.h>

int main(void) {
  int numero, numero_maior = 0, numero_menor = 0, deu_certo;

  do {
    printf("digite um numero: ");
    deu_certo = scanf("%d", &numero);

    if (!deu_certo) {
      printf("\x1b[31mvalor invalido. Tente novamente!\x1b[0m\n");
      deu_certo = 0;
    }
  } while (!deu_certo);

  for (int i = numero; i >= 0; i--) {
    if (i > numero_maior) {
      numero_maior = i;
    } else if (i < numero_menor) {
      numero_menor = i;
    }
  }

  printf("O maior numero é: \x1b[31m%i\x1b[0m e o menor numero foi: \x1b[31m%i\x1b[0m\n", numero_maior, numero_menor);
}