//Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes)
#include <stdio.h>
#include <math.h>

int main(void)
{
  double gigabytes = 0;

  printf("valor em gigabytes: ");
  scanf("%lf", &gigabytes);

  double bytes = gigabytes * pow(1024, 3);

  printf("valor em bytes: %lf\n", bytes);
}