#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

    //Carta 1
  char estado1[50], codigo1[4], cidade1[20];
  int populaçao1, pontos1;
  float area1, pib1, densidade1, superPoder1, pibPerCapta1;
  

    //Carta 2
  char estado2[50], codigo2[4], cidade2[20];
  int populaçao2, pontos2;
  float area2, pib2, densidade2, superPoder2, pibPerCapta2;
    


  // Área para entrada de dados

    //Carta 1
  printf("CARTA1\n");

  printf("Digite o nome do Estado:\n");
  scanf(" %s", estado1);

  printf("Digite o código da carta:\n");
  scanf(" %s", codigo1);

  printf("Digite o nome da cidade:\n");
  scanf(" %s", cidade1);

  printf("Digite a população:\n");
  scanf("%d", &populaçao1);

  printf("Digite a área em Km²:\n");
  scanf("%f", &area1);

  printf("Digite o PIB:\n");
  scanf("%f", &pib1);

  printf("Digite o nº de pontos turísticos:\n");
  scanf("%d", &pontos1);

    //Carta 2

  printf("CARTA2\n");

  printf("Digite o nome do Estado:\n");
  scanf(" %s", estado2);

  printf("Digite o código da carta:\n");
  scanf(" %s", codigo2);

  printf("Digite o nome da cidade:\n");
  scanf(" %s", cidade2);

  printf("Digite a população:\n");
  scanf("%d", &populaçao2);

  printf("Digite a área em Km²:\n");
  scanf("%f", &area2);

  printf("Digite o PIB:\n");
  scanf("%f", &pib2);

  printf("Digite o nº de pontos turísticos:\n");
  scanf("%d", &pontos2);

  densidade1 = populaçao1 / area1;
  densidade2 = populaçao2 / area2;

  pibPerCapta1 = pib1 / populaçao1;
  pibPerCapta2 = pib2 / populaçao2;

  superPoder1 = populaçao1 + area1 + pib1 + pontos1 + pibPerCapta1 - densidade1;
  superPoder2 = populaçao2 + area2 + pib2 + pontos2 + pibPerCapta2 - densidade2;

  
  // Área para exibição dos dados da cidade
    //CARTA 1
  
  printf("Estado: %s\n", estado1);
  printf("Código da Carta: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populaçao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Número de pontos turísticos: %d\n", pontos1);
  printf("Densidade populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per capta: %.2f reais\n", pibPerCapta1);
  printf("Superpoder: %.2f\n", superPoder1);
  
      //CARTA 2
  printf("Estado: %s\n", estado2);
  printf("Código da Carta: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populaçao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de pontos turísticos: %d\n", pontos2);
  printf("Densidade populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per capta: %.2f reais\n", pibPerCapta2);
  printf("Superpoder: %.2f\n", superPoder2);

  //RESULTADO
  printf("***RESULTADO****\n");
  printf("População carta 1 é maior que carta 2? %d\n", populaçao1 > populaçao2);
  printf("Área carta 1 é maior que carta 2? %d\n", area1 > area2);
  printf("PIB carta 1 é maior que carta 2? %d\n", pib1 > pib2);
  printf("Densidade carta 1 é melhor que carta 2? %d\n", densidade1 < densidade2);
  printf("PIB per capta carta 1 é maior que carta 2? %d\n", pibPerCapta1 > pibPerCapta2);
  printf("Superpoder carta 1 é maior que carta 2? %d\n", superPoder1 > superPoder2);



return 0;
} 