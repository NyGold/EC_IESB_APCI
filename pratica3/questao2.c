// 2. Faça um programa em C que calcule o valor do desconto sobre um valor bruto
// lido com base na escala: até de 100.00 aplica 1%;
// de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.

#include <stdio.h>

int main(void) {
  float valor_do_produto = 0.0f, valor_com_desconto = 0.0f;

  // leia um valor do input
  printf("coloque o valor do produto: ");
  scanf("%f", &valor_do_produto);

  // caso o valor for ate 100, da um desconto de 1%
  if (valor_do_produto <= 100.0f) 
  {
    valor_com_desconto = valor_do_produto - valor_do_produto * 0.01f;
  }
  // caso o valor for entre 101 e 500, da um desconto de 5%
  else if (valor_do_produto <= 500.0f) 
  {
    valor_com_desconto = valor_do_produto - valor_do_produto * 0.05f;
  }
  // caso o valor do produto for maior que 500, da um desconto de 10%
  else 
  {
    valor_com_desconto = valor_do_produto - valor_do_produto * 0.1f;
  }

  // imprima o valor do produto com o desconto
  printf("o valor bruto e: %.2f\n", valor_do_produto);
  printf("o valor do produto com o desconto e: %.2f\n", valor_com_desconto);
}