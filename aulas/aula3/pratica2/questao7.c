/*

*/

#include <stdio.h>

int main(void)
{
  float valor_horas_trabalhadas = 0;
  float total_horas_trabalhadas = 0;
  float salario_bruto = 0;
  float salario_liquido = 0;
  const float imposto_renda = 0.25;
  const float inss = 0.11;

  printf("valor da hora trabalhada: ");
  scanf("%f", &valor_horas_trabalhadas);
  printf("total de horas trabalhadas: ");
  scanf("%f", &total_horas_trabalhadas);
  
  salario_bruto = valor_horas_trabalhadas * total_horas_trabalhadas;

  float valor_imposto_renda = imposto_renda * salario_bruto;
  float valor_inss = inss * salario_bruto;

  salario_liquido = salario_bruto - valor_imposto_renda - valor_inss;

  printf("\x1b[32m------------------------------------\n");
  printf("      C O N T R A  C H E Q U E      \n");
  printf("------------------------------------\x1b[0m\n");
  printf("Salario bruto..............%-13.2f\n", salario_bruto);
  printf("Imposto de renda............%-13.2f\n", valor_imposto_renda);
  printf("INSS........................%-13.2f\n", valor_inss);
  printf("Salario liquido.............\x1b[31m%-13.2f\x1b[0m\n", salario_liquido);
}