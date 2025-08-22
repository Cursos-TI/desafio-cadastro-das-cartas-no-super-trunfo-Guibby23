#include <stdio.h>

int main () {

char codigo1[4], codigo2[4];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;

// Primeira Carta

printf ("Codigo da carta 1:" );
scanf ("%3s", codigo1);

printf ("População: ");
scanf ("%d", &populacao1);

printf ("Area: ");
scanf ("%f", &area1);

printf ("PIB: ");
scanf ("%f", &pib1);

printf ("Pontos Turisticos : ");
scanf ("%d", &pontos1);

// Segunda Carta

printf ("\nCodigo da carta 2:" );
scanf ("%3s", codigo2);

printf ("População: ");
scanf ("%d", &populacao2);

printf ("Area: ");
scanf ("%f", &area2);

printf ("PIB: ");
scanf ("%f", &pib2);

printf ("Pontos Turisticos : ");
scanf ("%d", &pontos2);

// Dados Cadastrados 

printf("\nCarta %s ->\nPopulação: %d \nArea: %.2f \nPib: %.2f \nPontos Turisticos:%d",
    codigo1 , populacao1, area1, pib1, pontos1);

printf("\nCarta %s ->\nPopulação: %d \nArea: %.2f \nPib: %.2f \nPontos Turisticos:%d", 
    codigo2 , populacao2, area2, pib2, pontos2);
    
    return 0;
}

}
