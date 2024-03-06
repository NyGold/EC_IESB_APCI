#include <stdio.h>

int main(void)
{
  float raio = 0;
  printf("coloque o tamanho da sua pizza: ");
  scanf("%f", &raio);
  float area = 3.14 * raio * raio;

  printf("%f\n", area);
}