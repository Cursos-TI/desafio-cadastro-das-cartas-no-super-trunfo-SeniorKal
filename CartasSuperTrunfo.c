#include <stdio.h>
    char estado, cidade[50];
    int populacao, pontosturistico;
    float area, pib, densidade;
    char codigocarta[5];
    float pibper;
    int num= 1;
    
void Criar_carta(){
    printf("-Digite o estado A-H\n");
    scanf(" %c", &estado);

    printf("-Qual o nome da cidade?\n");
    scanf("%s", cidade);

    printf("-Digite a populacao\n");
    scanf("%d", &populacao);

    printf("-Digite a area\n");
    scanf("%f", &area);

    printf("-Digite o PIB\n");
    scanf("%f", &pib);

    printf("-Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontosturistico);

    densidade = populacao / area;
    pibper = pib / populacao;

    sprintf(codigocarta, "%c%02d", estado , num);
    num ++;
}

void visualizar_carta(){
    printf("\nCodigo da cidade: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", cidade);
    printf("Populacao: %d Pessoas\n", populacao);
    printf("Area: %.2f Km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Pontos Turisticos: %d\n", pontosturistico);
    printf("Densidade populacional: %.2f hab./km2\n", densidade);
    printf("PIB Per Capita : %f Reais\n\n", pibper);
}

int main() {
    int opcao ;
    do{
    printf("\nSeja Bem vindo ao Super Trunfo!\n"
    "1 - Criar carta de cidade\n"
    "2 - Visualizar cartas\n"
    "3 - comparar cartas\n"
    "4 - Sair\n\n"
    );
    scanf("%d", &opcao);
    switch (opcao) {
            case 1:
                Criar_carta();
                continue;
            case 2:
                visualizar_carta();
                continue;
            case 3:
                continue;    
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
    }


} while (opcao !=4);


    return 0;
}