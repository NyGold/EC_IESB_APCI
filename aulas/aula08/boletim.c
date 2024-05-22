#include <stdio.h>
#include <stdlib.h>

// número de linhas
#define L 10
// número de colunas
#define C 3

int main() {
  float boletim[L][C];
  int deu_certo;

  for (int i = 0; i < L; i++) { // imprime a linha
    for (int j = 0; j < 2; j++) { // imprime a coluna
      printf("entre com a %ia nota do %io aluno: ", j + 1, i + 1);
      deu_certo = scanf("%f", &boletim[i][j]);
    }
    boletim[i][2] = 0.4f * boletim[i][0] + 0.6f * boletim[i][1];
  }

  printf("nota1 nota2 media\n");
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      printf("%-2.2f", boletim[i][j]);
    }
    printf("\n");
  }
  return 0;
}