// 8. Faça um programa em C que converta um tempo expresso 
// em segundos para um valor em horas, minutos e segundos 
// (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos)

#include <stdio.h>

int main(void)
{
  int segundos, horas, minutos;
  
  printf("Digite o tempo em segundos: ");
  scanf("%d", &segundos);
  
  horas = segundos / 3600;
  minutos = (segundos % 3600) / 60;
  segundos = (segundos % 3600) % 60;

  printf("horas: %i\n", horas);
  printf("minutos: %i\n", minutos);
  printf("segundos: %i\n", segundos);
}