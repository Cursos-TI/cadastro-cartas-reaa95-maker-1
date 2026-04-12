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
    int escolhaAtributo, escolhaAtributo1;
    int quantidadeAt;
    float valor1, valor2, valor3, valor4;
    float soma1, soma2;

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

    printf("gostaria de comparar apenas um (1) atributo ou dois (2)? \n");
    scanf("%d", &quantidadeAt);

    if (quantidadeAt == 1) {

        printf("escolha uma das opções de atributo a ser comparado: \n");
        printf("1- população \n");
        printf("2- area \n");   
        printf("3- pib \n");
        printf("4- pontos turisticos \n");
        printf("5- densidade populacional \n");
        printf("6- pib per capita \n");
        printf("7- super poder \n");
        printf("8- duelo de atributos aleatórios \n");
        scanf("%d", &escolhaAtributo);

    }else if (quantidadeAt == 2) {
        printf("escolha uma das opções de atributo a ser comparado: \n");
        printf("1- população \n");
        printf("2- area \n");   
        printf("3- pib \n");
        printf("4- pontos turisticos \n");
        printf("5- densidade populacional \n");
        printf("6- pib per capita \n");
        printf("7- super poder \n");
        scanf("%d", &escolhaAtributo);

        printf("Escolha o segundo atributo a ser comparado:\n");
        // Só imprime a opção se ela NÃO (!) foi a escolhida no passo anterior
        if (escolhaAtributo != 1) printf("1- população \n");
        if (escolhaAtributo != 2) printf("2- area \n");   
        if (escolhaAtributo != 3) printf("3- pib \n");
        if (escolhaAtributo != 4) printf("4- pontos turisticos \n");
        if (escolhaAtributo != 5) printf("5- densidade populacional \n");
        if (escolhaAtributo != 6) printf("6- pib per capita \n");
        if (escolhaAtributo != 7) printf("7- super poder \n");
        scanf("%d", &escolhaAtributo1);
    }   else {

        // Lógica: Se o segundo atributo FOR IGUAL ao primeiro, ou se NÃO for de 1 a 7...
        if (escolhaAtributo == escolhaAtributo1 || !(escolhaAtributo1 >= 1 && escolhaAtributo1 <= 7)) {
            printf("\n[ERRO] Opcao invalida ou repetida! O jogo vai calcular apenas o primeiro atributo.\n");
            quantidadeAt = 1; // Força o jogo a rodar só com 1 atributo para não quebrar
        }
          
    } 

    printf("entre %s e %s\n", est1, est2);

    // switch para comparação entre cartas  

    switch (escolhaAtributo) {
        case 1: 
            valor1 = pop1; 
            valor2 = pop2;
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
            valor1 = area1; 
            valor2 = area2;
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
            valor1 = pib1; 
            valor2 = pib2;
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
            valor1 = tur1; 
            valor2 = tur2;  
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
            valor1 = den1; 
            valor2 = den2;
            if (den1 < den2) {
                printf("no atributo densidade pop o vencedor foi %s com %.2f\n", nome1, den1); 
}
            else if (den2 < den1) {
                printf("no atributo densidade pop o vencedor foi %s com %.2f\n", nome2, den2);
            }
            else {
                printf("empataram\n");
            }
            break;
        case 6:
            valor1 = pibc1; 
            valor2 = pibc2;
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
            valor1 = superPoder1; 
            valor2 = superPoder2;
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
            printf("\nErro: Opcao invalida. Escolha um numero de 1 a 7.\n");
            break;    
    }

    if (quantidadeAt == 2 && escolhaAtributo != escolhaAtributo1) {
        switch (escolhaAtributo1) {

        case 1: 
            valor3 = pop1; 
            valor4 = pop2;
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
            valor3 = area1; 
            valor4 = area2;
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
            valor3 = pib1; 
            valor4 = pib2;
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
            valor3 = tur1; 
            valor4 = tur2;  
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
            valor3 = den1; 
            valor4 = den2;
            if (den1 < den2) {
                printf("no atributo densidade pop o vencedor foi %s com %.2f\n", nome1, den1); 
            }
            else if (den2 < den1) {
                printf("no atributo densidade pop o vencedor foi %s com %.2f\n", nome2, den2);
            }
            else {
                printf("empataram\n");
            }
            break;
        case 6:
            valor3 = pibc1; 
            valor4 = pibc2;
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
            valor3 = superPoder1; 
            valor4 = superPoder2;
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
            printf("\nErro: Opcao invalida. Escolha um numero de 1 a 7.\n");
            break;    
    
        }
    }
    
    soma1 = valor1 + valor3;
    soma2 = valor2 + valor4;

    if (quantidadeAt == 2){
        if (soma1 > soma2) {
        printf("%s ganhou na soma dos atributos escolhidos com um total de %.2f", nome1, soma1);
        }
        else if (soma1 < soma2) {
        printf("%s ganhou na soma dos atributos escolhidos com um total de %.2f", nome2, soma2);
        }
        else {
            printf("%s e %s obtiveram somas identicas e empataram com %2.f no atributo escolhido", nome1, nome2, soma1);
        
        }
    }

    return 0;
} 
