#include <stdio.h>
#include <string.h>

// Defina a estrutura
typedef struct {
    char estado;
    char codigo[5];
    char cidade[20];
    int habitantes;
    float area;
    float pib;
    int pontosturisticos;
} Carta;

int main() {
    // Dados da primeira carta
    Carta carta1;
    carta1.estado = 'A';
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.cidade, "Curitiba");
    carta1.habitantes = 234567;
    carta1.area = 1234.10;
    carta1.pib = 700.7;
    carta1.pontosturisticos = 30;

    printf("carta1:\n");
    printf("estado:%c\n", carta1.estado);
    printf("codigo:%s\n", carta1.codigo);
    printf("nome da cidade:%s\n", carta1.cidade);
    printf("habitantes:%d\n", carta1.habitantes);
    printf("area:%.2f km²\n", carta1.area);
    printf("pib:%.2f bilhoes de reais\n", carta1.pib);
    printf("pontosTuristicos:%d\n", carta1.pontosturisticos);

    // Dados da segunda carta
    Carta carta2;
    carta2.estado = 'B';
    strcpy(carta2.codigo, "B01");
    strcpy(carta2.cidade, "Florianopolis");
    carta2.habitantes = 456789;
    carta2.area = 5678.10;
    carta2.pib = 800.8;
    carta2.pontosturisticos = 40;

    printf("\ncarta2:\n");
    printf("estado:%c\n", carta2.estado);
    printf("codigo:%s\n", carta2.codigo);
    printf("nome da cidade:%s\n", carta2.cidade);
    printf("habitantes:%d\n", carta2.habitantes);
    printf("area:%.2f km²\n", carta2.area);
    printf("pib:%.2f bilhoes de reais\n", carta2.pib);
    printf("pontosTuristicos:%d\n", carta2.pontosturisticos);
}