#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;
  int deu_certo;

  do {
    deu_certo = system("clear");

    printf("MENU PRINCIPAL\n");
    printf("1 - iniciar\n");
    printf("2 - Resultado\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");

    printf("escolha uma opcao: ");

    deu_certo = scanf("%i", &opcao);

    if (!deu_certo)
      opcao = 0; // limpar a opção anterior do loop
    while (getchar() != '\n'); // limpar o buffer do teclado
    
    switch (opcao) {
      case 1: { // iniciar
        deu_certo = system("clear");
  
        char name[31];
  
        printf("Nome do Jogador: ");
        deu_certo = scanf("%[^\n]s", name);
        while (getchar() != '\n')
          ;
  
        printf("Bem vindo %s\n", name);
  
        printf("Pressione ENTER para iniciar\n");
        getchar();
        break;
      }
      case 2: { // resultado
        deu_certo = system("clear");
        printf("Resultado\n");
        printf("1o lugar - nycollas - 100pts\n");
        printf("2o lugar - nycollas - 80pts\n");
        printf("3o lugar - nycollas - 35pts\n");
        printf("4o lugar - nycollas - 0pts\n");
  
        printf("\n");
        printf("Pressione ENTER para continuar\n");
        getchar();
      }
      case 3: // ajuda
        printf("Você tem que jogar o jogo!\n");
        break;
      case 4: // sair do jogo
        printf("saindo do jogo...\n");
        break;
      default:
        printf(
            "\x1b[31mOpcao invalida! Tente novamente apertando ENTER\x1b[0m\n");
        getchar();
    }
  } while (opcao != 4);
  return 0;
}