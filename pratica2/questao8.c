// 8. Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) 
// e calcule a distância entre eles 
// (d = raiz_quadrada((x2-x1)² + (y2-y1)²))

#include <stdio.h>
#include <math.h>

int main(void)
{
  int x1, y1, x2, y2;
  float distancia;

  printf("#-------------DISTANCIA ENTRE DOIS PONTOS-------------#\n");
  
  // pegar coordernadas do ponto 1
  printf("ponto 1:\nx: ");
  scanf("%d", &x1);
  printf("y: ");
  scanf(" %d", &y1);
  
  // pegar coodernadas do ponto 2
  printf("ponto 2:\nx: ");
  scanf("%d", &x2);
  printf("y: ");
  scanf("%d", &y2);
  
  // calcular a ditância entre eles, usando a função sqrt() da biblioteca math.h
  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1,2));

  // mostrar a distância entre os pontos
  printf("distancia entre os pontos: %.2f\n", distancia);
  printf("#--------------------------------------------------#\n");
}