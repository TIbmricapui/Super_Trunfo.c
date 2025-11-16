#include <stdio.h>

int main() {

    // Variáveis da Carta 01
 char Estado[20], Código[8], cidade[50];
 int populacao,pontoturistico;
float area, pib;

//Variáveis da Carta 02
char Estado2[20], Código2[8], Cidade2[50];
    int populacao2,pontoturistico2;
    float area2,pib2;


printf("Carta 01 \n");
printf("Estado: \n");
scanf("%s", Estado);
printf("Código: \n");
scanf("%s", Código);
printf("Cidade: \n");
scanf("%s", cidade);
printf("População: \n");
scanf("%d", &populacao);
printf("Pontos Turísticos: \n");
scanf("%d", &pontoturistico);
printf("Área: \n");
scanf("%f", &area);
printf("PIB: \n");
scanf("%f", &pib);


printf( "Carta 02 \n"); 
printf("Estado: \n");
scanf("%s", Estado2);
printf("Código: \n");
scanf("%s", Código2);
printf("Cidade: \n");
scanf("%s", Cidade2);
printf("População: \n");
scanf("%d", &populacao2);
printf("Pontos Turísticos: \n");
scanf("%d", &pontoturistico2);
printf("Área: \n");
scanf("%f", &area2);
printf("PIB: \n");
scanf("%f", &pib2);

printf("CARTA 01\n");
printf("ESTADO: %s\n", Estado);
printf("CÓDIGO: %s\n", Código);
printf("CIDADE: %s\n", cidade);
printf("POPULAÇÃO: %d\n", populacao);
printf("PONTOS TÚRISTICOS: %d\n", pontoturistico);
printf("ÁREA: %f\n", area);
printf("PIB: %f\n", pib);

printf("CARTA 02\n");
printf("ESTADO: %s\n", Estado2);
printf("CÓDIGO: %s\n", Código2);
printf("CIDADE: %s\n", Cidade2);
printf("POPULAÇÃO: %d\n", populacao2);
printf("PONTOS TÚRISTICOS: %d\n", pontoturistico2);
printf("ÁREA: %f\n", area2);
printf("PIB: %f\n", pib2);




return 0;
}



