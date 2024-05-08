#include <stdio.h>

int main(void)
{
  int opcao;

  printf("MENU PRINCIPAL\n");
  printf("1. consultar saldo\n");
  printf("2 adcionar saldo\n");
  printf("3. ver recados\n");
  printf("4. historico de ligacoes\n");
  printf("5. sair\n");

  int deu_certo = scanf("%i", &opcao);

  if (!deu_certo) 
  {
    printf("entrada invalida\n");
  }

  switch
}