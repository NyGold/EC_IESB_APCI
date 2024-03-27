// 9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.

#include <stdio.h>

int main(void)
{
  int anos, meses, dias, total_de_dias;
  
  printf("coloque os anos: ");
  int deu_certo = scanf(" %d", &anos);

  printf("coloque os meses: ");
  deu_certo = scanf(" %d", &meses);

  printf("coloque os dias: ");
  deu_certo = scanf(" %d", &dias);

  total_de_dias = (anos * 365) + (meses * 30) + dias;
  printf("total de dias: %d\n", total_de_dias);
}