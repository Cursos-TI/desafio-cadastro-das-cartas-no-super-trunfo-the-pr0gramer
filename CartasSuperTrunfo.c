#include <stdio.h>

int main() {
    char Estado1 = 'A';
    char Codigo1[4] = "A01";
    char Cidade1[50], cidade1[50] = "Belo Horizonte";
    int Populacao1 = 2315560;
    double Area1 = 331.354;
    double PIB1 = 105.03;
    int Pontos_Turisticos1 = 100;
    float Densidade_Populacional1 = (float) (Populacao1 / Area1);
    float PIB_per_Capita1 = (float) (Populacao1 / PIB1);

    printf("Digite o estado: ");
    scanf("%c", &Estado1);
    printf("Estado: %c\n", Estado1);
    printf("Digite o código: ");
    scanf("%s", &Codigo1);
    printf("Código: %s\n", Codigo1);
    printf("Digite a cidade: ");
    scanf("%s %s", &Cidade1, &cidade1);
    printf("Cidade: %s %s\n", Cidade1, cidade1);
    printf("Digite a população: ");
    scanf("%d", &Populacao1);
    printf("População: %d\n", Populacao1);
    printf("Digite a área: ");
    scanf("%f", &Area1);
    printf("Área: %.3f km²\n", Area1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("PIB: %.2f Bilhões\n", PIB1);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos1);
    printf("Pontos Turísticos: %d\n", Pontos_Turisticos1);
    printf("Densidade Populacional: %.2f\n", Densidade_Populacional1);
    printf("PIB per Capita: %.2f\n", PIB_per_Capita1);
    printf("\n");
    

    char Estado2 = 'B';
    char Codigo2[4] = "B02";
    char Cidade2[50], cidade2[50] = "São Paulo";
    int Populacao2 = 11451999;
    float Area2 = 1.521;
    float PIB2 = 3.5;
    int Pontos_Turisticos2 = 200;
    float Densidade_Populacional2 = (float) (Populacao2 / Area2);
    float PIB_per_Capita2 = (float) (Populacao2 / PIB2);

    printf("Digite o estado: ");
    scanf(" %c", &Estado2);
    printf("Estado: %c\n", Estado2);
    printf("Digite o código: ");
    scanf("%s", &Codigo2);
    printf("Código: %s\n", Codigo2);
    printf("Digite a cidade: ");
    scanf("%s %s", &Cidade2, &cidade2);
    printf("Cidade: %s %s\n", Cidade2, cidade2);
    printf("Digite a população: ");
    scanf("%d", &Populacao2);
    printf("População: %d\n", Populacao2);
    printf("Digite a área: ");
    scanf("%f", &Area2);
    printf("Área: %.3f km²\n", Area2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("PIB: %.1f Trilhões\n", PIB2);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos2);
    printf("Pontos Turísticos: %d\n", Pontos_Turisticos2);
    printf("Densidade Populacional: %.2f\n", Densidade_Populacional2);
    printf("PIB per Capita: %.2f\n", PIB_per_Capita2);

    return 0;
}