#include <stdio.h>

int main() {

    // --- Variáveis da Carta 01 ---
    char estado[20], codigo[8], cidade[50];
    int populacao, pontoturistico;
    float area, pib, densidade, pibpercapita;

    // --- Variáveis da Carta 02 ---
    char estado2[20], codigo2[8], cidade2[50];
    int populacao2, pontoturistico2;
    float area2, pib2, densidade2, pibpercapita2;
    

    printf("    Carta 01    \n");

    // Aplicação da Solução: scanf(" %[^\n]", ...) para strings
    printf("Estado: \n");
    scanf(" %[^\n]", estado);
    printf("Código: \n");
    scanf(" %[^\n]", codigo);
    printf("Cidade: \n");
    scanf(" %[^\n]", cidade);
    printf("População: \n");
    scanf("%d", &populacao);
    printf("Pontos Turísticos: \n");
    scanf("%d", &pontoturistico);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);

    densidade = (float) populacao / area;
    pibpercapita = pib / populacao;


    printf("\n    Carta 02    \n"); 

    // Aplicação da Solução: scanf(" %[^\n]", ...) para strings
    printf("Estado: \n");
    scanf(" %[^\n]", estado2);
    printf("Código: \n");
    scanf(" %[^\n]", codigo2);
    printf("Cidade: \n");
    scanf(" %[^\n]", cidade2);
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Pontos Turísticos: \n");
    scanf("%d", &pontoturistico2);
    printf("Área: \n");
    scanf("%f", &area2); 
    printf("PIB: \n");
    scanf("%f", &pib2);

    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;


    printf("\n    RESUMO CARTA 01    \n");
    printf("ESTADO: %s\n", estado);
    printf("CÓDIGO: %s\n", codigo);
    printf("CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %d\n", populacao);
    printf("PONTOS TÚRISTICOS: %d\n", pontoturistico);
    printf("ÁREA: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade); 
    printf("PIB PER CAPITA: %.2f\n", pibpercapita); 

    printf("\n--- RESUMO CARTA 02 ---\n");
    printf("ESTADO: %s\n", estado2);
    printf("CÓDIGO: %s\n", codigo2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("PONTOS TÚRISTICOS: %d\n", pontoturistico2);
    printf("ÁREA: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade2); 
    printf("PIB PER CAPITA: %.2f\n", pibpercapita2); 


    return 0;
}