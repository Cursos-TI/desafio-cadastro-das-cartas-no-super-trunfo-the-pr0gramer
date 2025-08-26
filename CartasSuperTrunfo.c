int main()
{
    char Estado1 = 'A';
    char Codigo1[4] = "A01";
    char Cidade1[50], cidade1[50] = "Belo Horizonte";
    unsigned long int Populacao1 = 2315560;
    double Area1 = 331.354;
    double PIB1 = 105.05;
    int Pontos_Turisticos1 = 100;
    float Densidade_Populacional1 = (float)Populacao1 / (float)Area1;
    float PIB_per_Capita1 = (float)(PIB1 * 1e9) / (float)Populacao1;
    double Densidade_Inversa1 = (float)Area1 / (float)Populacao1;
    float Super_Poder1 = (float)Populacao1 + (float)Area1 + (float)(PIB1 * 1e9) + (float)Pontos_Turisticos1 + PIB_per_Capita1 + Densidade_Inversa1;
    int Menu_Interativo;
    int Resultado1, Resultado2;
    char Atributo1, Atributo2;


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
    scanf("%lu", &Populacao1);
    printf("População: %lu\n", Populacao1);
    printf("Digite a área: ");
    scanf("%f", &Area1);
    printf("Área: %.3f km²\n", Area1);
    printf("Digite o PIB: ");
    scanf("%lf", &PIB1);
    printf("PIB: %.2f Bilhões\n", PIB1);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos1);
    printf("Pontos Turísticos: %d\n", Pontos_Turisticos1);
    printf("Densidade Populacional: %.2f\n", Densidade_Populacional1);
    printf("PIB per Capita: %.2f\n", PIB_per_Capita1);
    printf("Densidade Inversa: %.9lf\n", Densidade_Inversa1);
    printf("Super Poder: %.2f\n", Super_Poder1);
    printf("\n");

    char Estado2 = 'B';
    char Codigo2[4] = "B02";
    char Cidade2[50], cidade2[50] = "São Paulo";
    unsigned long int Populacao2 = 11451999;
    double Area2 = 1.521;
    unsigned long long int PIB2 = 3500000000000ULL;
    int Pontos_Turisticos2 = 200;
    float Densidade_Populacional2 = (float)Populacao2 / (float)Area2;
    double PIB_per_Capita2 = (double)PIB2 / Populacao2;
    double Densidade_Inversa2 = (float)Area2 / (float)Populacao2;
    float Super_Poder2 = (float)Populacao2 + (float)Area2 + (float)PIB2 + (float)Pontos_Turisticos2 + (float)PIB_per_Capita2 + (float)Densidade_Inversa2;

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
    scanf("%lu", &Populacao2);
    printf("População: %lu\n", Populacao2);
    printf("Digite a área: ");
    scanf("%lf", &Area2);
    printf("Área: %.3lf km²\n", Area2);
    printf("Digite o PIB: ");
    scanf("%lf", &PIB2);
    printf("PIB: %.1f Trilhões\n", PIB2);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos2);
    printf("Pontos Turísticos: %d\n", Pontos_Turisticos2);
    printf("Densidade Populacional: %.2f\n", Densidade_Populacional2);
    printf("PIB per Capita: %.2lf\n", PIB_per_Capita2);
    printf("Densidade Inversa: %.10lf\n", Densidade_Inversa2);
    printf("Super Poder: %.2f\n", Super_Poder2);
    printf("\n");

    printf("Comparação de Cartas:\n");
    printf("População: Carta 2 Venceu: %d\n", Populacao1 > Populacao2);
    printf("Área: Carta 1 Venceu: %d\n", Area1 > Area2);
    printf("PIB: Carta 2 Venceu: %d\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 2 Venceu %d\n", Pontos_Turisticos1 > Pontos_Turisticos2);
    printf("Densidade Populacional: Carta 1 Venceu: %d\n", Densidade_Populacional1 < Densidade_Populacional2);
    printf("PIB per Capita: Carta 2 Venceu: %d\n", PIB_per_Capita1 > PIB_per_Capita2);
    printf("Densidade Inversa: Carta 1 Venceu: %d\n", Densidade_Inversa1 > Densidade_Inversa2);
    printf("Super Poder: Carta 2 Venceu: %d\n", Super_Poder1 > Super_Poder2);
    if (Populacao1 > Populacao2)
    {
        printf("A carte A01 venceu! \n");
    }
    else
    {
        printf("A carte A02 venceu! \n");
    }
    printf("\n");

    printf("** Menu Interativo: **\n");
    printf("1. População: Belo Horizonte: 2315560, São Paulo: 11451999;\n");
    printf("2. Área: Belo Horizonte: 331.354, São Paulo: 1.521; \n");
    printf("3. PIB: Belo Horizonte: 105.05, São Paulo: 3500000000000;\n");
    printf("4. Número de Pontos Turísticos: Belo Horizonte: 100 , São Paulo: 200; \n");
    printf("5. Densidade Demográfica: Belo Horizonte: 6988.18 , São Paulo: 7529256.50\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &Menu_Interativo);

    switch (Menu_Interativo){
        case 1: 
            if(Populacao1 > Populacao2){
                printf("Carta 1 venceu!\n");
            } else if(Populacao2 > Populacao1){
                printf("Carta 2 venceu!\n");
            } else{
                printf("Empate.\n");
            }
        break;

        case 2: 
            if(Area1 > Area2){
                printf("Carta 1 venceu!\n");
            } else if(Area2 > Area1){
                printf("Carta 2 venceu!\n");
            } else{
                printf("Empate.\n");
            }
        break;   

        case 3: 
            if(PIB1 > PIB2){
                printf("Carta 1 venceu!\n");
            } else if(PIB2 > PIB1){
                printf("Carta 2 venceu!\n"); 
            } else{
                printf("Empate.\n");
            }
        break;

        case 4: 
            if(Pontos_Turisticos1 > Pontos_Turisticos2){
                printf("Carta 1 venceu!\n");
            } else if(Pontos_Turisticos2 > Pontos_Turisticos1){
                printf("Carta 2 venceu!\n");
            } else{
                printf("Empate.\n");
            }
        break;   

        case 5: 
            if(Densidade_Populacional1 > Densidade_Populacional2){
                printf("Carta 1 venceu!\n");
            } else if(Densidade_Populacional2 > Densidade_Populacional1){
                printf("Carta 2 venceu!\n");
            } else{
                printf("Empate.\n");
            }
        break;

        default:
            printf("Opção Inválida.\n");
    }

    printf("** Bem-vindo ao Jogo de Atributos! **\n");
    printf("Escolha o primeiro atributo:\n");
    printf("2. Área: Belo Horizonte: 331.354, São Paulo: 1.521; \n");
    printf("3. PIB: Belo Horizonte: 105.05, São Paulo: 3500000000000;\n");
    printf("4. Número de Pontos Turísticos: Belo Horizonte: 100 , São Paulo: 200; \n");
    printf("5. Densidade Demográfica: Belo Horizonte: 6988.18 , São Paulo: 7529256.50\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &Menu_Interativo);

    return 0;
}