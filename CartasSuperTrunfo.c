#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char est1[5], est2[5], cod1[10], cod2[10], nome1[50], nome2[50];
    float area1, pib1, area2, pib2;
    int tur1, tur2;
    unsigned long int pop1, pop2;
    float den1, den2;
    float pibc1, pibc2;
    float superPoder1, superPoder2;

  // Área para entrada de dados


 
    printf("digite  Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", est1);

    printf("digite o codigo da carta: \n");
    scanf("%s", cod1);

    printf("digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("digite o numero da população: \n");
    scanf("%lu", &pop1);

    printf("digite a area total: \n");
    scanf("%f", &area1);

    printf("digite o pib: \n");
    scanf("%f", &pib1);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &tur1);

    printf("vamos seguir agora para a carta seguinte! \n");

    printf("digite  Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", est2);

    printf("digite o codigo da carta: \n");
    scanf("%s", cod2);

    printf("digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("digite o numero da população: \n");
    scanf("%lu", &pop2);

    printf("digite a area total: \n");
    scanf("%f", &area2);

    printf("digite o pib: \n");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &tur2);

  // area para cálculos dos atributos derivados

    den1 = pop1 / area1;
    den2 = pop2 / area2;

    pibc1 = pib1 / pop1;
    pibc2 = pib2 / pop2;

    superPoder1 = (float)(pop1 + area1 + pib1 + tur1 + 1/den1);
    superPoder2 = (float)(pop2 + area2 + pib2 + tur2 + 1/den2);

  // Área para exibição dos dados da cidade

    printf("essas são as caracteristicas da primeira carta! \n");
    printf("letra: %s \n", est1);
    printf("codigo: %s \n", cod1); 
    printf("nome do estado: %s \n", nome1);
    printf("população: %lu \n", pop1);
    printf("area: %.2f km² \n", area1);
    printf("pib: %.2f \n", pib1);
    printf("pontos turisticos: %d \n", tur1);
    printf("Densidade Populacional: %.2f \n", den1);
    printf("PIB per Capita: %.2f \n", pibc1);

    printf("essas são as caracteristicas da segunda carta! \n");
    printf("letra: %s \n", est2);
    printf("codigo: %s \n", cod2); 
    printf("nome do estado: %s \n", nome2);
    printf("população: %lu \n", pop2);
    printf("area: %.2f km² \n", area2);
    printf("pib: %.2f \n", pib2);
    printf("pontos turisticos: %d \n", tur2);
    printf("Densidade Populacional: %.2f \n", den2);
    printf("PIB per Capita: %.2f \n", pibc2);

    // area para comparação entre cartas

    printf("população: carta 1 venceu (%d) \n", pop1 > pop2);
    printf("area: carta 1 venceu (%d) \n", area1 > area2);
    printf("pib: carta 1 venceu (%d) \n", pib1 > pib2);
    printf("pontos turisticos: carta 1 venceu (%d) \n", tur1 > tur2);
    printf("Densidade Populacional: carta 1 venceu (%d) \n", den1 < den2);
    printf("PIB per Capita: carta 1 venceu (%d) \n", pibc1 > pibc2);
    printf("super poder: carta 1 venceu (%d) \n", superPoder1 > superPoder2);


return 0;
} 
