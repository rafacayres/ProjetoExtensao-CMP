#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <windows.h>

void menuPrincipal();
void entradaEstoque();
void limparBuffer();

typedef struct{
    int idProduto;
    char produto[100];
    int quantidadeProduto;
    float precoUnitarioProduto;
} Estoque;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcaoMenu = 0, execucaoDoMenu = 0;
    char finalizarMenu;

    do{
    menuPrincipal();
    scanf("%d",&opcaoMenu);
    limparBuffer();

    switch(opcaoMenu){
    case 1:
        system("cls");
        printf("Em breve...");
        break;
    case 2:
        system("cls");
        printf("Em breve...");
        break;
    case 3:
        system("cls");  
        printf("Em breve...");
        break;
    case 4:
        system("cls");
        printf("Certeza que deseja sair? (S/N)\n");
        scanf(" %c", &finalizarMenu);

        limparBuffer();

        if(toupper(finalizarMenu) == 'S'){
            execucaoDoMenu = 1;
        }
        break;

    default:
        printf("\n\nOpção inválida!\n");
        system("pause");
    }

    }while(execucaoDoMenu != 1);

    return 0;

}
void limparBuffer() {
    int limpar;
    while ((limpar = getchar()) != '\n' && limpar != EOF);
}

void menuPrincipal(){
    system("cls");
    printf("1 - Entrada de estoque\n");
    printf("2 - Saída de estoque\n");
    printf("3 - Consultas\n");
    printf("4 - Sair do programa\n\n");
    printf("Escolha a sua opção: ");
} 