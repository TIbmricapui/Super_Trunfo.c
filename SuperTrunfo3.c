#include <stdio.h>

int main() {

    // --- Variáveis da Carta 01 ---
    char estado[20], codigo[8], cidade[50];
    unsigned long int populacao; // Tipo exigido pelo desafio
    int ponto_turistico;
    float area, pib;
    float densidade, pibpercapita, super_poder; 

    // --- Variáveis da Carta 02 ---
    char estado2[20], codigo2[8], cidade2[50];
    unsigned long int populacao2; // Tipo exigido pelo desafio
    int ponto_turistico2;
    float area2, pib2;
    float densidade2, pibpercapita2, super_poder2; 


    // -----------------------------------------------------------------
    //                  1. COLETA DE DADOS - CARTA 01
    // -----------------------------------------------------------------
    printf("--- CADASTRO CARTA 01 ---\n");

    // CORREÇÃO: %[^\n] ignora o buffer e lê até o Enter
    printf("Estado: \n");
    scanf(" %[^\n]", estado);
    printf("Código: \n");
    scanf(" %[^\n]", codigo);
    printf("Cidade: \n");
    scanf(" %[^\n]", cidade);
    printf("População: \n");
    scanf("%lu", &populacao); // %lu para unsigned long int
    printf("Pontos Turísticos: \n");
    scanf("%d", &ponto_turistico);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);


    // -----------------------------------------------------------------
    //                  2. CÁLCULOS CARTA 01
    // -----------------------------------------------------------------
    densidade = (float) populacao / area;
    pibpercapita = pib / populacao;
    super_poder = (float)populacao + area + pib + ponto_turistico + pibpercapita + (1.0f / densidade);


    // -----------------------------------------------------------------
    //                  3. COLETA DE DADOS - CARTA 02
    // -----------------------------------------------------------------
    printf("\n--- CADASTRO CARTA 02 ---\n"); 
    
    // CORREÇÃO: %[^\n] ignora o buffer e lê até o Enter
    printf("Estado: \n");
    scanf(" %[^\n]", estado2);
    printf("Código: \n");
    scanf(" %[^\n]", codigo2);
    printf("Cidade: \n");
    scanf(" %[^\n]", cidade2);
    printf("População: \n");
    scanf("%lu", &populacao2); // %lu para unsigned long int
    printf("Pontos Turísticos: \n");
    scanf("%d", &ponto_turistico2);
    printf("Área: \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);


    // -----------------------------------------------------------------
    //                  4. CÁLCULOS CARTA 02
    // -----------------------------------------------------------------
    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + ponto_turistico2 + pibpercapita2 + (1.0f / densidade2);


    //                  5. EXIBIÇÃO E COMPARAÇÃO

    // --- Comparação Lógica ---
    int c1_vence_populacao = populacao > populacao2;
    int c1_vence_area = area > area2;
    int c1_vence_pib = pib > pib2;
    int c1_vence_pontos = ponto_turistico > ponto_turistico2;
    int c1_vence_pib_per_capita = pibpercapita > pibpercapita2;
    int c1_vence_super_poder = super_poder > super_poder2;
    int c1_vence_densidade = densidade < densidade2; // Menor valor vence

    
    printf("          RESUMO DAS CARTAS\n");
  
    
    printf("\n--- CARTA 01 ---\n");
    printf("ESTADO: %s\n", estado);
    printf("CÓDIGO: %s\n", codigo);
    printf("CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %lu\n", populacao);
    printf("PONTOS TÚRISTICOS: %d\n", ponto_turistico);
    printf("ÁREA: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade); // CORREÇÃO: Adicionado \n
    printf("PIB PER CAPITA: %.2f\n", pibpercapita); // CORREÇÃO: Adicionado \n
    printf("SUPER PODER: %.2f\n", super_poder);

    printf("\n--- CARTA 02 ---\n");
    printf("ESTADO: %s\n", estado2);
    printf("CÓDIGO: %s\n", codigo2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %lu\n", populacao2);
    printf("PONTOS TÚRISTICOS: %d\n", ponto_turistico2);
    printf("ÁREA: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade2); // CORREÇÃO: Adicionado \n
    printf("PIB PER CAPITA: %.2f\n", pibpercapita2); // CORREÇÃO: Adicionado \n
    printf("SUPER PODER: %.2f\n", super_poder2);

  
    printf("\n  COMPARAÇÃO (1=C01 VENCE / 0=C02 VENCE)\n");
    
    printf("População: %d\n", c1_vence_populacao);
    printf("Área: %d\n", c1_vence_area);
    printf("PIB: %d\n", c1_vence_pib);
    printf("Pontos Turísticos: %d\n", c1_vence_pontos);
    printf("PIB Per Capita: %d\n", c1_vence_pib_per_capita);
    printf("Densidade (MENOR VENCE): %d\n", c1_vence_densidade);
    printf("SUPER PODER: %d\n", c1_vence_super_poder);

    return 0;
}
