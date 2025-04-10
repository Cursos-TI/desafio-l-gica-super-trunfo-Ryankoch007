#include <stdio.h>
int main () {
// variaveis para armazenar dados de todas as cartas
    char estado1[3],estado2[3];
    char cidade1[50], cidade2[50];
    char codigo1[4], codigo2[4];
    unsigned long int populacao1 , populacao2;
    int pontos1, pontos2;
    float area1 ,area2;
    float pib1, pib2;
    float densidade1 ,densidade2;
    float pib_per_capita1 ,pib_per_capita2;
    float superPoder1, superPoder2;
    
    // inserir os Dados da primeira Carta
    printf("\n");
    printf("BEM VINDO AO JOGO DO SUPERTRUNFO\n");
    printf("\n");
    
printf("Digite os dados da Carta n 1\n");

printf("Digite o estado de (A-H) :\n");
scanf("  %s" , &estado1);

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
printf("Estado : %s \n" , estado1);
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
scanf("  %s" , &estado2);

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
printf("Estado : %s\n" , estado2);
printf("Codigo : %s\n" , codigo2);
printf("Cidade : %s\n" , cidade2);
printf("Populacao : %lu\n", populacao2);
printf("Area : %f\n" , area2);
printf("Pib : %f\n", pib2);
printf("Pontos turisticos : %d\n" , pontos2);
printf("Densidade Populacional : %.2f Km2\n" , densidade2);
printf("Pib per capita : %.2f\n" , pib_per_capita2);
printf("************************************\n");

// Aqui mostraram as cartas vencedoras
printf("Aqui esta As Cartas vencedoras : \n");


if (populacao1 > populacao2 && 
    area1 > area2 &&
    pib1 > pib2 &&
    pontos1 > pontos2 &&
    superPoder1 > superPoder2 &&
    pib_per_capita1 > pib_per_capita2)
{
printf("Carta 1 - %s (%s) : %lu , \n" ,estado1 , cidade1 , populacao1);
printf("Carta 2 - %s (%s) : %lu , \n" ,estado2 , cidade2 , populacao2);
printf("Resultado : Carta 1 (%s) venceu!\n" , cidade1);
}

else 
{
printf("Carta 1 - %s (%s): %lu , \n" ,estado1 , cidade1 , populacao1);
printf("Carta 2 - %s (%s): %lu , \n" ,estado2 , cidade2 , populacao2);
printf("Resultado : Carta 2 (%s) venceu!\n" , cidade2);
}


// Mensagem final
printf("\nFIM DE JOGO!, pressione enter para fechar\n");


 // Limpar buffer e esperar ENTER
getchar();
getchar();


return 0;
    
}