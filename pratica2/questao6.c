// 6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação 
// e calcule o valor depreciado de um veículo.
// (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra)

#include <stdio.h>

int main(void)
{
  int ano_de_fabricacao, ano_de_depreciacao;
  float valor_de_compra, depreciacao;

  printf("valor de compra: ");
  scanf(" %f", &valor_de_compra);
  printf("ano de fabricacao: ");
  scanf(" %d", &ano_de_fabricacao);
  printf("ano de depreciacao: ");
  scanf(" %d", &ano_de_depreciacao);

  depreciacao = (ano_de_depreciacao - ano_de_fabricacao) * 0.01 * valor_de_compra;

  printf("\aDepreciacao: %.2f\n", depreciacao);
  printf("valor depois da depreciacao: %.2f\n", valor_de_compra - depreciacao);
}