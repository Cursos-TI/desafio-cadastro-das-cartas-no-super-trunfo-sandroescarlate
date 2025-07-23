#include <stdio.h>
#include <string.h> // Para a função strcspn, útil ao usar fgets para remover o '\n' 

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Sandro Escarlate

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // --- Declaração de variáveis para a Carta 1 ---
    char estado1;
    char codigoCarta1[5]; // Ex: A01 (3 caracteres) + '\0' (1 caractere) = 4, mas 5 para segurança [cite: 395]
    char nomeCidade1[50]; // Tamanho suficiente para o nome da cidade [cite: 395]
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- Declaração de variáveis para a Carta 2 ---
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- ENTRADA DE DADOS PARA A CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c é para consumir qualquer '\n' pendente [cite: 467, 468]

    // Limpar o buffer de entrada após scanf para char ou int, antes de usar fgets [cite: 483]
    while (getchar() != '\n'); 

    printf("Codigo da Carta (ex: A01): ");
    // Usar fgets para ler strings com espaços, por exemplo, se o codigo da carta tiver algo complexo no futuro 
    fgets(codigoCarta1, sizeof(codigoCarta1), stdin); 
    codigoCarta1[strcspn(codigoCarta1, "\n")] = 0; // Remove o '\n' lido por fgets 

    printf("Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &populacao1);
    while (getchar() != '\n'); // Limpar o buffer

    printf("Area (em km2): ");
    scanf("%f", &area1);
    while (getchar() != '\n'); // Limpar o buffer

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    while (getchar() != '\n'); // Limpar o buffer

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    while (getchar() != '\n'); // Limpar o buffer

    printf("\n"); // Adiciona uma linha em branco para separar as entradas [cite: 249]

    // --- ENTRADA DE DADOS PARA A CARTA 2 ---
    printf("--- Cadastro da Carta 2 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    while (getchar() != '\n'); 

    printf("Codigo da Carta (ex: B02): ");
    fgets(codigoCarta2, sizeof(codigoCarta2), stdin);
    codigoCarta2[strcspn(codigoCarta2, "\n")] = 0;

    printf("Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &populacao2);
    while (getchar() != '\n');

    printf("Area (em km2): ");
    scanf("%f", &area2);
    while (getchar() != '\n');

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    while (getchar() != '\n');

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    while (getchar() != '\n');

    printf("\n"); // Adiciona uma linha em branco [cite: 249]

    // --- EXIBIÇÃO DE DADOS PARA A CARTA 1 ---
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1); // %.2f para 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

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
