#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Lógica Super Trunfo Nível Mestre
// Desafio do aluno José Ageu Layme Neto

int main() {
    
    int opcao1, opcao2; //opções dos menus de seleção dos atributos
    srand(time(0));

    // Carta 1
    char estado1[50] = "PE";
    char codigo1[10] = "PNZ";
    char cidade1[50] = "Petrolina";
    unsigned long int populacao1 = rand() % 100 + 1; //mil habitantes
    float area1 = rand() % 100 + 1; //em km²
    float pib1 = rand() % 100 + 1; //em bilhões de reais
    int pontosTuristicos1 = rand() % 100 + 1;
    float densidadePopulacional1 = (float) populacao1 / area1;
    float pibPerCapita1 = (float) pib1 / populacao1;
    float somaAtributos1 = 0;

    // Carta 2
    char estado2[50] = "BA";
    char codigo2[10] = "JUA";
    char cidade2[50] = "Juazeiro";
    unsigned long int populacao2 = rand() % 100 + 1; //mil habitantes
    float area2 = rand() % 100 + 1; //em km²
    float pib2 = rand() % 100 + 1; //em bilhões de reais
    int pontosTuristicos2 = rand() % 100 + 1;
    float densidadePopulacional2 = (float) populacao2 / area2;
    float pibPerCapita2 = (float) pib2 / populacao2;
    float somaAtributos2 = 0;

    // Título da aplicação
    printf("***********************************\n");
    printf("*** DESAFIO LÓGICA SUPER TRUNFO ***\n");
    printf("***         NÍVEL MESTRE        ***\n");
    printf("***********************************\n");

    // Introdução do jogo ao usuário
    printf("Você deverá escolher dois atributos para comparar as cartas.\n");
    printf("Os atributos serão comparados individualmente e cumulativamente (somados).\n");
    printf("Vence a rodada a carta que tiver o maior valor da soma dos atributos.\n");

    // Menu de opções para o primeiro atributo
    printf("\n");
    printf("************************************************\n");
    printf("*** Selecione um atributo para ser comparado ***\n");
    printf("(1) População\n");
    printf("(2) Área\n");
    printf("(3) PIB\n");
    printf("(4) Número de pontos turísticos\n");
    printf("(5) Densidade populacional\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    switch (opcao1) {
    case 1:
        somaAtributos1 += populacao1;
        somaAtributos2 += populacao2;
        printf("\n");
        printf("ATRIBUTO: População\n");
        printf("Carta 1 - %s (%s): %d mil habitantes\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d mil habitantes\n", cidade2, estado2, populacao2);
        if (populacao1 > populacao2){
            printf("RESULTADO: Carta 1 (%s) vence neste atributo!\n", cidade1);
        } else if (populacao1 == populacao2){
            printf("RESULTADO: Carta 1 (%s) e Carta 2 (%s) empatam neste atributo!\n", cidade1, cidade2);
        } else {
            printf("RESULTADO: Carta 2 (%s) vence neste atributo!\n", cidade2);
        }
        break;
    case 2:
        somaAtributos1 += area1;
        somaAtributos2 += area2;
        printf("\n");
        printf("ATRIBUTO: Área\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
        if (area1 > area2){
            printf("RESULTADO: Carta 1 (%s) vence neste atributo!\n", cidade1);
        } else if (area1 == area2){
            printf("RESULTADO: Carta 1 (%s) e Carta 2 (%s) empatam neste atributo!\n", cidade1, cidade2);
        } else {
            printf("RESULTADO: Carta 2 (%s) vence neste atributo!\n", cidade2);
        }
        break;
    case 3:
        somaAtributos1 += pib1;
        somaAtributos2 += pib2;    
        printf("\n");
        printf("ATRIBUTO: PIB\n");
        printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade2, estado2, pib2);
        if (pib1 > pib2){
            printf("RESULTADO: Carta 1 (%s) vence neste atributo!\n", cidade1);
        } else if (pib1 == pib2){
            printf("RESULTADO: Carta 1 (%s) e Carta 2 (%s) empatam neste atributo!\n", cidade1, cidade2);
        } else {
            printf("RESULTADO: Carta 2 (%s) vence neste atributo!\n", cidade2);
        }
        break;
    case 4:
        somaAtributos1 += pontosTuristicos1;
        somaAtributos2 += pontosTuristicos2;
        printf("\n");
        printf("ATRIBUTO: Número de Pontos Túrísticos\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontosTuristicos1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2){
            printf("RESULTADO: Carta 1 (%s) vence neste atributo!\n", cidade1);
        } else if (pontosTuristicos1 == pontosTuristicos2){
            printf("RESULTADO: Carta 1 (%s) e Carta 2 (%s) empatam neste atributo!\n", cidade1, cidade2);
        } else {
            printf("RESULTADO: Carta 2 (%s) vence neste atributo!\n", cidade2);
        }
        break;
    case 5:
        somaAtributos1 -= densidadePopulacional1;
        somaAtributos2 -= densidadePopulacional2;
        printf("\n");
        printf("ATRIBUTO: Densidade Populacional\n");
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidadePopulacional1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidadePopulacional2);
        if (densidadePopulacional1 < densidadePopulacional2){
            printf("RESULTADO: Carta 1 (%s) vence neste atributo!\n", cidade1);
        } else if (densidadePopulacional1 == densidadePopulacional2){
            printf("RESULTADO: Carta 1 (%s) e Carta 2 (%s) empatam neste atributo!\n", cidade1, cidade2);
        } else {
            printf("RESULTADO: Carta 2 (%s) vence neste atributo!\n", cidade2);
        }
        break;
    default:
        printf("Opção inválida! Inicie o jogo novamente.");
        return 0;
        break;
    }

    // Menu de opções para o segundo atributo
    printf("\n");
    printf("***************************************************\n");
    printf("*** Selecione outro atributo para ser comparado ***\n");
    printf(opcao1 == 1 ? "( ) Opção indisponível\n" : "(1) População\n");
    printf(opcao1 == 2 ? "( ) Opção indisponível\n" : "(2) Área\n");
    printf(opcao1 == 3 ? "( ) Opção indisponível\n" : "(3) PIB\n");
    printf(opcao1 == 4 ? "( ) Opção indisponível\n" : "(4) Número de pontos turísticos\n");
    printf(opcao1 == 5 ? "( ) Opção indisponível\n" : "(5) Densidade populacional\n");
    printf("Opção: ");
    scanf("%d", &opcao2);
    if (opcao1 == opcao2){
        printf("Atributo indisponível. Reinicie o jogo.\n");
        return 0;
    } 

    switch (opcao2) {
    case 1:
        somaAtributos1 += populacao1;
        somaAtributos2 += populacao2;
        printf("\n");
        printf("ATRIBUTO: População\n");
        printf("Carta 1 - %s (%s): %d mil habitantes\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d mil habitantes\n", cidade2, estado2, populacao2);
        if (populacao1 > populacao2){
            printf("RESULTADO: Carta 1 (%s) vence neste atributo!\n", cidade1);
        } else if (populacao1 == populacao2){
            printf("RESULTADO: Carta 1 (%s) e Carta 2 (%s) empatam neste atributo!\n", cidade1, cidade2);
        } else {
            printf("RESULTADO: Carta 2 (%s) vence neste atributo!\n", cidade2);
        }
        break;
    case 2:
        somaAtributos1 += area1;
        somaAtributos2 += area2;
        printf("\n");
        printf("ATRIBUTO: Área\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
        if (area1 > area2){
            printf("RESULTADO: Carta 1 (%s) vence neste atributo!\n", cidade1);
        } else if (area1 == area2){
            printf("RESULTADO: Carta 1 (%s) e Carta 2 (%s) empatam neste atributo!\n", cidade1, cidade2);
        } else {
            printf("RESULTADO: Carta 2 (%s) vence neste atributo!\n", cidade2);
        }
        break;
    case 3:
        somaAtributos1 += pib1;
        somaAtributos2 += pib2;
        printf("\n");
        printf("ATRIBUTO: PIB\n");
        printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", cidade1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade2, estado2, pib2);
        if (pib1 > pib2){
            printf("RESULTADO: Carta 1 (%s) vence neste atributo!\n", cidade1);
        } else if (pib1 == pib2){
            printf("RESULTADO: Carta 1 (%s) e Carta 2 (%s) empatam neste atributo!\n", cidade1, cidade2);
        } else {
            printf("RESULTADO: Carta 2 (%s) vence neste atributo!\n", cidade2);
        }
        break;
    case 4:
        somaAtributos1 += pontosTuristicos1;
        somaAtributos2 += pontosTuristicos2;
        printf("\n");
        printf("ATRIBUTO: Número de Pontos Túrísticos\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, pontosTuristicos1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2){
            printf("RESULTADO: Carta 1 (%s) vence neste atributo!\n", cidade1);
        } else if (pontosTuristicos1 == pontosTuristicos2){
            printf("RESULTADO: Carta 1 (%s) e Carta 2 (%s) empatam neste atributo!\n", cidade1, cidade2);
        } else {
            printf("RESULTADO: Carta 2 (%s) vence neste atributo!\n", cidade2);
        }
        break;
    case 5:
        somaAtributos1 -= densidadePopulacional1;
        somaAtributos2 -= densidadePopulacional2;
        printf("\n");
        printf("ATRIBUTO: Densidade Populacional\n");
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidadePopulacional1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidadePopulacional2);
        if (densidadePopulacional1 < densidadePopulacional2){
            printf("RESULTADO: Carta 1 (%s) vence neste atributo!\n", cidade1);
        } else if (densidadePopulacional1 == densidadePopulacional2){
            printf("RESULTADO: Carta 1 (%s) e Carta 2 (%s) empatam neste atributo!\n", cidade1, cidade2);
        } else {
            printf("RESULTADO: Carta 2 (%s) vence neste atributo!\n", cidade2);
        }
        break;
    default:
        printf("Opção inválida! Inicie o jogo novamente.");
        return 0;
        break;
    }

    printf("\n");
    printf("*********************************\n");
    printf("*** RESULTADO FINAL DA RODADA ***\n");
    printf("*********************************\n");
    printf("A Carta 1 totalizou %.2f pontos.\n", somaAtributos1);
    printf("A Carta 2 totalizou %.2f pontos.\n", somaAtributos2);
    if (somaAtributos1 > somaAtributos2){
        printf("* A Carta 1 venceu a rodada!!! *\n");
    }else{
        if (somaAtributos2 > somaAtributos1){
            printf("* A Carta 2 venceu a rodada!!! *\n");
        }else{
            printf("* As Cartas 1 e 2 empataram!!! *\n");
        }
    }

    return 0;
}
