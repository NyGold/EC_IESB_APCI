#include <stdio.h>

int main(void) {
  int numero, numero_valido = 0;

  while (!numero_valido) {
    printf("entre com um numero: ");
    int deu_certo = scanf("%i", &numero);
    numero_valido = 1 <= numero && numero <= 10;
  
    if (!(numero_valido && deu_certo)) {
      printf("\x1b[31mnumero invalido!\x1b[0m\n");
      numero_valido = 0;
    }
  }

  printf("segue jogo...\n");
}