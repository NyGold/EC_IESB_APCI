#include <stdio.h>

int main(void)
{
  int numero, numero_limite, deu_certo;

  do 
  {
    printf("entre com um numero entre 1 e 10: ");
    deu_certo = scanf("%i", &numero);
    
    // verificação de entradas
    if (!deu_certo) 
    {
      printf("\x1b[31mValor invalido. Tente novamente!\x1b[0m\n"); 
      deu_certo = 0;
      continue;
    }
    if (numero < 1 || numero > 10) 
    {
      printf("\x1b[31mValor invalido. Tente novamente!\x1b[0m\n");
      deu_certo = 0;
      continue;
    }

    do
      {
        printf("entre com o numero limite: ");
        deu_certo = scanf("%i", &numero_limite);

        // verificações de entradas
        if (!deu_certo) 
        {
          printf("\x1b[0m Valor limite invalido. Tente novamente!\x1b[0m\n"); 
          deu_certo = 0;
          continue;
        }
        if (numero_limite < 1 || numero_limite > 10) 
        {
          printf("\x1b[0mValor limite invalido. Tente novamente!\x1b[0m\n");
          deu_certo = 0;
          continue;
        }
      } while (!deu_certo);
  } while (!deu_certo);
    
  printf("tabuada do %i", numero);
  for (int i = 0; i <= numero_limite; i++)
    {
      printf("%i x %i = %i\n", numero, i, numero * i);
    }
}