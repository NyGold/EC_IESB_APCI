// 5. Faça um programa em C que leia o peso e a altura de uma pessoa 
// e calcule o índice de massa corporal 
// (imc = peso / altura²).

#include <stdio.h>
#include <math.h>

int main(void)
{
  float peso, altura, imc;
  printf("peso(KG): ");
  int para_de_me_dar_warning = scanf("%f", &peso);
  printf("altura(Metros): ");
  para_de_me_dar_warning = scanf("%f", &altura);

  imc = peso / pow(altura, 2);

  printf("\aIMC: %.2f\n", imc);
}