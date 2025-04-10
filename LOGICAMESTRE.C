#include <stdio.h>

int main () {
// variaveis para armazenar dados de todas as cartas
    char estado1,estado2;
    char cidade1[50], cidade2[50];
    char codigo1[4], codigo2[4];
    unsigned long int populacao1 , populacao2;
    int pontos1, pontos2;
    float area1 ,area2;
    float pib1, pib2;
    float densidade1 ,densidade2;
    float pib_per_capita1 ,pib_per_capita2;
    float superPoder1, superPoder2;
    int vitoriasCarta1 = 0 , vitoriasCarta2 = 0;
    
    // inserir os Dados da primeira Carta
    printf("\n");
    printf("BEM VINDO AO JOGO DO SUPERTRUNFO\n");
    printf("\n");
    
printf("Digite os dados da Carta n 1\n");

printf("Digite o estado de (A-H) :\n");
scanf("  %c" , &estado1);

printf("Codigo (ex: A01):\n");
scanf("%s" , &codigo1);

printf("Digite o nome da cidade :\n");
scanf("%s" , &cidade1);

printf("Digite a Populacao :\n");
scanf("%lu", &populacao1);

printf("Digite a area (Km²): \n");
scanf("%f", &area1);

printf("Digite o pib (Bilhoes de reais): \n");
scanf("%f" , &pib1);

printf("Digite os numeros de pontos turisticos :\n");
scanf("%d" , &pontos1);
printf("\n");

// Calcular densidade e o pib per capita 
densidade1 = (float) populacao1 / area1;
pib_per_capita1 = (float) pib1 / populacao1;

 // Cálculos para a primeira carta
 densidade1 = (float)populacao1 / area1;
 pib_per_capita1 = (float)pib1 / populacao1;
 superPoder1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1 / densidade1);

//Exibir os dados da primeira carta

printf("OS DADOS CARTA NUMERO 1:");
printf("\n");
printf("Estado : %c \n" , estado1);
printf("Codigo : %s\n" , codigo1);
printf("Cidade : %s\n" , cidade1);
printf("Populacao : %lu\n", populacao1);
printf("Area : %f\n" , area1);
printf("Pib : %f\n", pib1);
printf("Pontos turisticos : %d\n" , pontos1);
printf("Densidade Populacional : %.2f Km2\n" , densidade1);
printf("Pib per capita : %.2f\n" , pib_per_capita1);

printf("*******************************************\n");


//INSERIR DADOS DA SEGUNDA CARTA:
printf("Digite os dados da Carta n 2\n");

printf("Digite o estado de (A-H) :\n");
scanf("  %c" , &estado2);

printf("Codigo (ex: A01):\n");
scanf("%s" , &codigo2);

printf("Digite o nome da cidade :\n");
scanf("%s" ,&cidade2);

printf("Digite a Populacao :\n");
scanf("%lu", &populacao2);

printf("Digite a area (Km²): \n");
scanf("%f", &area2);

printf("Digite o pib (Bilhoes de reais): \n");
scanf("%f" , &pib2);

printf("Digite os numeros de pontos turisticos :\n");
scanf(" %d" , &pontos2);
printf("\n");

// Calcular densidade e o pib per capita 
densidade2 = (float) populacao2 / area2;
pib_per_capita2 = (float) pib2 / populacao2;

 // Cálculos para a segunda carta
 densidade2 = (float)populacao2 / area2;
 pib_per_capita2 = (float)pib2 / populacao2;
 superPoder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1 / densidade2);

//Exibir os dados da segunda carta:
printf("\n");
printf("\n");
printf("OS DADOS CARTA NUMERO 2:");
printf("\n");
printf("Estado : %c\n" , estado2);
printf("Codigo : %s\n" , codigo2);
printf("Cidade : %s\n" , cidade2);
printf("Populacao : %lu\n", populacao2);
printf("Area : %f\n" , area2);
printf("Pib : %f\n", pib2);
printf("Pontos turisticos : %d\n" , pontos2);
printf("Densidade Populacional : %.2f Km2\n" , densidade2);
printf("Pib per capita : %.2f\n" , pib_per_capita2);
printf("************************************\n");

    // Menu interativo
    int opcao;
    do {
        printf("\nEscolha o atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("7. Super Poder\n");
        printf("0. Sair\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao);

switch (opcao)
{
case 1: //COMPARAÇÃO DE POPULAÇÃO
    if (populacao1 > populacao2){    
        printf("Carta 1 vence em População:  %lu vs %lu\n", populacao1, populacao2);
          vitoriasCarta1++;    
    } else if (populacao1 < populacao2)
    {
         printf("Carta 2 vence em População:  %lu vs %lu\n", populacao1, populacao2);
        vitoriasCarta2++;    
    } else {
         printf("Empate em População: %lu vs %lu\n", populacao1, populacao2);
    }
    break;
    case 2: //COMPARAÇÃO DE ÁREA
    if (area1 > area2){    
        printf("Carta 1 vence em area: %.2f km2 vs %.2f\n km2", area1, area2);
          vitoriasCarta1++;    
    } else if (area1 < area2)
    {
         printf("Carta 2 vence em area: %.2f km2 vs %.2f km2\n", area1, area2);
        vitoriasCarta2++;    
    } else {
         printf("Empate em area: %.2f km2 vs %.2f km2\n", area1, area2);
    }
break;

case 3: //COMPARAÇÃO DE PIB
    if (pib1 >pib2){    
        printf("Carta 1 vence em PIB:  %.2f Bilhoes vs %.2f Bilhoes\n", pib1, pib2);
          vitoriasCarta1++;    
    } else if (pib1 < pib2)
    {
         printf("Carta 2 vence em PIB:  %.2f Blihoes vs %.2f Bilhoes\n", pib1, pib2);
        vitoriasCarta2++;    
    } else {
         printf("Empate em PIB: %.2f Bilhoes vs %.2f Bilhoes \n", pib1, pib2);
    }
break;
   
case 4: //COMPARAÇÃO DE PONTOS TURISTICOS
    if (pontos1 > pontos2){    
        printf("Carta 1 vence em Pontos turisticos: %d  vs %d\n", pontos1, pontos2);
          vitoriasCarta1++;    
    } else if (pontos1 < pontos2)
    {
         printf("Carta 2 vence em area: %d vs %d\n", pontos1, pontos2);
        vitoriasCarta2++;    
    } else {
         printf("Empate em area: %d vs %d\n", pontos1, pontos2);
    }
break;

case 5: // Comparação de Densidade Populacional
if (densidade1 < densidade2) {
    printf("Carta 1 vence em Densidade Populacional: %.2f vs %.2f\n", densidade1, densidade2);
    vitoriasCarta1++;
} else if (densidade1 > densidade2) {
    printf("Carta 2 vence em Densidade Populacional: %.2f vs %.2f\n", densidade1, densidade2);
    vitoriasCarta2++;
} else {
    printf("Empate em Densidade Populacional: %.2f vs %.2f\n", densidade1, densidade2);
}
break;

case 6: // Comparação de PIB per Capita
if (pib_per_capita1 > pib_per_capita2) {
    printf("Carta 1 vence em PIB per Capita: %.2f vs %.2f\n", pib_per_capita1, pib_per_capita2);
    vitoriasCarta1++;
} else if (pib_per_capita1 < pib_per_capita2) {
    printf("Carta 2 vence em PIB per Capita: %.2f vs %.2f\n", pib_per_capita1, pib_per_capita2);
    vitoriasCarta2++;
} else {
    printf("Empate em PIB per Capita: %.2f vs %.2f\n", pib_per_capita1, pib_per_capita2);
}
break;

case 7: // Comparação de Super Poder
if (superPoder1 > superPoder2) {
    printf("Carta 1 vence em Super Poder: %.2f vs %.2f\n", superPoder1, superPoder2);
    vitoriasCarta1++;
} else if (superPoder1 < superPoder2) {
    printf("Carta 2 vence em Super Poder: %.2f vs %.2f\n", superPoder1, superPoder2);
    vitoriasCarta2++;
} else {
    printf("Empate em Super Poder: %.2f vs %.2f\n", superPoder1, superPoder2);
}
break;

case 0:
printf("Saindo... Fim de jogo!\n");
break;

default:
printf("Opção inválida! Tente novamente.\n");
break;
}
}


while (opcao != 0);

    // Exibir vencedor final
    printf("\nResultado Final:\n");
    if (vitoriasCarta1 > vitoriasCarta2) {
        printf("Carta 1 é a vencedora com %d vitórias!\n", vitoriasCarta1);
    } else if (vitoriasCarta1 < vitoriasCarta2) {
        printf("Carta 2 é a vencedora com %d vitórias!\n", vitoriasCarta2);
    } else {
        printf("Empate geral! Ambas as cartas tiveram o mesmo número de vitórias.\n");
    }
















        // Mensagem final
printf("\nFIM DE JOGO!, pressione enter para fechar\n");


 // Limpar buffer e esperar ENTER
getchar();
getchar();


return 0;
    
}