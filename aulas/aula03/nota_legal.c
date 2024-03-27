// fazer um progama que recebe um input de itens, 
// tanto quanto sua quantidade e valor, e calcula o valor total da compra
// demonstrando no console um output de uma nota fiscal com todos os itens
// junto com sua quantidade e valores
#include <stdio.h>

int main(void)
{
  int quantidade = 0;
  char nome[50];
  float valor = 0.0;
  float total = 0.0;

  printf("coloque o nome do produto: ");
  scanf(" %[^\n]s", nome);
  // %[^\n]s = string com espaços, pega até o símbolo indicado.

  printf("coloque o valor do produto: ");
  scanf("%f", &valor);
  
  printf("coloque a quantidade do produto: ");
  scanf("%d", &quantidade);
  
  printf("\x1b[33m----------------------------\n");
  printf("     N O T A   L E G A L   \n");
  printf("----------------------------\x1b[0m\n");
  printf("ITEM             QTD   VALOR\n");
  printf("%-16.16s %03i %9.2f\n", nome, quantidade, valor);
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