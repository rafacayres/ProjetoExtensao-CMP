#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>



typedef struct {
    int idProduto;
    char nomeProduto[100];
    int quantidadeProduto;
    float precoUnitarioProduto;
} Estoque;

void menuPrincipal();
void entradaEstoque(Estoque lista[], int *total);
void saidaEstoque();
void consultarEstoque();
void carregarDados();
void salvarDados();
void limparBuffer();
void limparTela();



int main() 
{

    setlocale(LC_ALL, "Portuguese"); 
    
    int opcaoMenu = 0, execucaoDoMenu = 0;
    char finalizarMenu;

    Estoque meuEstoque[100];
    int totalProdutos = 0;

    do {
        menuPrincipal();
        scanf("%d", &opcaoMenu);
        limparBuffer();

        switch(opcaoMenu) {
            case 1:
                limparTela();
                entradaEstoque(meuEstoque, &totalProdutos);
                break;
            case 2:
                limparTela();
                printf("Em breve...\n");
                break;
            case 3:
                limparTela();
                printf("Em breve...\n");
                break;
            case 4:
                limparTela();
                printf("Certeza que deseja sair? (S/N)\n");
                scanf(" %c", &finalizarMenu);
                limparBuffer();

                if(toupper(finalizarMenu) == 'S') {
                    execucaoDoMenu = 1;
                }
                break;

            default:
                limparTela();
                printf("\n\nOpção inválida! Digite uma opção válida.\n\n");
                printf("Pressione Enter para continuar...");
                getchar();
        }

    } while(execucaoDoMenu != 1);

    return 0;
}

void limparBuffer() {
    int limpar;
    while ((limpar = getchar()) != '\n' && limpar != EOF);
}

void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void entradaEstoque(Estoque lista[], int *total) {
    char continuar = 'S';

    if(*total >= 100) {
        printf("ERRO: O estoque está cheio! Não é possível adicionar mais produtos.\n");
        printf("Pressione Enter para continuar...");
        getchar();
        return;
    }
    limparTela();
    printf("--- CADASTRO DE PRODUTO ---\n\n");
    printf("Insira o nome do produto que deseja adicionar ao estoque:\n"); 
}

void menuPrincipal() {
    limparTela();
    printf("1 - Entrada de estoque\n");
    printf("2 - Saída de estoque\n");
    printf("3 - Consultas\n");
    printf("4 - Sair do programa\n\n");
    printf("Escolha a sua opção: ");
}

