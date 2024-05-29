#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define QNT_PRODUTO 3

int main() {
  int deu_certo = system("clear");
  
  struct produto_t {
    char nome[31];
    float preco; 
    int quantidade;
    float valor;
    int unidade; // 0 = un, 1 = cx, 2 = lt, 3 = ps
  };

  enum unidade_e {
    unidade,
    caixa,
    lata,
    peso
  };

  struct produto_t produto[QNT_PRODUTO];

  for (int i = 0; i < QNT_PRODUTO; i++) {
    printf("Coloque o nome do produto: ");
    deu_certo = scanf("%[^\n]s", produto[i].nome);
    while(getchar() != '\n');

    printf("Coloque a quantidade do produto: ");
    deu_certo = scanf("%i", &produto[i].quantidade);
    while(getchar() != '\n');

    printf("Coloque o preço do produto: ");
    deu_certo = scanf("%f", &produto[i].preco);
    while(getchar() != '\n');

    do {
      printf("Coloque a unidade do produto: \n(0 = un, 1 = cx, 2 = lt, 3 = ps) ");
      deu_certo = scanf("%i", &produto[i].unidade);
    } while ((produto[i].unidade < 0 || produto[i].unidade > 3) || !(deu_certo));

    produto[i].valor = produto[i].preco * produto[i].quantidade;

    while(getchar() != '\n');
  }

  printf("\n-----------N O T A  L E G A L-----------\n");
  printf("item             Qtd Und   Preco  Valor\n");
  
  for (int i = 0; i < QNT_PRODUTO; i++) {
    printf("%-16s %03i", produto[i].nome, produto[i].quantidade);

    switch (produto[i].unidade) {
      case unidade: {
        printf(" UN"); // unidade
        break;
      }
      case caixa: {
        printf(" CX"); // caixa
        break;
      }
      case lata: {
        printf(" LT"); // lata
        break;
      }
      case peso: {
        printf(" KG"); // kilograma
        break;
      }
      default: {
        printf("\x1b[31m --\x1b[0m");
      }
    }

    printf("%8.2f%9.2f\n", produto[i].preco, produto[i].valor);
  }

  return 0;
}