#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Variáveis carta 1:
    char estado1;
    char codigo1[10];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int ponto1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;
    
    // Variáveis carta 2:
    char estado2;
    char codigo2[10];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int ponto2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    // Variável das comparações
    int resultadopopu, resultadoarea, resultadopib, resultadoponto, resultadodensi, resultadopibpercapita, resultadosuper;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Cadastro Carta 1:
    printf("Carta1:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (01-04): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade (Sem Espaço): ");
    scanf("%s", nome1);
    printf("Digite a População: ");
    scanf("%ld", &populacao1);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &ponto1);

    // Cadastro Carta 2:
    printf("\nCarta2:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (01-04): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade (Sem Espaço): ");
    scanf("%s", nome2);
    printf("Digite a População: ");
    scanf("%ld", &populacao2);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &ponto2);

    // Calculo de densidade e PIB per capita da carta 1
    densidade1 = (float) populacao1 / area1;
    pibpercapita1 = (float) (pib1 * 1000000000) / populacao1;


    // Calculo de densidade e PIB per capita da carta 2
    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = (float) (pib2 * 1000000000) / populacao2;
    
    // Densidade inversa
    float densidadeinver1 = 1 / densidade1;
    float densidadeinver2 = 1 / densidade2;

    // Calculando Super Poder das cartas
    superpoder1 = (float) populacao1 + area1 + pib1 + ponto1 + pibpercapita1 + densidadeinver1;
    superpoder2 = (float) populacao2 + area2 + pib2 + ponto2 + pibpercapita2 + densidadeinver2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Exibição Carta 1:
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ponto1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    // Exibição Carta 2:
    printf("\nCarta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);


    // Comparação das cartas
    resultadopopu = populacao1 > populacao2;
    resultadoarea = area1 > area2;
    resultadopib = pib1 > pib2;
    resultadoponto = ponto1 > ponto2;
    resultadodensi = densidade1 < densidade2;
    resultadopibpercapita = pibpercapita1 > pibpercapita2;
    resultadosuper = superpoder1 > superpoder2;


    // Exibição da Comparação
    printf("\nComparação das Cartas\n");
    printf("Na comparação: 1 = Carta1 venceu e 0 = Carta2 venceu\n");
    printf("População: %d\n", resultadopopu);
    printf("Área: %d\n", resultadoarea);
    printf("PIB: %d\n", resultadopib);
    printf("Pontos Turístico: %d\n", resultadoponto);
    printf("Densidade Populacional: %d\n", resultadodensi);
    printf("PIB per capita: %d\n", resultadopibpercapita);
    printf("Super Poder: %d\n", resultadosuper);

    return 0;
}
