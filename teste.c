#include <stdio.h>

#define constantes 0

int main(void)
{
  int numeros[10];
  int i;

  printf("Coloque 10 números inteiros:\n");
  for (int i = 0; i < 10; i++)
    {
      scanf("%d", &numeros[i]);
    }
  printf("ordem inversa:\n");
  for (int i = 9; i >= 0; i--)
    {
      printf("%i ", numeros[i]);
    }
  printf("\n");
}