#include <stdio.h>

int main() {

    // --- Variáveis da Carta 01 ---
    char Estado[20], Código[8], cidade[50];
    int populacao, pontoturistico;
    float area, pib;

    // --- Variáveis da Carta 02 ---
    char Estado2[20], Código2[8], Cidade2[50];
    int populacao2, pontoturistico2;
    float area2, pib2;


    printf("--- Cadastro Carta 01 ---\n");
    
    // CORREÇÃO: Usando scanf(" %[^\n]", ...) para strings
    // Isso permite nomes com espaços (ex: "Rio de Janeiro/São Paulo") e limpa o buffer.
    printf("Estado: \n");
    scanf(" %[^\n]", Estado);
    printf("Código: \n");
    scanf(" %[^\n]", Código);
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


    printf("\n--- Cadastro Carta 02 ---\n"); 
    
    // CORREÇÃO: Usando scanf(" %[^\n]", ...) para strings
    printf("Estado: \n");
    scanf(" %[^\n]", Estado2);
    printf("Código: \n");
    scanf(" %[^\n]", Código2);
    printf("Cidade: \n");
    scanf(" %[^\n]", Cidade2);
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Pontos Turísticos: \n");
    scanf("%d", &pontoturistico2);
    printf("Área: \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);

    

    printf("\n   RESUMO DOS DADOS   \n");
  

    printf("\n--- CARTA 01 ---\n");
    printf("ESTADO: %s\n", Estado);
    printf("CÓDIGO: %s\n", Código);
    printf("CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %d\n", populacao);
    printf("PONTOS TÚRISTICOS: %d\n", pontoturistico);
    printf("ÁREA: %.2f\n", area); 
    printf("PIB: %.2f\n", pib);   

    printf("\n--- CARTA 02 ---\n");
    printf("ESTADO: %s\n", Estado2);
    printf("CÓDIGO: %s\n", Código2);
    printf("CIDADE: %s\n", Cidade2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("PONTOS TÚRISTICOS: %d\n", pontoturistico2);
    printf("ÁREA: %.2f\n", area2); 
    printf("PIB: %.2f\n", pib2);   
 

    return 0;
}