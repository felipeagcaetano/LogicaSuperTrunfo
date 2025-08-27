#include <stdio.h>

int main(){
    char pais1[20], pais2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    int opcao;

    //introdução
    printf("****Trabalho Super Trunfo***** \n");

    //carta01 entrada
    printf("Digite o país da primeira carta: \n");
    scanf("%s", &pais1);
    
    printf("Digite a população do primeiro país: \n");
    scanf("%lu", &populacao1);
    
    printf("Digite a área do primeiro país: \n");
    scanf("%f",&area1);
    
    printf("Digite o PIB do primeiro país: \n");
    scanf("%f", &pib1);
    
    printf ("Digite o número de pontos turísticos do primeiro país: \n");
    scanf("%d", &pontos1);

    densidade1 = (float) (populacao1 / area1);

    //carta02 entrada
    printf("Digite o país da segunda carta: \n");
    scanf("%s", &pais2);
    
    printf("Digite a população do segundo país: \n");
    scanf("%lu", &populacao2);
    
    printf("Digite a área do segundo país: \n");
    scanf("%f",&area2);
   
    printf("Digite o PIB do segundo país: \n");
    scanf("%f", &pib2);
    
    printf ("Digite o número de pontos turísticos do segundo país: \n");
    scanf("%d", &pontos2);

    densidade2 = (float) (populacao2 / area2);

    // Menu comparação entre as duas cartas
    
    printf("### Menu Principal ### \n");
    printf("1. Comparar população \n");
    printf("2. Comparar área \n");
    printf("3. Comparar PIB \n");
    printf("4. Comparar pontos turísticos \n");
    printf("5. Comparar densidade demográfica \n");
    printf("Escolha uma opção \n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        if (populacao1 > populacao2){
            printf ("O país %s com %lu habitantes ganhou do país %s com %lu habitantes \n", pais1, populacao1, pais2, populacao2);
        } else if (populacao2 > populacao1){
            printf("O país %s com %lu habitantes ganhou do país %s com %lu habitantes \n", pais2, populacao2, pais1, populacao1);
        } else{
            printf("Empate!");
        }
        break;

        case 2:
        if (area1 > area2){
            printf ("O país %s com %f km² ganhou do país %s com %f km² \n", pais1, area1, pais2, area2);
        } else if (area2 > area1){
            printf("O país %s com %f km² ganhou do país %s com %f km² \n", pais2, area2, pais1, area1);
        } else{
            printf("Empate!");
        }
        break;

        case 3:
        if (pib1 > pib2){
            printf ("O país %s com R$ %f de PIB ganhou do país %s com R$ %f de PIB \n", pais1, pib1, pais2, pib2);
        } else if (pib2 > pib1){
            printf("O país %s com R$ %f de PIB ganhou do país %s com R$ %f de PIB \n", pais2, pib2, pais1, pib1);
        } else{
            printf("Empate!");
        }
        break;

        case 4:
        if (pontos1 > pontos2){
            printf ("O país %s com %d pontos turísticos ganhou do país %s com %d pontos turísticos \n", pais1, pontos1, pais2, pontos2);
        } else if (pontos2 > pontos1){
            printf("O país %s com %d pontos turísticos ganhou do país %s com %d pontos turísticos \n", pais2, pontos2, pais1, pontos1);
        } else{
            printf("Empate!");
        }
        break;

         case 5:
        if (densidade1 < densidade2){
            printf ("O país %s com %f habitantes / km² ganhou do país %s com %f habitantes / km² \n", pais1, densidade1, pais2, densidade2);
        } else if (pontos2 < pontos1){
            printf("O país %s com %f habitantes / km² ganhou do país %s com %f habitantes / km² \n", pais2, densidade2, pais1, densidade1);
        } else{
            printf("Empate!");
        }
        break;
    
    default:
        printf("Opção inválida!");
        break;
    }


    return 0;

}
