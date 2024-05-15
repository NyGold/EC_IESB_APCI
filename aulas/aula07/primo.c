#include <stdio.h>

int main(void){
  int numero, deuCerto,quantidade_divisores = 0;

  printf("digite um numero: ");
  deuCerto = scanf("%d", &numero);

  if (deuCerto){
    int quantidade_divisores = 0;
    for(int i = 1; i <= numero; i++){
      if(numero % i == 0){
        quantidade_divisores++;
      }
    }
    if (quantidade_divisores == 2){
      printf("O numero eh primo\n");
    }else{
      printf("O numero nao eh primo\n");
    }
  } else {
    printf("valor invalido");
  }
}