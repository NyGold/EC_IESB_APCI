#include <stdio.h>
#include <stdlib.h>
#include <string.h> // biblioteca dedicada a string

int main() {
  int deu_certo = system("clear"); 
  
  // string não existe em C, apenas matrizes. Quando se coloca uma string você está colocando os caracteres da string em um vetor.
  // sempre adicione um a mais no número da matriz. Pois você ainda tem que contar com o caractere '\0' que está SEMPRE no final da matriz
  char nome[43]; // 0,1,2,3,4, ... , 29, 30
  deu_certo = scanf("%[^\n]s", nome);

  printf("olá %s!\n", nome);

  char primeiro_nome[21];
  char ultimo_nome[21];

  strcpy(primeiro_nome, "Nycollas"); // equivale a: primeiro_nome = "Nycollas"
  strcpy(ultimo_nome, "Teixeira");   // ultimo_nome = "Teixeira"

  strcpy(nome, primeiro_nome);
  strcat(nome, ultimo_nome); // strcat = concatenar (juntar)
                             // equivalente a nome = primeiro_nome + ultimo_nome

  int tamanho = strlen(nome); // strlen = tamanho da string
  printf("Seu nome tem %d caracteres\n", tamanho);

  if (strcmp(primeiro_nome, ultimo_nome) == 0) printf("Os nomes são iguais!\n");
  else printf("Os nomes não são iguais\n");

  // strcmp caso o retorno dela der 0 os strings são iguais 
  // caso, strcmp > 0 o primeiro nome é maior que o segundo
  // caso, strcmp < 0 o primeiro nome é menor que o segundo
  
  return 0;
}