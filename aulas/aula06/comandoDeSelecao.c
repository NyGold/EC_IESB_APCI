// algoritmo para avaliação do Uber

#include <stdio.h>

int main(void)
{
  int nota_uber;
  do
  {
    printf("De sua nota para o seu Uber (0 a 5): ");
    int deu_certo = scanf("%i", &nota_uber);      
  } while (nota_uber < 0 || nota_uber > 5);

  printf("nota do uber: ");
  switch (nota_uber)
    {
      case 0:
        printf("nenhuma estrela\n");
        break;
      case 1:
        printf("★\n");
        break;
      case 2:
        printf("★ ★\n");
        break;
      case 3:
        printf("★ ★ ★\n");
        break;
      case 4:
        printf("★ ★ ★ ★\n");
        break;
      case 5:
        printf("★ ★ ★ ★ ★\n");
        break;
      default:
        printf("coloque uma nota valida\n");
    }
}
