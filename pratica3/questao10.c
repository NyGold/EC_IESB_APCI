// 10. Faça um programa em C que leia um número decimal 
// e o converta em binário (ex.: 9 => 1001).

#include <stdio.h>

int decToBin(int num);

int main(void) {
      int numero;
      int deu_certo;

      do 
      {
            printf("Coloque um numero decimal: ");
            deu_certo = scanf("%i", &numero);         // deu_certo dar certo = 0
                                                      // deu_certo dar errado = 1
            if (!deu_certo) {
                  printf("Valor invalido. Tente novamente");
                  continue;
            }
      } while (!deu_certo);

      decToBin(numero);
}

int decToBin(int num) {
      int numero = num;
      int binario[8];

      // transformando o número decimal em binario
      for (int i = 7; i >= 0; i--) {
            if (numero % 2 == 0) binario[i] = 0;
            else binario[i] = 1;

            numero = numero / 2;
      }

      for (int i = 0; i < 8; i++) {
            printf("%i", binario[i]);
      }

      return 0;
}