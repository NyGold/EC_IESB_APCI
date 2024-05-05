// 7. Escrever um programa em C que liste os 10 primeiros números da série de
// Fibonacci.

#include <stdio.h>

int main(void) 
{
  int a = 0, b = 1, c, resultado;

  for (int i = 0; i <= 10; i++) 
  {
    c = a + b;
    a = b;
    b = c;
    printf("%i ", c);
  }
  printf("\n");
}