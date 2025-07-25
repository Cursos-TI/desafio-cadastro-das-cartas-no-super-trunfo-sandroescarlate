#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");
    // --- Declaração de variáveis para a PRIMEIRA Carta ---
    char estado1;
    char codigoCarta1[5]; // Espaço para 3 caracteres (ex: A01) + o nulo terminador '\0' 
    char nomeCidade1[50]; // Espaço para o nome da cidade (até 49 caracteres + '\0') 
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float PIBPerCapita1;

    // --- Declaração de variáveis para a SEGUNDA Carta ---
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float PIBPerCapita2;

    // --- ENTRADA DE DADOS PARA A CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n"); // Mensagem para o usuario 
    // Leitura do Estado (char)
    printf("Digite uma letra para o Estado (A-H): ");
    // O espaco antes de %c eh crucial para consumir o '\n' de uma entrada anterior
    scanf(" %c", &estado1);
    // Leitura do Codigo da Carta (string)
    printf("Digite um Codigo para Carta (ex: A01): ");
    scanf("%4s", codigoCarta1); // Limita a leitura a 4 caracteres
    // Leitura do Nome da Cidade (string)
    printf("Escreva o Nome da Cidade: "); 
    scanf(" %[^\n]", nomeCidade1); // Lê até a nova linha, permitindo espaços
    // Leitura da Populacao (int)
    printf("Insira a Populacao (Quantidade): ");
    scanf("%d", &populacao1);
    // Leitura da Area (float)
    printf("Insira a Area (em km²): ");
    scanf("%f", &area1);
    // Leitura do PIB (float)
    printf("Insira o PIB (em milhoes): ");
    scanf("%f", &pib1);
    // Leitura dos Pontos Turisticos (int)
    printf("Pontos Turisticos (Quantidade): ");
    scanf("%d", &pontosTuristicos1);
    // Calculo da Densidade Populacional
    densidadePopulacional1 = populacao1 / area1;
    // Calculo do PIB Per Capita
    PIBPerCapita1 = pib1 * 1000000 / populacao1;
    // Exibindo os resultados da Carta 1
    printf("\n--- Informacoes da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f milhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB Per Capita: %.2f\n", PIBPerCapita1);

    // --- ENTRADA DE DADOS PARA A CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n"); // Mensagem para o usuario 
    // Leitura do Estado (char)
    printf("Digite uma letra para o Estado (A-H): ");
    scanf(" %c", &estado2);
    // Leitura do Codigo da Carta (string)
    printf("Digite um Codigo para Carta (ex: A01): ");
    scanf("%4s", codigoCarta2); // Limita a leitura a 4 caracteres
    // Leitura do Nome da Cidade (string)
    printf("Escreva o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); // Lê até a nova linha, permitindo espaços
    // Leitura da Populacao (int)
    printf("Insira a Populacao (Quantidade): ");
    scanf("%d", &populacao2);
    // Leitura da Area (float)
    printf("Insira a Area (em km²): ");
    scanf("%f", &area2);
    // Leitura do PIB (float)
    printf("Insira o PIB (em milhoes): ");
    scanf("%f", &pib2);
    // Leitura dos Pontos Turisticos (int)
    printf("Pontos Turisticos (Quantidade): ");
    scanf("%d", &pontosTuristicos2);
    // Calculo da Densidade Populacional
    densidadePopulacional2 = populacao2 / area2;
    // Calculo do PIB Per Capita
    PIBPerCapita2 = pib2 * 1000000 / populacao2;
    // Exibindo os resultados da Carta 2
    printf("\n--- Informacoes da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f milhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB Per Capita: %.2f\n", PIBPerCapita2);
    // --- Comparacao das Cartas ---
    printf("\n--- Comparacao das Cartas ---\n");
    if (estado1 == estado2) {
        printf("As cartas pertencem ao mesmo estado: %c\n", estado1);
    } else {
        printf("As cartas pertencem a estados diferentes: %c e %c\n", estado1, estado2);
    }
    if (populacao1 > populacao2) {
        printf("Carta 1 tem maior populacao: %d > %d\n", populacao1, populacao2);
    } else if (populacao1 < populacao2) {
        printf("Carta 2 tem maior populacao: %d > %d\n", populacao2, populacao1);
    } else {
        printf("As cartas tem a mesma populacao: %d\n", populacao1);
    }
    if (area1 > area2) {
        printf("Carta 1 tem maior area: %.2f > %.2f km²\n", area1, area2);
    } else if (area1 < area2) {
        printf("Carta 2 tem maior area: %.2f > %.2f km²\n", area2, area1);
    } else {
        printf("As cartas tem a mesma area: %.2f km²\n", area1);
    }
    if (pib1 > pib2) {
        printf("Carta 1 tem maior PIB: %.2f > %.2f milhoes\n", pib1, pib2);
    } else if (pib1 < pib2) {
        printf("Carta 2 tem maior PIB: %.2f > %.2f milhoes\n", pib2, pib1);
    } else {
        printf("As cartas tem o mesmo PIB: %.2f milhoes\n", pib1);
    }
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 tem mais pontos turisticos: %d > %d\n", pontosTuristicos1, pontosTuristicos2);
    } else if (pontosTuristicos1 < pontosTuristicos2) {
        printf("Carta 2 tem mais pontos turisticos: %d > %d\n", pontosTuristicos2, pontosTuristicos1);
    } else {
        printf("As cartas tem o mesmo numero de pontos turisticos: %d\n", pontosTuristicos1);
    }
    if (densidadePopulacional1 > densidadePopulacional2) {
        printf("Carta 1 tem maior densidade populacional: %.2f > %.2f hab/km²\n", densidadePopulacional1, densidadePopulacional2);
    } else if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Carta 2 tem maior densidade populacional: %.2f > %.2f hab/km²\n", densidadePopulacional2, densidadePopulacional1);
    } else {
        printf("As cartas tem a mesma densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    }
    if (PIBPerCapita1 > PIBPerCapita2) {
        printf("Carta 1 tem maior PIB Per Capita: %.2f > %.2f\n", PIBPerCapita1, PIBPerCapita2);
    } else if (PIBPerCapita1 < PIBPerCapita2) {
        printf("Carta 2 tem maior PIB Per Capita: %.2f > %.2f\n", PIBPerCapita2, PIBPerCapita1);
    } else {
        printf("As cartas tem o mesmo PIB Per Capita: %.2f\n", PIBPerCapita1);
    }
    return 0;
    
}
