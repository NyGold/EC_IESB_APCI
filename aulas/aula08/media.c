#include <stdio.h>
#include <stdlib.h>

#define QNT_NOTAS 10

int main() {
  int deu_certo = system("clear");
  int notas[QNT_NOTAS];
  int soma = 0;

  for (int i = 0; i < QNT_NOTAS; i++) {
    do {
      printf("Digite a %io nota: ", i + 1);
      deu_certo = scanf("%i", &notas[i]);
      
      if (!deu_certo) {
        printf("\x1b[31mValor invalido! Tente novamente!\x1b[0m\n");
        getchar();
      }
    } while (!deu_certo);
  }

  for(int i = 0; i < QNT_NOTAS; i++) {
    soma += notas[i];
  }

  int media = soma / QNT_NOTAS;

  printf("A media das notas eh: %i\n", media);
  
  return 0;
}