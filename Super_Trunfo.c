#include <stdio.h>

int main() {

    // Variáveis da Carta 01
    char Estado, Código[8], Cidade[50]; 
    int População, Pontos_Turísticos;
    float Área_em_Km2, PIB;

    // Variáveis da Carta 02
    char Estado2, Código2[8], Cidade2[50]; 
    int População2, Pontos_Turísticos2;
    float Área_em_Km2_2, PIB2;


    printf("Carta 01 \n");
    
    printf("Estado: \n");
    scanf(" %c", &Estado); 
    
    printf("Código: \n");
    scanf("%s", Código);
    
    printf("Cidade: \n");
    scanf("%s", Cidade);
    
    printf("População: \n");
    scanf(" %d", &População);
    
    printf("Pontos Turísticos: \n");
    scanf(" %d", &Pontos_Turísticos);
    
    printf("Área: \n");
    scanf(" %f", &Área_em_Km2);
    
    printf("PIB: \n");
    scanf(" %f", &PIB);


    printf( "\nCarta 02 \n"); 
    
    printf("Estado: \n");
    scanf(" %c", &Estado2); 
    
    printf("Código: \n");
    scanf("%s", Código2);
    
    printf("Cidade: \n");
    scanf("%s", Cidade2);
    
    printf("População: \n");
    scanf(" %d", &População2);
    
    printf("Pontos Turísticos: \n");
    scanf(" %d", &Pontos_Turísticos2);
    
    printf("Área: \n");
    scanf(" %f", &Área_em_Km2_2);
    
    printf("PIB: \n");
    scanf(" %f", &PIB2);


    printf("\nLeitura concluída.\n");

    return 0;
}