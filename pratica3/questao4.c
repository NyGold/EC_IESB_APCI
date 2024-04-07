// 4. Faça um programa em C que leia uma tecla pressionada 
// e determine se ela é uma letra, um dígito ou um caractere especial.

#include <stdio.h>

int main(void)
{
    char tecla_pressionada;

    printf("pressione qualquer tecla: ");
    scanf("%c", tecla_pressionada);

    // transforma a tecla em um int para dar o valor ascii dela
    (int)tecla_pressionada;

    // a tecla que ele pressionar vai equivaler ao valor ascii da tecla
    if (tecla_pressionada >= 48 && tecla_pressionada <= 57)
    {
        printf("A tecla pressionada é um digito\n");
        return 0;
    }
    else if ((tecla_pressionada >= 65 && tecla_pressionada <= 90) || (tecla_pressionada >= 97 && tecla_pressionada <= 122))
    {
        printf("A tecla pressionada é uma letra\n");
        return 0;
    }

    // caso não for nenhum dos casos a cima, por lógica a tecla será um caractere especial
    printf("A tecla pressionada é um caractere especial\n");
}