// 10. Faça um programa em C que leia um número inteiro e 
// imprima a tabuada de multiplicação.

#include <stdio.h>

int main(void)
{
  int numero;

  // extrair o numero do input
  printf("Digite um número: ");
  scanf("%d", &numero);

  printf("#-------------TABUADA do %d-------------#\n", numero);
  
  // imprimir a tabuada de multiplicação
  for(int i = 0; i <= 10; i++)
    {
      printf("\t\t\t\t%d x %d = %d\n", numero, i, numero * i);
    }
  printf("#--------------------------------------#\n");
}