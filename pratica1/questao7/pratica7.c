// 7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido 
// uma certa distância (seno(ângulo) = altura/distância). 
// Considere o ângulo de inclinação do avião menor ou igual a 45°.
#include <stdio.h>
#include <math.h>

#define pi 3.1416

int main(void)
{
  int distancia = 0;
  int altura = 0;
  int angulo = 0;

  printf("distância que o avião alcançou:(metros) ");
  scanf("%i", &distancia);
  printf("angulo de inclinação do avião: ");
  scanf("%i", &angulo);

  if(angulo > 45)
  {
    printf("angulo muito alto para o avião\n");
    return 0;
  }

  altura = distancia * sin(angulo * pi / 180);
  printf("altura alcançada: %i metros\n", altura);
}