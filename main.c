#include <stdio.h>

#define PRECO_INGRESSO 12.50  // Preço do ingresso

int main() {
    int opcao, quantidade;
    double valorTotal;

    // Apresentação das opções de filmes
    printf("Escolha um filme:\n");
    printf("1. Vingadores 4 – da Marvel\n");
    printf("2. Como Treinar o Seu Dragão 3\n");
    printf("3. Dumbo\n");
    printf("4. Shazam!\n");
    printf("Digite o número do filme escolhido: ");
    scanf("%d", &opcao);

    // Verifica se a opção escolhida é válida
    if (opcao < 1 || opcao > 4) {
        printf("Opção inválida! Por favor, escolha um filme válido.\n");
        return 1; // Encerra o programa se a opção for inválida
    }

    // Solicita a quantidade de ingressos
    printf("Quantos ingressos deseja comprar? ");
    scanf("%d", &quantidade);

    // Calcula o valor total
    valorTotal = quantidade * PRECO_INGRESSO;

    // Exibe o resultado
    printf("\nFilme escolhido: ");
    switch (opcao) {
        case 1:
            printf("Vingadores 4 – da Marvel\n");
            break;
        case 2:
            printf("Como Treinar o Seu Dragão 3\n");
            break;
        case 3:
            printf("Dumbo\n");
            break;
        case 4:
            printf("Shazam!\n");
            break;
    }

    printf("Quantidade de ingressos: %d\n", quantidade);
    printf("Valor total: R$ %.2f\n", valorTotal);

    return 0;
}