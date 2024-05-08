#include <stdio.h>

int main(void)
{
  float nota1, nota2, media;

  printf("digite a primeira nota: ");
  int deuCerto = scanf("%f", &nota1);

  int nota1_deu_certo = nota1 >= 0.0f && nota1 <= 10.0f;

  // verificar se a nota 1 esta valida
  if (!nota1_deu_certo)
  {
    printf("primeira nota invalida. Coloque uma nota valida (0 a 10)\n");
    return 0;
  }

  printf("digite a segunda nota: ");
  deuCerto = scanf("%f", &nota2);

  int nota2_deu_certo = nota2 >= 0.0f && nota2 <= 10.0f;

  // verificar se a nota 2 esta valida
  if (!nota2_deu_certo)
  {
    printf("segunda nota invalida. Coloque uma nota valida (0 a 10)\n");
    return 0;
  }

  // media segundo o IESB
  media = (float)(0.4 * nota1 + 0.6 * nota2);

  // verificar as menções

  if (media >= 9.0f && media <= 10.0f) 
  {
    printf("menção SS\n");
  } 
  else if (media >= 7.0f && media <= 8.9f)
  {
    printf("menção MS\n");
  } 
  else if (media >= 5.0f && media <= 6.9f)
  {
    printf("menção MM\n");
  } 
  else if (media >= 3.0f && media <= 4.9f)
  {
    printf("menção MI\n");
  } 
  else if (media >= 0.1f && media <= 2.9f)
  {
    printf("menção II\n");
  } 
  else if (media >= 0.0f && media <= 0.9f)
  {
    printf("menção SR\n");
  }
  
  printf("media: %.1f\n", media);
}