// 3. Faça um programa em C que imprima um qualitativo 
// associado a uma nota lida conforme a tabela: 
// 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, 
// e imprima Nota inválida nos demais casos.
#include <stdio.h>

int main(void)
{
    int nota = 0;
    // ler o valor da nota pelo input
    printf("coloque a sua nota: ");
    scanf("%d", &nota);

    // ver qual que é o qualitativo segundo a nota
    switch (nota)
    {
        case 1: 
            printf("Nota Ruim");
            break;
        case 2:
            printf("Nota Insuficiente");
            break;
        case 3:
            printf("Nota Suficiente");
            break;
        case 4:
            printf("Nota Boa");
            break;
        case 5:
            printf("Nota Otima");
            break;
        default:
            printf("coloque uma nota valida(1,2,3,4 ou 5)\n");
            break;
    }
}