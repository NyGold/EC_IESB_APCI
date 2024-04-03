// 3. Faça um programa em C que leia uma temperatura em graus Celsius e 
// calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).

#include <stdio.h>

int main(void)
{
   float celcius, fahrenheit;

  printf("coloque a temperatura em celcius: ");
  int para_de_me_dar_warning = scanf( "%f", &celcius);

  fahrenheit = (celcius * 9/5) + 32;

  printf("a temperatura em fahrenheit é: %.1f\n", fahrenheit);
}