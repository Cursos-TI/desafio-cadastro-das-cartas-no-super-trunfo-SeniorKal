#include <stdio.h>

// Declaração de variáveis globais
char estado, cidade[50];
int populacao, pontosturistico;
float area, pib, densidade;
char codigocarta[5];
float pibper;
int num = 1;

// Função para criar a carta da cidade
void Criar_carta(){
    // Solicita o estado (A-H) ao usuário
    printf("-Digite o estado A-H\n");
    scanf(" %c", &estado);

    // Solicita o nome da cidade ao usuário
    printf("-Qual o nome da cidade?\n");
    scanf("%s", cidade);

    // Solicita a população da cidade ao usuário
    printf("-Digite a populacao\n");
    scanf("%d", &populacao);

    // Solicita a área da cidade ao usuário
    printf("-Digite a area\n");
    scanf("%f", &area);

    // Solicita o PIB da cidade ao usuário
    printf("-Digite o PIB\n");
    scanf("%f", &pib);

    // Solicita a quantidade de pontos turísticos ao usuário
    printf("-Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontosturistico);

    // Calcula a densidade populacional
    densidade = populacao / area;
    // Calcula o PIB per capita
    pibper = pib / populacao;

    // Gera o código da carta (estado e número)
    sprintf(codigocarta, "%c%02d", estado, num);
    num++;
}

// Função para visualizar a carta da cidade
void visualizar_carta(){
    // Exibe o código da cidade
    printf("\nCodigo da cidade: %s\n", codigocarta);
    // Exibe o nome da cidade
    printf("Nome da cidade: %s\n", cidade);
    // Exibe a população da cidade
    printf("Populacao: %d Pessoas\n", populacao);
    // Exibe a área da cidade
    printf("Area: %.2f Km2\n", area);
    // Exibe o PIB da cidade
    printf("PIB: %.2f bilhoes de reais\n", pib);
    // Exibe a quantidade de pontos turísticos
    printf("Pontos Turisticos: %d\n", pontosturistico);
    // Exibe a densidade populacional
    printf("Densidade populacional: %.2f hab./km2\n", densidade);
    // Exibe o PIB per capita
    printf("PIB Per Capita : %f Reais\n\n", pibper);
}

// Função principal
int main() {
    int opcao;
    do {
        // Menu principal
        printf("\nSeja Bem vindo ao Super Trunfo!\n"
               "1 - Criar carta de cidade\n"
               "2 - Visualizar cartas\n"
               "3- Sair\n\n"
        );
        // Lê a opção escolhida pelo usuário
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                // Cria uma nova carta
                Criar_carta();
                continue;
            case 2:
                // Visualiza a carta criada
                visualizar_carta();
                continue;
            case 3:
                // Saída do programa
                printf("Saindo...\n");
                break;
            default:
                // Opção inválida
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
