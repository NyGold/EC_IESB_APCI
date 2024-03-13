// fazer um progama que recebe um input de itens, 
// tanto quanto sua quantidade e valor, e calcula o valor total da compra
// demonstrando no console um output de uma nota fiscal com todos os itens
// junto com sua quantidade e valores
#include <stdio.h>
#define LIMITE_CITEM 50

int main(void)
{
  char item[LIMITE_CITEM];
  int quantidade = 0;
  float valor = 0;
  float total = 0;
  char continue_value = 's';

  do
  {
    printf("coloque o nome do item: ");
    fgets(item, LIMITE_CITEM, stdin);
    printf("coloque a quantidade do item: ");
    scanf("%i", &quantidade);
    printf("coloque o valor do item: ");
    scanf("%f", &valor);
    printf("Deseja colocar mais algum item? (s/n)");
    scanf("%c", &continue_value);
  } while(continue_value == 's');
  
  printf("\x1b[33m----------------------------\n");
  printf("     N O T A   L E G A L   \n");
  printf("----------------------------\x1b[0m\n");
  printf("ITEM             QTD   VALOR\n");
  printf("%-16s %04i \x1b[34m%6.2f\x1b[0m\n", item, quantidade, valor);
  printf("\x1b[33m----------------------------\x1b[0m\n");
  printf("TOTAL................. \x1b[31m%-10.2f\x1b[0m\n", total);
/*
  printf("banana nanica   2   R$ 1.00\n");
  printf("coquinha gelada 1   R$ 2.00\n");
  printf("suco de laranja 2   R$ 3.00\n");
  printf("---------------------------\n");
  printf("TOTAL           3   R$ 3.00\n");
  */
}