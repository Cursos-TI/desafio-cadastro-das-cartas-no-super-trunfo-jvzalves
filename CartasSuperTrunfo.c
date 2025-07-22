#include <stdio.h>

int main()
{
    int letter;
    char cityName[50];
    char population[50];
    float area;
    float pib;
    int numberTouristsAttractions;

    printf("Escolha o número da cidade (1 ou 2): ");
    scanf("%d", &letter);

    if (letter != 2)
    {
        printf("\nDigite o nome da cidade: ");
        scanf("%s", cityName);

        printf("População: ");
        scanf("%s", population);

        printf("Área (km²): ");
        scanf("%f", &area);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &numberTouristsAttractions);

        // Segunda cidade
        printf("\nDigite o nome da próxima cidade: ");
        scanf("%s", cityName);

        printf("População: ");
        scanf("%s", population);

        printf("Área (km²): ");
        scanf("%f", &area);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &numberTouristsAttractions);

        printf("\n--- Dados da Cidade ---\n");
        printf("Número da cidade: %d\n", letter);
        printf("Nome da cidade: %s\n", cityName);
        printf("População: %s\n", population);
        printf("Área: %.2f km²\n", area);
        printf("Nº de pontos turísticos: %d\n", numberTouristsAttractions);

        printf("\n--- Dados da Cidade ---\n");
        printf("Número da cidade: %d\n", letter);
        printf("Nome da cidade: %s\n", cityName);
        printf("População: %s\n", population);
        printf("Área: %.2f km²\n", area);
        printf("Nº de pontos turísticos: %d\n", numberTouristsAttractions);
    }
    else
    {
        printf("Escolha a carta 1 ou 2!\n");
    }

    return 0;
}
