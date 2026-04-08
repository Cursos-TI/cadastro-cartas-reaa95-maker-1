#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char est1[7], est2[7], cod1[4], cod2[4], nome1[20], nome2[20];
    float area1, pib1, area2, pib2;
    int tur1, pop1, pop2, tur2;

  // Área para entrada de dados


 
    printf("digite  Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", &est1);

    printf("digite o codigo da carta: \n");
    scanf("%s", &cod1);

    printf("digite o nome da cidade: \n");
    scanf("%s", &nome1);

    printf("digite o numero da população: \n");
    scanf("%d", &pop1);

    printf("digite a area total: \n");
    scanf("%f", &area1);

    printf("digite o pib: \n");
    scanf("%f", &pib1);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &tur1);

    printf("vamos seguir agora para a carta seguinte! \n");

    printf("digite  Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", &est2);

    printf("digite o codigo da carta: \n");
    scanf("%s", &cod2);

    printf("digite o nome da cidade: \n");
    scanf("%s", &nome2);

    printf("digite o numero da população: \n");
    scanf("%d", &pop2);

    printf("digite a area total: \n");
    scanf("%f", &area2);

    printf("digite o pib: \n");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &tur2);

  // Área para exibição dos dados da cidade

    printf("essas são as caracteristicas da primeira carta! \n");
    printf("letra: %s \n codigo: %s \n nome do estado: %s \n população: %d \n area: %2f km² \n pib: %2f \n pontos turisticos: %d \n", est1, cod1, nome1, pop1, area1, pib1, tur1);

    printf("essas são as caracteristicas da segunda carta! \n");
    printf("letra: %s \n codigo: %s \n nome do estado: %s \n população: %d \n area: %2f km² \n pib: %2f \n pontos turisticos: %d \n", est2, cod2, nome2, pop2, area2, pib2, tur2);

return 0;
} 
