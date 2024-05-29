#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
  char verbo[21];
  char radical[21];
  char pronomes[6][5] = {"EU", "TU", "ELE", "NOS", "VOS", "ELES"};
  char sufixos[6][5] = {"O", "AS", "A", "AMOS", "AIS", "AM"};
  
  int deu_certo = system("clear");
  printf("Coloque um verbo terminado em AR: ");
  deu_certo = scanf("%s", verbo);
  
  int tamanho = strlen(verbo);
  int ultima_posicao = tamanho - 1;
  int penultima_posicao = tamanho - 2;

  for  (int i = 0; i < tamanho; i++) {
    verbo[i] = toupper(verbo[i]); // converte para maisculo
  }
  
  if (verbo[ultima_posicao] == 'R' && verbo[penultima_posicao] == 'A') {
    printf("O verbo termina em AR!\n");
    
    strcpy(radical, verbo);
    radical[penultima_posicao] = '\0';

    for (int i = 0; i < 6; i++) {
      printf("%s %s%s\n", pronomes[i], radical, sufixos[i]);
    }
  } else {
    printf("O verbo nao termina em AR!\n");    
  }
  return 0;
}