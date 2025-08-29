#include <stdio.h>

int main(){
    char pais1[20], pais2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2, resultado1, resultado2;
    int primeiroAtributo, segundoAtributo;
    float soma1, soma2, atributo1carta1, atributo2carta1, atributo1carta2, atributo2carta2;


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

    // Menu escolha atributos
    
    printf("### Bem-vindo ao jogo ### \n");
    printf("Selecione o primeiro atributo \n");
    printf("1. Comparar população \n");
    printf("2. Comparar área \n");
    printf("3. Comparar PIB \n");
    printf("4. Comparar pontos turísticos \n");
    printf("5. Comparar densidade demográfica \n");
    printf("Escolha um atributo \n");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 1:
        printf("Você escolheu a opção população \n");
        printf("Carta 1 %s: %lu habitantes \n", pais1, populacao1);
        printf("Carta 2 %s: %lu habitantes \n", pais2, populacao2);
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        atributo1carta1 = populacao1;
        atributo1carta2 = populacao2;

        break;
        
        case 2:
        printf("Você escolheu a opção área \n");
        printf("Carta 1 %s: %.2f km² \n", pais1, area1);
        printf("Carta 2 %s: %.2f km² \n", pais2, area2);
        resultado1 = area1 > area2 ? 1 : 0;
        atributo1carta1 = area1;
        atributo1carta2 = area2;
        break;
        
        case 3:
        printf("Você escolheu a opção PIB \n");
        printf("Carta 1 %s: R$ %f \n", pais1, pib1);
        printf("Carta 2 %s: RS %f \n", pais2, pib2);
        resultado1 = pib1 > pib2 ? 1 : 0;
        atributo1carta1 = pib1;
        atributo1carta2 = pib2;
        break;
        
        case 4:
        printf("Você escolheu a opção pontos turísticos \n");
        printf("Carta 1 %s: %d pontos turísticos \n", pais1, pontos1);
        printf("Carta 2 %s: %d pontos turísticos \n", pais2, pontos2);
        resultado1 = pontos1 > pontos2 ? 1 : 0;
        atributo1carta1 = pontos1;
        atributo1carta2 = pontos2;
        break;
        
        case 5:
        printf("Você escolheu a opção densidade demográfica \n");
        printf("Carta 1 %s: %f hab/km² \n", pais1, densidade1);
        printf("Carta 2 %s: %f hab/km² \n", pais2, densidade2);
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        atributo1carta1 = densidade1;
        atributo1carta2 = densidade2;
        break;
    
    default:
    printf("Opção inválida");
        break;
    }

    printf("Selecione o segundo atributo \n");
    printf("1. Comparar população \n");
    printf("2. Comparar área \n");
    printf("3. Comparar PIB \n");
    printf("4. Comparar pontos turísticos \n");
    printf("5. Comparar densidade demográfica \n");
    printf("Escolha um atributo \n");
    scanf("%d", &segundoAtributo);
    
    if (primeiroAtributo == segundoAtributo){
        printf("Você escolheu o mesmo atributo \n");
    } else {
        switch (segundoAtributo)
        {
        case 1:
        printf("Você escolheu a opção população \n");
        printf("Carta 1 %s: %lu habitantes \n", pais1, populacao1);
        printf("Carta 2 %s: %lu habitantes \n", pais2, populacao2);
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        atributo2carta1 = populacao1;
        atributo2carta2 = populacao2;

        break;
        
        case 2:
        printf("Você escolheu a opção área \n");
        printf("Carta 1 %s: %.2f km² \n", pais1, area1);
        printf("Carta 2 %s: %.2f km² \n", pais2, area2);
        resultado2 = area1 > area2 ? 1 : 0;
        atributo2carta1 = area1;
        atributo2carta2 = area2;
        break;
        
        case 3:
        printf("Você escolheu a opção PIB \n");
        printf("Carta 1 %s: R$ %f \n", pais1, pib1);
        printf("Carta 2 %s: RS %f \n", pais2, pib2);
        resultado2 = pib1 > pib2 ? 1 : 0;
        atributo2carta1 = pib1;
        atributo2carta2 = pib2;
        break;
        
        case 4:
        printf("Você escolheu a opção pontos turísticos \n");
        printf("Carta 1 %s: %d pontos turísticos \n", pais1, pontos1);
        printf("Carta 2 %s: %d pontos turísticos \n", pais2, pontos2);
        resultado2 = pontos1 > pontos2 ? 1 : 0;
        atributo2carta1 = pontos1;
        atributo2carta2 = pontos2;
        break;
        
        case 5:
        printf("Você escolheu a opção densidade demográfica \n");
        printf("Carta 1 %s: %f hab/km² \n", pais1, densidade1);
        printf("Carta 2 %s: %f hab/km² \n", pais2, densidade2);
        resultado2 = densidade1 < densidade2 ? 1 : 0;
        atributo2carta1 = densidade1;
        atributo2carta2 = densidade2;
        break;
    
    default:
    printf("Opção inválida");
        break;
    } 
    }
//Comparação dos dois atributos

if ((resultado1 && resultado2) ==1)
{
    printf("A carta 1 %s tem os dois atributos escolhidos maiores! \n", pais1);

} else if (resultado1 != resultado2)
{
    printf("Cada carta vence em um atributo! \n");

} else{
    printf("A Carta 2 %s tem os dois atributos escolhidos maiores! \n", pais2);
}

//Comparação soma

soma1 = atributo1carta1 + atributo2carta1;
soma2 = atributo1carta2 + atributo2carta2;

if (soma1 > soma2)
{
    printf("A carta 1 %s é a vencedora!\n", pais1);
} else if (soma1 == soma2)
{
    printf("O jogo empatou \n");
} else{
    printf("A carta 2 %s é a vencedora! \n", pais2);
}

    printf("***Fim do Jogo***");


    return 0;

}
