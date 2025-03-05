#include <stdio.h>

// Declaração de variáveis globais
char estado, cidade[50];        // Estado e cidade para a primeira carta
char estado2, cidade2[50];      // Estado e cidade para a segunda carta
int populacao, pontosturistico; // População e pontos turísticos para a primeira carta
int populacao2, pontosturistico2; // População e pontos turísticos para a segunda carta
float area, pib, densidade;     // Área, PIB e densidade populacional para a primeira carta
float area2, pib2, densidade2;  // Área, PIB e densidade populacional para a segunda carta
char codigocarta[5];            // Código da carta para a primeira carta
char codigocarta2[5];           // Código da carta para a segunda carta
float pibper;                   // PIB per capita para a primeira carta
float pibper2;                  // PIB per capita para a segunda carta
int num = 1;                    // Número para geração de código da carta

// Função para criar a carta da cidade
void Criar_carta1() {
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

// Função para criar a carta da cidade
void Criar_carta2() {
    // Solicita o estado (A-H) ao usuário
    printf("-Digite o estado A-H\n");
    scanf(" %c", &estado2);

    // Solicita o nome da cidade ao usuário
    printf("-Qual o nome da cidade?\n");
    scanf("%s", cidade2);

    // Solicita a população da cidade ao usuário
    printf("-Digite a populacao\n");
    scanf("%d", &populacao2);

    // Solicita a área da cidade ao usuário
    printf("-Digite a area\n");
    scanf("%f", &area2);

    // Solicita o PIB da cidade ao usuário
    printf("-Digite o PIB\n");
    scanf("%f", &pib2);

    // Solicita a quantidade de pontos turísticos ao usuário
    printf("-Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontosturistico2);

    // Calcula a densidade populacional
    densidade2 = populacao2 / area2;
    // Calcula o PIB per capita
    pibper2 = pib2 / populacao2;

    // Gera o código da carta (estado e número)
    sprintf(codigocarta2, "%c%02d", estado2, num);
    num++;
}

// Função para visualizar a carta da cidade
void visualizar_carta1() {
    printf("carta1: \n");
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

// Função para visualizar a segunda carta
void visualizar_carta2() {
    printf("carta2: \n");
    // Exibe o código da cidade
    printf("\nCodigo da cidade: %s\n", codigocarta2);
    // Exibe o nome da cidade
    printf("Nome da cidade: %s\n", cidade2);
    // Exibe a população da cidade
    printf("Populacao: %d Pessoas\n", populacao2);
    // Exibe a área da cidade
    printf("Area: %.2f Km2\n", area2);
    // Exibe o PIB da cidade
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    // Exibe a quantidade de pontos turísticos
    printf("Pontos Turisticos: %d\n", pontosturistico2);
    // Exibe a densidade populacional
    printf("Densidade populacional: %.2f hab./km2\n", densidade2);
    // Exibe o PIB per capita
    printf("PIB Per Capita : %f Reais\n\n", pibper2);
}

// Função para comparar as cartas
void comparar_carta() {
    printf("Carta 1- %s : %d\n", cidade, populacao); 
    printf("Carta 2- %s : %d\n", cidade2, populacao2);  
    if (populacao > populacao2) {
        printf("Resultado: carta 1 (%s) Venceu! \n ", cidade);
    } 
    else if (populacao2 > populacao) {
        printf("Resultado carta 2 (%s) Venceu! \n ", cidade2);
    } 
    else {    
        printf("Invalido");
    }
}

// Função principal
int main() {
    int escolha; // Variável para armazenar a escolha do usuário
    int opcao;   // Variável para armazenar a opção do menu principal
    do {
        // Menu principal
        printf("\nSeja Bem vindo ao Super Trunfo!\n"
               "1 - Criar carta de cidade\n"
               "2 - Visualizar cartas\n"
               "3 - Comparar cartas\n"
               "4 - Sair\n\n"
        );
        // Lê a opção escolhida pelo usuário
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                // Cria uma nova carta
                printf("Criar Carta 1 ou Carta 2? \n");
                scanf("%d", &escolha);
                if (escolha == 1){
                    Criar_carta1();
                } else if(escolha == 2){
                    Criar_carta2();
                } else {
                    printf("escolha invalida \n");
                }
                break;
            case 2:
                // Visualiza a carta criada
                printf("Visualizar Carta 1 ou Carta 2? \n");
                scanf("%d", &escolha);
                if (escolha == 1){
                    visualizar_carta1();
                } else if(escolha == 2){
                    visualizar_carta2();
                } else {
                    printf("escolha invalida \n");
                }
                break;
            case 3:
                // Compara as cartas
                comparar_carta();
                break;
            case 4:
                // Saída do programa
                printf("Saindo...\n");
                break;
            default:
                // Opção inválida
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 4); // Continua o loop enquanto a opção não for 4 (Sair)

    return 0;
}
