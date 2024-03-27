#include <stdio.h>
#include <math.h>

int main(void)
{
  int numero_1, numero_2;
  const double pi = 3.1416;
  
  printf("entre o primeiro número: ");
  scanf("%d", &numero_1);

  printf("entre o segundo número: ");
  scanf("%d", &numero_2);

  int soma = numero_1 + numero_2;
  printf("somando: %i\n", soma);

  int subtracao = numero_1 - numero_2;
  printf("subtraindo: %i\n", subtracao);

  int multiplicacao = numero_1 * numero_2;
  printf("multiplicando: %i\n", multiplicacao);

  if (numero_2 == 0)
  {
    printf("não é possível dividir por zero\n");
  }
  
  float divisao = (float) numero_1 / (float) numero_2;
  printf("dividindo: %0.2f\n", divisao);

  int resto = numero_1 % numero_2;
  printf("resto: %i\n", resto);
/*
  printf("o incremento do primeiro número é: %i\n", numero_1++);
  printf("o incremento do primeiro número é: %i\n", ++numero_1);

  printf("o decremento do primeiro número é: %i\n", numero_1--);
  printf("o decremento do primeiro número é: %i\n", --numero_1);
*/

  double raiz_quadrada = sqrt(numero_1);
  printf("a raiz quadrada do primeiro número é: %0.2f\n", raiz_quadrada);

  double potencia = pow(numero_1, 4);
  printf("o primeiro número elevado a 4 é: %0.2f\n", potencia);

  double logaritmo2 = log2(numero_1);
  printf("o logaritmo de 2 do primeiro número é: %0.2f\n", logaritmo2);

  double seno = sin(numero_1 * pi/180);
  printf("o seno do primeiro número é: %f\n", seno);

}