// 10. Faça um programa em C que leia um número decimal 
// e o converta em binário (ex.: 9 => 1001).

#include <stdio.h>

// para converter de decimal para binario:
// você divide o número e pega o RESTO (%) e divide por dois de novo,
// até dar zero novamente

int main(void) {
      int numero;
      int binario[8];
      int deu_certo;

      // verificação de entrada
      do {
            printf("Coloque um numero na base decimal para transforma-lo em binario: ");
            deu_certo = scanf("%d", &numero);

            if (!deu_certo) {
                  printf("valor invalido. Tente Novamente!");
            }
      } while (!deu_certo);

      // transformando o número decimal em binario
      for (int i = 7; i >= 0; i--) {
            if (numero % 2 == 0) binario[i] = 0;
            else binario[i] = 1;

            numero = numero / 2;
      }

      // lendo a matriz
      for (int i = 0; i < 8; i++) {
            printf("\x1b[31m%d\x1b[0m", binario[i]);
      }

      printf("\n");
}
