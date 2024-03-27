// 10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).

#include <stdio.h>

int main(void)
{
  int numero, unidade, dezena, centena, milhar;
  printf("Digite um número inteiro: ");
  scanf("%d", &numero);
  unidade = numero % 10;
  dezena = (numero % 100) / 10;
  centena = (numero % 1000) / 100;
  milhar = (numero % 10000) / 1000;
  printf("unidades: %d\ndezena: %d\ncentena: %d\nmilhar: %d\n", unidade, dezena, centena, milhar);
}