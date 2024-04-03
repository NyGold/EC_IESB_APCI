// 9. Faça um programa em C que leia um número inteiro e 
// imprima o caractere correspondente na tabela ASCII.

#include <stdio.h>

int main(void)
{
  int numero;
  
  // conseguir caractere do input
  printf("Digite um númer de 33 a 126: ");
  scanf("%d", &numero);
  
  // imprimir caractere
  printf("Caractere: %c\n", numero);
}