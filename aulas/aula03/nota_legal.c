// fazer um progama que recebe um input de itens, 
// tanto quanto sua quantidade e valor, e calcula o valor total da compra
// demonstrando no console um output de uma nota fiscal com todos os itens
// junto com sua quantidade e valores
#include <stdio.h>

struct item{
  char nome[20]; 
  int quantidade;
  float valor;
};

int main(void)
{
  struct item itens[5];
  
  int quantidade_MAX = 0;
  float valor = 0;
  float total = 0;
  char continue_value = 's';
  int numero_de_itens = 0;

  for (int i = 0; continue_value == 's' || continue_value == 'S'; i++){
      printf("Digite o nome do item: ");
      fgets(itens[i].nome, 50, stdin);
    
      printf("Digite a quantidade do item: ");
      scanf("%d", &itens[i].quantidade);
    
      printf("Digite o valor do item: ");
      scanf("%f", &itens[i].valor);
      
      itens[i].valor *= itens[i].quantidade;
      quantidade_MAX += itens[i].quantidade;
      total += itens[i].valor;
      numero_de_itens++;
      
      printf("Deseja continuar? (s/n): ");
      scanf("%s", &continue_value);
      
    }
  
  printf("\x1b[33m----------------------------\n");
  printf("     N O T A   L E G A L   \n");
  printf("----------------------------\x1b[0m\n");
  printf("ITEM             QTD   VALOR\n");
  
  for (int i = 0; i < numero_de_itens; i++){
      printf("%-16s %03i \x1b[34m%6.2f\x1b[0m\n", itens[i].nome, itens[i].quantidade, itens[i].valor);
    }
  
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