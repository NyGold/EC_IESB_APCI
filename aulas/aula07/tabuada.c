#include <stdio.h>

#define VALOR_MINIMO 1
#define VALOR_MAXIMO 100

int main(void)
{
  int numero, numero_limite, deu_certo;

  do 
  {
    printf("entre com um numero entre (%i a %i): ", VALOR_MINIMO, VALOR_MAXIMO);
    deu_certo = scanf("%i", &numero);
    
    // verificação de entradas
    if (!deu_certo) 
    {
      printf("\x1b[31mValor invalido. Tente novamente!\x1b[0m\n"); 
      deu_certo = 0;
      continue;
    }
    if (numero < VALOR_MINIMO || numero > VALOR_MAXIMO) 
    {
      printf("\x1b[31mValor invalido. Tente novamente!\x1b[0m\n");
      deu_certo = 0;
      continue;
    }

    do
      {
        printf("entre com o numero limite (%i a %i): ", VALOR_MINIMO, VALOR_MAXIMO);
        deu_certo = scanf("%i", &numero_limite);

        // verificações de entradas
        if (!deu_certo) 
        {
          printf("\x1b[31m2Valor limite invalido. Tente novamente!\x1b[0m\n"); 
          deu_certo = 0;
          continue;
        }
        if (numero_limite < VALOR_MINIMO || numero_limite > VALOR_MAXIMO) 
        {
          printf("\x1b[31mValor limite invalido. Tente novamente!\x1b[0m\n");
          deu_certo = 0;
          continue;
        }
      } while (!deu_certo);

  } while (!deu_certo);

  printf("tabuada do %i\n", numero);
  for (int i = 0; i <= numero_limite; i++)
    {
      printf("%i x %i = %i\n", numero, i, numero * i);
    }
}