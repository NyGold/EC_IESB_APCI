// 7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês 
// e calcule o salário bruto, o salário líquido, e os impostos descontados. 
// Considere IR igual a 25% e INSS igual a 11%.
#include <stdio.h>

#define IR 0.25
#define INSS 0.11

int main(void)
{
  float valor_hora_trabalho, horas_trabalhadas, salario_bruto, salario_liquido, impostos;

  printf("Valor da hora de trabalho: ");
  int para_de_me_dar_warning = scanf("%f", &valor_hora_trabalho);

  printf("Horas trabalhadas no mês: ");
  para_de_me_dar_warning = scanf("%f", &horas_trabalhadas);

  salario_bruto = valor_hora_trabalho * horas_trabalhadas;
  impostos = salario_bruto * (IR + INSS);
  salario_liquido = salario_bruto - impostos;
  
  printf("Salário bruto: %.2f\n", salario_bruto);
  printf("Salário líquido: %.2f\n", salario_liquido);
  printf("Impostos descontados: %.2f\n", impostos);
}