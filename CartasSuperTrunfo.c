#include <stdio.h>

int main() {
    // Declaração das variáveis para os dados da primeira carta
    char state1;
    char cardCode1[4];
    char cityName1[100];
    int population1;
    float area1;
    float pib1;
    int touristSpots1;

    // Declaração das variáveis para os dados da segunda carta
    char state2;
    char cardCode2[4];
    char cityName2[100];
    int population2;
    float area2;
    float pib2;
    int touristSpots2;

    // Entrada dos dados para a primeira carta
    printf("Card 1\n");
    printf("Estado: ");
    scanf(" %c", &state1); // O espaço antes de %c é para capturar o caractere corretamente
    printf("Código: ");
    scanf("%s", cardCode1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cityName1); // Captura o nome da cidade até a nova linha
    printf("População: ");
    scanf("%d", &population1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &touristSpots1);

    // Entrada dos dados para a segunda carta
    printf("Card 2\n");
    printf("Estado: ");
    scanf(" %c", &state2);
    printf("Código: ");
    scanf("%s", cardCode2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cityName2); 
    printf("População: ");
    scanf("%d", &population2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &touristSpots2);

    // Exibição dos dados da primeira carta
    printf("\nCard 1:\n");
    printf("Estado: %c\n", state1);
    printf("Código: %s\n", cardCode1);
    printf("Nome da Cidade: %s\n", cityName1);
    printf("População: %d\n", population1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", touristSpots1);

    // Exibição dos dados da segunda carta
    printf("\nCard 2:\n");
    printf("Estado: %c\n", state2);
    printf("Código: %s\n", cardCode2);
    printf("Nome da Cidade: %s\n", cityName2);
    printf("População: %d\n", population2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", touristSpots2);

    return 0;
}