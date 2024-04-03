// 4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros 
// e calcule a sua área em hectares (1 hectare = 10.000 m²).

#include <stdio.h>
#include <math.h>

int main(void)
{
  float area_hectares, largura, comprimento;

  printf("L: ");
  int para_de_me_dar_warning = scanf("%f", &largura);
  printf("C: ");
  para_de_me_dar_warning = scanf("%f", &comprimento);

  area_hectares = (largura * comprimento) / 10000;

  printf("\aA área do terreno em hectares é: %.2f\n", area_hectares);
}