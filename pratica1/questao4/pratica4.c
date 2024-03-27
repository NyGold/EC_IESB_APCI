/*
4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/

#include <stdio.h>

int main(void)
{
  float pInicial = 0;
  const float ICMS = 0.17;
  const float COFINS = 0.076;
  const float PIS_PASEP = 0.0165;
  float pFinal = 0;

  printf("preço inicial do produto: ");
  scanf("%f", &pInicial);

  float valor_imposto_icms = ICMS * pInicial;
  float valor_imposto_cofins = COFINS * pInicial;
  float valor_imposto_pispasep = PIS_PASEP * pInicial;
  
  pFinal = (1 + ICMS + COFINS + PIS_PASEP) * pInicial;

  printf("valor ICMS: %f\n", valor_imposto_icms);
  printf("valor COFINS: %f\n", valor_imposto_cofins);
  printf("valor PIS/PASEP: %f\n", valor_imposto_pispasep);
  printf("preço incial: %f\n", pInicial);
  printf("o preço final do produto vai ficar: %f\n", pFinal);
}