#include <stdio.h>  // Necessário para as funções printf() e scanf() [cite: 399]
#include <string.h> // Necessário para a função strcspn() [cite: 392]

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Sandro Escarlate

int main() {
    // --- Declaração de variáveis para a PRIMEIRA Carta ---
    char estado1;
    char codigoCarta1[5]; // Espaço para 3 caracteres (ex: A01) + o nulo terminador '\0' [cite: 395]
    char nomeCidade1[50]; // Espaço para o nome da cidade (até 49 caracteres + '\0') [cite: 395]
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- Declaração de variáveis para a SEGUNDA Carta ---
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- ENTRADA DE DADOS PARA A CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n"); // Mensagem para o usuario [cite: 408]

    // Leitura do Estado (char)
    printf("Estado (A-H): ");
    // O espaco antes de %c eh crucial para consumir o '\n' de uma entrada anterior [cite: 467, 468]
    scanf(" %c", &estado1);
    // Limpa o buffer de entrada apos scanf() para evitar problemas com fgets() 
    while (getchar() != '\n'); 

    // Leitura do Codigo da Carta (string)
    printf("Codigo da Carta (ex: A01): ");
    // fgets() eh usado para ler a linha inteira, incluindo espacos 
    fgets(codigoCarta1, sizeof(codigoCarta1), stdin);
    // strcspn() remove o caractere de nova linha '\n' que fgets() pode incluir [cite: 494]
    codigoCarta1[strcspn(codigoCarta1, "\n")] = 0;

    // Leitura do Nome da Cidade (string)
    printf("Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    // Leitura da Populacao (int)
    printf("Populacao: ");
    scanf("%d", &populacao1);
    while (getchar() != '\n'); // Limpa o buffer

    // Leitura da Area (float)
    printf("Area (em km2): ");
    scanf("%f", &area1);
    while (getchar() != '\n'); // Limpa o buffer

    // Leitura do PIB (float)
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    while (getchar() != '\n'); // Limpa o buffer

    // Leitura do Numero de Pontos Turisticos (int)
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    while (getchar() != '\n'); // Limpa o buffer

    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade [cite: 249]

    // --- ENTRADA DE DADOS PARA A CARTA 2 ---
    printf("--- Cadastro da Carta 2 ---\n"); // Mensagem para o usuario

    // Leitura do Estado (char)
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    while (getchar() != '\n'); 

    // Leitura do Codigo da Carta (string)
    printf("Codigo da Carta (ex: B02): ");
    fgets(codigoCarta2, sizeof(codigoCarta2), stdin);
    codigoCarta2[strcspn(codigoCarta2, "\n")] = 0;

    // Leitura do Nome da Cidade (string)
    printf("Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    // Leitura da Populacao (int)
    printf("Populacao: ");
    scanf("%d", &populacao2);
    while (getchar() != '\n');

    // Leitura da Area (float)
    printf("Area (em km2): ");
    scanf("%f", &area2);
    while (getchar() != '\n');

    // Leitura do PIB (float)
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    while (getchar() != '\n');

    // Leitura do Numero de Pontos Turisticos (int)
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    while (getchar() != '\n');

    printf("\n"); // Adiciona uma linha em branco

    // --- EXIBIÇÃO DE DADOS PARA A CARTA 1 ---
    printf("--- Informacoes da Carta 1 ---\n");
    printf("Estado: %c\n", estado1); // Exibe o caractere [cite: 431, 444, 445, 446]
    printf("Codigo: %s\n", codigoCarta1); // Exibe a string [cite: 432]
    printf("Nome da Cidade: %s\n", nomeCidade1); // Exibe a string [cite: 432]
    printf("Populacao: %d\n", populacao1); // Exibe o inteiro [cite: 427, 438, 439]
    // %.2f formata o float para 2 casas decimais 
    printf("Area: %.2f km2\n", area1); 
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1); // Exibe o inteiro [cite: 427]

    printf("\n"); // Adiciona uma linha em branco [cite: 249]

    // --- EXIBIÇÃO DE DADOS PARA A CARTA 2 ---
    printf("--- Informacoes da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0; // Indica que o programa terminou com sucesso [cite: 250]
}
