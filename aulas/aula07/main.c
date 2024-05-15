// programa para fazer uma piramide com asteriscos

#include <stdio.h>

int main(void) {
  int deuCerto, altura;

  do {
    printf("coloque a altura do triangulo: ");
    deuCerto = scanf("%d", &altura);

    if (!deuCerto) {
      printf("Valor Inválido");
      deuCerto = 1;
    }
  } while (!deuCerto);

  // meio triangulo orientado para a esquerda
  // for (int i = 0; i<=altura; i++){

  // }

  for (int i = 0; i <= altura; i++) {
    for (int j = altura; j > i; j--) {
      printf(" ");
    }
    for (int j = 0; j < i; j++) {
      printf("# ");
    }
    printf("\n");
  }

  printf("\n");

  for (int i = 0; i <= altura; i++) {
    for (int j = altura; j > i; j--) {
      printf(". ");
    }
    for (int j = 0; j < i; j++) {
      printf("# ");
    }

    // espaço entre os triangulos
    printf(" ");

    for (int j = 0; j < i; j++) {
      printf("# ");
    }
    printf("\n");
  }
}