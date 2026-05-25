#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

typedef struct {
    int idProduto;
    char nomeProduto[356];
    int quantidadeProduto;
    float precoUnitarioProduto;
} Estoque;

void menuPrincipal();
void entradaEstoque(Estoque estoqueDaQuermesse[], int *ponteiroTotalProdutos, int *ponteiroProximoId);
void saidaEstoque(Estoque estoqueDaQuermesse[], int totalProdutos);
void excluirProdutoEstoque(Estoque estoqueDaQuermesse[], int *ponteiroTotalProdutos);
void consultarEstoque(Estoque estoqueDaQuermesse[], int totalProdutos);
void carregarDados();
void salvarDados();
void limparBuffer();
void limparTela();

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("chcp 65001 > nul");

    int opcaoMenu = 0, execucaoDoMenu = 0;
    char finalizarMenu;

    Estoque meuEstoque[100];
    int totalProdutos = 0;
    int proximoIdDisponivel = 1;

    do {
        menuPrincipal();
        scanf("%d", &opcaoMenu);
        limparBuffer();

        switch(opcaoMenu) {
            case 1:
                limparTela();
                entradaEstoque(meuEstoque, &totalProdutos, &proximoIdDisponivel);
                break;
            case 2:
                limparTela();
                saidaEstoque(meuEstoque, totalProdutos);
                break;
            case 3:
                limparTela();
                consultarEstoque(meuEstoque, totalProdutos);
                break;
            case 4:
                limparTela();
                excluirProdutoEstoque(meuEstoque, &totalProdutos);
                break;
            case 5:
                limparTela();
                printf("Certeza que deseja sair do programa? (S/N): ");
                scanf(" %c", &finalizarMenu);
                limparBuffer();

                if(toupper(finalizarMenu) == 'S') {
                    execucaoDoMenu = 1;
                }
                break;

            default:
                limparTela();
                printf("Opção inválida! Digite uma opção que esteja no menu.\n\n");
                printf("Pressione Enter para continuar...");
                getchar();
        }

    } while(execucaoDoMenu != 1);

    limparTela();
    printf("==================================================\n");
    printf("         Fim da execução do programa!             \n");
    printf("==================================================\n");

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

void entradaEstoque(Estoque estoqueDaQuermesse[], int *ponteiroTotalProdutos, int *ponteiroProximoId) {
    char continuar = 'S';
    char nomeDigitado[356];
    int posicaoProduto, produtoEncontrado, novaQuantidade;
    float novoPreco;

    printf("==================================================\n");
    printf("          ENTRADA OU EDIÇÃO DE ESTOQUE            \n");
    printf("==================================================\n\n");
    printf("AVISO: Para cadastrar um NOVO item, use um nome inédito.\n");
    printf("AVISO: Para EDITAR um item existente, digite o nome IGUAL.\n");
    printf("AVISO: Ao editar, se o preço continuar o mesmo, basta redigitar o valor atual.\n");
    printf("       Caso o preço tenha mudado, digite o novo valor para atualizá-lo.\n\n");
    printf("Pressione <Enter> para iniciar...");
    getchar();

    while (toupper(continuar) == 'S') {
        limparTela();
        produtoEncontrado = -1;

        printf("--- ENTRADA OU EDIÇÃO DE PRODUTO ---\n\n");
        printf("Insira o nome do produto (digite idêntico para editar): ");
        scanf(" %355[^\n]", nomeDigitado);
        limparBuffer();

        for (posicaoProduto = 0; posicaoProduto < *ponteiroTotalProdutos; posicaoProduto++) {
            if (strcasecmp(estoqueDaQuermesse[posicaoProduto].nomeProduto, nomeDigitado) == 0) {
                produtoEncontrado = posicaoProduto;
                break;
            }
        }

        if (produtoEncontrado != -1) {
            printf("\n[PRODUTO ENCONTRADO] ID correspondente: %d\n", estoqueDaQuermesse[produtoEncontrado].idProduto);
            printf("Quantidade atual: %d unidades | Preço atual: R$ %.2f\n\n",
                   estoqueDaQuermesse[produtoEncontrado].quantidadeProduto,
                   estoqueDaQuermesse[produtoEncontrado].precoUnitarioProduto);

            printf("Digite a quantidade de itens a SOMAR ao estoque atual: ");
            scanf("%d", &novaQuantidade);
            limparBuffer();
            estoqueDaQuermesse[produtoEncontrado].quantidadeProduto += novaQuantidade;

            printf("\nDigite o preço unitário do item (redigite o atual ou insira o novo): R$ ");
            scanf("%f", &novoPreco);
            limparBuffer();
            estoqueDaQuermesse[produtoEncontrado].precoUnitarioProduto = novoPreco;

            printf("\nProduto atualizado com sucesso!\n");
        } else {
            if (*ponteiroTotalProdutos >= 100) {
                printf("\nERRO: Limite máximo de 100 itens atingido. Não é possível adicionar novos produtos.\n");
                break;
            }

            estoqueDaQuermesse[*ponteiroTotalProdutos].idProduto = *ponteiroProximoId;
            strcpy(estoqueDaQuermesse[*ponteiroTotalProdutos].nomeProduto, nomeDigitado);

            printf("ID gerado para o novo item: %d\n", estoqueDaQuermesse[*ponteiroTotalProdutos].idProduto);

            printf("\nDigite a quantidade inicial de itens: ");
            scanf("%d", &estoqueDaQuermesse[*ponteiroTotalProdutos].quantidadeProduto);
            limparBuffer();

            printf("\nDigite o preço unitário do item: R$ ");
            scanf("%f", &estoqueDaQuermesse[*ponteiroTotalProdutos].precoUnitarioProduto);
            limparBuffer();

            (*ponteiroTotalProdutos)++;
            (*ponteiroProximoId)++;
            printf("\nNovo produto cadastrado com sucesso!\n");
        }

        printf("\nDeseja gerenciar outro produto? (S/N): ");
        scanf(" %c", &continuar);
        limparBuffer();
    }

    printf("\nPressione Enter para retornar ao menu...");
    getchar();
}

void saidaEstoque(Estoque estoqueDaQuermesse[], int totalProdutos){
    int posicaoProduto, idBuscado, quantidadeRemover;
    int achou = 0;

    if (totalProdutos == 0) {
        printf("==================================================\n");
        printf("                    MÓDULO DE SAÍDA               \n");
        printf("==================================================\n\n");
        printf("Aviso: Não há nenhum produto cadastrado no momento!\n\n");
        printf("Pressione Enter para voltar ao menu principal...");
        getchar();
        return;
    }

    printf("==================================================\n");
    printf("                    MÓDULO DE SAÍDA               \n");
    printf("==================================================\n\n");
    printf("AVISO: Para dar baixa em unidades, use o número do ID do produto.\n");
    printf("Consulte o ID no Módulo de Consultas caso não se lembre.\n\n");
    printf("Digite o ID do produto que deseja dar baixa no estoque: ");
    scanf("%d", &idBuscado);
    limparBuffer();

    for(posicaoProduto = 0; posicaoProduto < totalProdutos; posicaoProduto++){
        if(estoqueDaQuermesse[posicaoProduto].idProduto == idBuscado){
            achou = 1;

            printf("\n\n--- PRODUTO ENCONTRADO ---\n\n");
            printf("ID: %d\n", estoqueDaQuermesse[posicaoProduto].idProduto);
            printf("Nome: %s\n", estoqueDaQuermesse[posicaoProduto].nomeProduto);
            printf("Quantidade em Estoque: %d unidades\n", estoqueDaQuermesse[posicaoProduto].quantidadeProduto);
            printf("Preço Unitário: R$ %.2f\n", estoqueDaQuermesse[posicaoProduto].precoUnitarioProduto);
            printf("===================================\n\n");

            printf("Deseja remover quantas unidades desse item em estoque?: ");
            scanf("%d", &quantidadeRemover);
            limparBuffer();

            if (quantidadeRemover > estoqueDaQuermesse[posicaoProduto].quantidadeProduto) {
                printf("\nERRO: Quantidade insuficiente em estoque!\n");
                printf("Você tentou remover %d unidades, mas só existem %d.\n", quantidadeRemover, estoqueDaQuermesse[posicaoProduto].quantidadeProduto);
            } else {
                estoqueDaQuermesse[posicaoProduto].quantidadeProduto = estoqueDaQuermesse[posicaoProduto].quantidadeProduto - quantidadeRemover;

                printf("\nBaixa realizada com sucesso!\n");
                printf("Nova quantidade de %s em estoque: %d unidades\n",
                       estoqueDaQuermesse[posicaoProduto].nomeProduto,
                       estoqueDaQuermesse[posicaoProduto].quantidadeProduto);
            }

            break;
        }
    }

    if (achou == 0) {
        printf("\nErro: Nenhum produto com o ID %d foi encontrado no sistema.\n", idBuscado);
    }

    printf("\nPressione Enter para retornar ao menu...");
    getchar();
}

void excluirProdutoEstoque(Estoque estoqueDaQuermesse[], int *ponteiroTotalProdutos) {
    int posicaoProduto, posicaoRemanejamento, idBuscado;
    int achou = 0;

    if (*ponteiroTotalProdutos == 0) {
        printf("==================================================\n");
        printf("               EXCLUSÃO DE PRODUTO                \n");
        printf("==================================================\n\n");
        printf("Aviso: Não há nenhum produto cadastrado no momento!\n\n");
        printf("Pressione Enter para voltar ao menu principal...");
        getchar();
        return;
    }

    printf("==================================================\n");
    printf("               EXCLUSÃO DE PRODUTO                \n");
    printf("==================================================\n\n");
    printf("AVISO: A exclusão remove o item permanentemente do sistema.\n");
    printf("Para apenas vender ou reduzir itens, use a opção Saída de Estoque.\n\n");
    printf("Digite o ID do produto que deseja remover TOTALMENTE do sistema: ");
    scanf("%d", &idBuscado);
    limparBuffer();

    for (posicaoProduto = 0; posicaoProduto < *ponteiroTotalProdutos; posicaoProduto++) {
        if (estoqueDaQuermesse[posicaoProduto].idProduto == idBuscado) {
            achou = 1;

            printf("\n--- PRODUTO REMOVIDO COM SUCESSO ---\n");
            printf("O item \"%s\" foi completamente excluído do estoque.\n", estoqueDaQuermesse[posicaoProduto].nomeProduto);
            printf("==================================================\n\n");

            for (posicaoRemanejamento = posicaoProduto; posicaoRemanejamento < (*ponteiroTotalProdutos) - 1; posicaoRemanejamento++) {
                estoqueDaQuermesse[posicaoRemanejamento] = estoqueDaQuermesse[posicaoRemanejamento + 1];
            }

            (*ponteiroTotalProdutos)--;
            break;
        }
    }

    if (achou == 0) {
        printf("\nErro: Nenhum produto com o ID %d foi encontrado no sistema.\n", idBuscado);
    }

    printf("Pressione Enter para retornar ao menu...");
    getchar();
}

void consultarEstoque(Estoque estoqueDaQuermesse[], int totalProdutos){
    int opcaoConsulta, somarQuantidadeItens, verificarQuantidadeItens;
    int idBuscado, achou, itensCriticos;
    int posicaoProduto;
    float valorTotal;
    float faturamentoTotalEstoque;

    if (totalProdutos == 0) {
        printf("==================================================\n");
        printf("               MÓDULO DE CONSULTAS                \n");
        printf("==================================================\n\n");
        printf("Aviso: Não há nenhum produto cadastrado no momento!\n\n");
        printf("Pressione Enter para voltar ao menu principal...");
        getchar();
        return;
    }

    do {
        limparTela();
        printf("==================================================\n");
        printf("               MÓDULO DE CONSULTAS                \n");
        printf("==================================================\n");
        printf("1 - Listar Todos os Produtos\n");
        printf("2 - Consulta de Estoque Baixo\n");
        printf("3 - Pesquisar Produto por ID\n");
        printf("4 - Voltar ao Menu Principal\n");
        printf("==================================================\n");
        printf("Escolha a sua opção: ");

        scanf("%d", &opcaoConsulta);
        limparBuffer();

        switch(opcaoConsulta){
            case 1:
                limparTela();
                printf("--- TODOS OS PRODUTOS CADASTRADOS ---\n\n");

                somarQuantidadeItens = 0;
                faturamentoTotalEstoque = 0.0;

                for (verificarQuantidadeItens = 0; verificarQuantidadeItens < totalProdutos; verificarQuantidadeItens++) {
                    valorTotal = estoqueDaQuermesse[verificarQuantidadeItens].precoUnitarioProduto * estoqueDaQuermesse[verificarQuantidadeItens].quantidadeProduto;

                    printf("ID: %d\n", estoqueDaQuermesse[verificarQuantidadeItens].idProduto);
                    printf("Nome: %s\n", estoqueDaQuermesse[verificarQuantidadeItens].nomeProduto);
                    printf("Quantidade: %d unidades\n", estoqueDaQuermesse[verificarQuantidadeItens].quantidadeProduto);
                    printf("Preço Unitário: R$ %.2f\n", estoqueDaQuermesse[verificarQuantidadeItens].precoUnitarioProduto);
                    printf("Valor total: R$ %.2f\n", valorTotal);
                    printf("-----------------------------------\n\n");

                    somarQuantidadeItens = somarQuantidadeItens + estoqueDaQuermesse[verificarQuantidadeItens].quantidadeProduto;
                    faturamentoTotalEstoque = faturamentoTotalEstoque + valorTotal;
                }

                printf("==================================================\n");
                printf("               BALANÇO GERAL DO ESTOQUE           \n");
                printf("==================================================\n");
                printf("Total de mercadorias armazenadas: %d unidades\n", somarQuantidadeItens);
                printf("Valor total financeiro em estoque: R$ %.2f\n", faturamentoTotalEstoque);
                printf("==================================================\n\n");

                printf("Pressione Enter para continuar...");
                getchar();
                limparTela();
                break;

            case 2:
                limparTela();
                itensCriticos = 0;
                printf("--- ALERTA DE ESTOQUE BAIXO ---\n\n");
                printf("Produtos com menos de 5 unidades no depósito:\n");
                printf("-----------------------------------\n");

                for (posicaoProduto = 0; posicaoProduto < totalProdutos; posicaoProduto++) {
                    if (estoqueDaQuermesse[posicaoProduto].quantidadeProduto < 5) {
                        printf("ID: %d | Nome: %s | Quantidade: %d un.\n",
                                estoqueDaQuermesse[posicaoProduto].idProduto,
                                estoqueDaQuermesse[posicaoProduto].nomeProduto,
                                estoqueDaQuermesse[posicaoProduto].quantidadeProduto);
                        printf("-----------------------------------\n");
                        itensCriticos++;
                    }
                }

                if (itensCriticos == 0) {
                    printf("\nNível seguro! Todos os itens possuem mais de 5 unidades.\n");
                } else {
                    printf("\nAtenção: Existem %d produto(s) com estoque crítico!\n", itensCriticos);
                }

                printf("\nPressione Enter para continuar...");
                getchar();
                break;

            case 3:
                limparTela();
                achou = 0;

                printf("--- PESQUISAR PRODUTO POR ID ---\n\n");
                printf("Digite o ID do produto que deseja buscar: ");
                scanf("%d", &idBuscado);
                limparBuffer();

                for (posicaoProduto = 0; posicaoProduto < totalProdutos; posicaoProduto++) {
                    if (estoqueDaQuermesse[posicaoProduto].idProduto == idBuscado) {
                        limparTela();
                        printf("--- PRODUTO ENCONTRADO ---\n\n");
                        printf("ID: %d\n", estoqueDaQuermesse[posicaoProduto].idProduto);
                        printf("Nome: %s\n", estoqueDaQuermesse[posicaoProduto].nomeProduto);
                        printf("Quantidade em Estoque: %d unidades\n", estoqueDaQuermesse[posicaoProduto].quantidadeProduto);
                        printf("Preço Unitário: R$ %.2f\n", estoqueDaQuermesse[posicaoProduto].precoUnitarioProduto);
                        printf("===================================\n");
                        achou = 1;
                        break;
                    }
                }

                if (achou == 0) {
                    printf("\nErro: Nenhum produto com o ID %d foi encontrado.\n", idBuscado);
                }

                printf("\nPressione Enter para continuar...");
                getchar();
                break;

            case 4:
                break;

            default:
                printf("\nOpção inválida! Pressione Enter para tentar novamente...");
                getchar();
        }
    } while(opcaoConsulta != 4);
}

void menuPrincipal() {
    limparTela();
    printf("==================================================\n");
    printf("             SISTEMA DE ESTOQUE - QUERMESSE       \n");
    printf("==================================================\n");
    printf("1 - Entrada de estoque\n");
    printf("2 - Saída de estoque\n");
    printf("3 - Consultas\n");
    printf("4 - Excluir produto\n");
    printf("5 - Sair do programa\n");
    printf("==================================================\n");
    printf("Escolha a sua opção: ");
}
