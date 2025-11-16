#include <stdio.h>

int main() {

 
    // Variáveis da Carta 01
 char Estado[20], Código[8], cidade[50];
 int populacao,pontoturistico;
float area, pib, densidade,pibpercapita;


//Variáveis da Carta 02
char Estado2[20], Código2[8], Cidade2[50];
    int populacao2,pontoturistico2;
    float area2,pib2,densidade2,pibpercapita2;
    



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
scanf("%.2f", &area);
printf("PIB: \n");
scanf("%.2f", &pib);

densidade = (float) populacao / area;
pibpercapita = pib / populacao;



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
scanf("%.2f", &area2);
printf("PIB: \n");
scanf("%.2f", &pib2);

densidade2 = (float) populacao2 / area2;
pibpercapita2 = pib2 / populacao2;

printf("CARTA 01\n");
printf("ESTADO: %s\n", Estado);
printf("CÓDIGO: %s\n", Código);
printf("CIDADE: %s\n", cidade);
printf("POPULAÇÃO: %d\n", populacao);
printf("PONTOS TÚRISTICOS: %d\n", pontoturistico);
printf("ÁREA: %.2f km²\n", area);
printf("PIB: %.2f bilhões\n", pib);
printf("DENSIDADE POPULACIONAL: %.2f hab/km²", densidade);
printf("PIB PER CAPITA: %.2f", pibpercapita);


printf("CARTA 02\n");
printf("ESTADO: %s\n", Estado2);
printf("CÓDIGO: %s\n", Código2);
printf("CIDADE: %s\n", Cidade2);
printf("POPULAÇÃO: %d\n", populacao2);
printf("PONTOS TÚRISTICOS: %d\n", pontoturistico2);
printf("ÁREA: %.2f km²\n", area2);
printf("PIB: %.2f bilhões\n", pib2);
printf("DENSIDADE POPULACIONAL: %.2f hab/km²", densidade2);
printf("PIB PER CAPITA: %.2f", pibpercapita2);


return 0;
}



