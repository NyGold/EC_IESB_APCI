// 9. Faça um programa em C que leia um número inteiro e
// imprima o caractere correspondente na tabela ASCII.

#include <stdio.h>

int main(void) {
  int caractere;

  // conseguir caractere do input
  if (caractere < 33 || caractere > 126) {
    printf("coloque um caractere valido\n");
    return 0;
  }
  printf("Digite um númer de 33 a 126: ");
  scanf("%d", &caractere);

  // imprimir caractere
  printf("Caractere: %c\n", caractere);
}