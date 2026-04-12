#include <stdio.h>
#include <stdlib.h> // Necessário para rand() e srand()
#include <time.h>   // Necessário para time()

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    srand(time(NULL));
    char est1[5], est2[5], cod1[10], cod2[10], nome1[50], nome2[50];
    float area1, pib1, area2, pib2;
    int tur1, tur2;
    unsigned long int pop1, pop2;
    float den1, den2;
    float pibc1, pibc2;
    float superPoder1, superPoder2;
    int escolhaAtributo;
    int escolhaComputador = rand() % 7 + 1; 

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

    // menu para escolha do atributo a ser comparado

    printf("escolha um atributo a ser comparado: \n");
    printf("1- população \n");
    printf("2- area \n");   
    printf("3- pib \n");
    printf("4- pontos turisticos \n");
    printf("5- densidade populacional \n");
    printf("6- pib per capita \n");
    printf("7- super poder \n");
    printf("8- duelo de atributos aleatórios \n");
    scanf("%d", &escolhaAtributo);

    if (escolhaAtributo == 8){
        escolhaAtributo = escolhaComputador;
    }

    printf("entre %s e %s\n", est1, est2);

    // switch para comparação entre cartas  

    switch (escolhaAtributo) {
        case 1: 
            if (pop1 > pop2) {
                printf("no atributo população o vencedor foi %s com %lu\n", nome1, pop1);
            }
            else if (pop2 > pop1) {
                printf("no atributo população o vencedor foi %s com %lu\n", nome2, pop2);
            }
            else {
                printf("empataram\n");
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("no atributo area o vencedor foi %s com %.2f\n", nome1, area1);
            }
            else if (area2 > area1) {
                printf("no atributo area o vencedor foi %s com %.2f\n", nome2, area2);
            }
            else {
                printf("empataram\n");
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("no atributo pib o vencedor foi %s com %.2f\n", nome1, pib1);
            }
            else if (pib2 > pib1) {
                printf("no atributo pib o vencedor foi %s com %.2f\n", nome2, pib2);
            }
            else {
                printf("empataram\n");
            }
            break;   
        case 4:   
            if (tur1 > tur2) {
                printf("no atributo pontos turisticos o vencedor foi %s com %d\n", nome1, tur1);
            }
            else if (tur2 > tur1) {
                printf("no atributo pontos turisticos o vencedor foi %s com %.d\n", nome2, tur2);
            }
            else {
                printf("empataram\n");
            }
            break;
        case 5: // o menor vence, contrario aos outros
            if (den1 < den2) {
                printf("no atributo densidade pop o vencedor foi %s com %.2f\n", nome2, den2);
            }
            else if (den2 < den1) {
                printf("no atributo densidade pop o vencedor foi %s com %.2f\n", nome1, den1);
            }
            else {
                printf("empataram\n");
            }
            break;
        case 6:
            if (pibc1 > pibc2) {
                printf("no atributo pib per capita o vencedor foi %s com %.2f\n", nome1, pibc1);
            }
            else if (pibc1 < pibc2) {
                printf("no atributo pib per capita o vencedor foi %s com %.2f\n", nome2, pibc2);
            }
            else {
                printf("empataram\n");
            }
            break;
        case 7:
            if (superPoder1 > superPoder2) {
                printf("no atributo super poder o vencedor foi %s com %.2f\n", nome1, superPoder1);
            }
            else if (superPoder1 < superPoder2) {
                printf("no atributo super poder o vencedor foi %s com %.2f\n", nome2, superPoder2);
            }
            else {
                printf("empataram\n");
            }
            break;
        default:
            // Isso lida com o requisito de segurança/opção inválida
            printf("\nErro: Opcao invalida. Escolha um numero de 1 a 8.\n");
            break;    
    }

    return 0;
} 
