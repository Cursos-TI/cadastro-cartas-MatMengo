#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1[50], estado2[50], codigo1[10], codigo2[10], cidade1[20], cidade2[20];
  int populacao1, populacao2, pontos1, pontos2, escolha1, escolha2;
  float area1, area2, pib1, pib2, densidade1, densidade2, superPoder1, superPoder2, pibPerCapta1, pibPerCapta2, escolha1a, escolha1b, escolha2a, escolha2b, somaA, somaB;
  
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
  scanf("%d", &populacao1);

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
  scanf("%d", &populacao2);

  printf("Digite a área em Km²:\n");
  scanf("%f", &area2);

  printf("Digite o PIB:\n");
  scanf("%f", &pib2);

  printf("Digite o nº de pontos turísticos:\n");
  scanf("%d", &pontos2);

  densidade1 = populacao1 / area1;
  densidade2 = populacao2 / area2;

  pibPerCapta1 = pib1 / populacao1;
  pibPerCapta2 = pib2 / populacao2;

  superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapta1 - densidade1;
  superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapta2 - densidade2;

  
  // Área para exibição dos dados da cidade
    //CARTA 1
  
  printf("Estado: %s\n", estado1);
  printf("Código da Carta: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
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
  printf("População: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de pontos turísticos: %d\n", pontos2);
  printf("Densidade populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per capta: %.2f reais\n", pibPerCapta2);
  printf("Superpoder: %.2f\n", superPoder2);

  //RESULTADO
  printf("***RESULTADO****\n");
  printf("População carta 1 é maior que carta 2? %d\n", populacao1 > populacao2);
  printf("Área carta 1 é maior que carta 2? %d\n", area1 > area2);
  printf("PIB carta 1 é maior que carta 2? %d\n", pib1 > pib2);
  printf("Densidade carta 1 é melhor que carta 2? %d\n", densidade1 < densidade2);
  printf("PIB per capta carta 1 é maior que carta 2? %d\n", pibPerCapta1 > pibPerCapta2);
  printf("Superpoder carta 1 é maior que carta 2? %d\n", superPoder1 > superPoder2);

  //COMPARAÇÃO DE CARTAS
    //População
  printf("Comparação de cartas (atributo: população)\n");
  printf("Carta %s - %s (%s): %d\n", codigo1, cidade1, estado1, populacao1);
  printf("Carta %s - %s (%s): %d\n", codigo2, cidade2, estado2, populacao2);
  if (populacao1 > populacao2){
    printf("Carta %s (%s) venceu!\n", codigo1, cidade1);
  } else {
    printf("Carta %s (%s) venceu!\n", codigo2, cidade2);
  }
    //Área
  printf("Comparação de cartas (atributo: área)\n");
  printf("Carta %s - %s (%s): %.2f\n", codigo1, cidade1, estado1, area1);
  printf("Carta %s - %s (%s): %.2f\n", codigo2, cidade2, estado2, area2);
  if (area1 > area2){
    printf("Carta %s (%s) venceu!\n", codigo1, cidade1);
  } else {
    printf("Carta %s (%s) venceu!\n", codigo2, cidade2);
  }
    //PIB
  printf("Comparação de cartas (atributo: PIB)\n");
  printf("Carta %s - %s (%s): %.2f\n", codigo1, cidade1, estado1, pib1);
  printf("Carta %s - %s (%s): %.2f\n", codigo2, cidade2, estado2, pib2);
  if (pib1 > pib2){
    printf("Carta %s (%s) venceu!\n", codigo1, cidade1);
  } else {
    printf("Carta %s (%s) venceu!\n", codigo2, cidade2);
  }
    //Nº de pontos turísticos
  printf("Comparação de cartas (atributo: pontos turísticos)\n");
  printf("Carta %s - %s (%s): %d\n", codigo1, cidade1, estado1, pontos1);
  printf("Carta %s - %s (%s): %d\n", codigo2, cidade2, estado2, pontos2);
  if (pontos1 > pontos2){
    printf("Carta %s (%s) venceu!\n", codigo1, cidade1);
  } else {
    printf("Carta %s (%s) venceu!\n", codigo2, cidade2);
  }
    //Densidade populacional
  printf("Comparação de cartas (atributo: densidade populacional)\n");
  printf("Carta %s - %s (%s): %.2f\n", codigo1, cidade1, estado1, densidade1);
  printf("Carta %s - %s (%s): %.2f\n", codigo2, cidade2, estado2, densidade2);
  if (densidade1 < densidade2){
    printf("Carta %s (%s) venceu!\n", codigo1, cidade1);
  } else {
    printf("Carta %s (%s) venceu!\n", codigo2, cidade2);
  }
    //PIB per capta
  printf("Comparação de cartas (atributo: PIB per capta)\n");
  printf("Carta %s - %s (%s): %.2f\n", codigo1, cidade1, estado1, pibPerCapta1);
  printf("Carta %s - %s (%s): %.2f\n", codigo2, cidade2, estado2, pibPerCapta2);
  if (pibPerCapta1 > pibPerCapta2){
    printf("Carta %s (%s) venceu!\n", codigo1, cidade1);
  } else {
    printf("Carta %s (%s) venceu!\n", codigo2, cidade2);
  }
    //Superpoder
  printf("Comparação de cartas (atributo: superpoder)\n");
  printf("Carta %s - %s (%s): %.2f\n", codigo1, cidade1, estado1, superPoder1);
  printf("Carta %s - %s (%s): %.2f\n", codigo2, cidade2, estado2, superPoder2);
  if (superPoder1 > superPoder2){
    printf("Carta %s (%s) venceu!\n", codigo1, cidade1);
  } else {
    printf("Carta %s (%s) venceu!\n", codigo2, cidade2);
  }

  //Escolha das cartas
  printf("### Escolha DOIS atributos para comparação das cartas ###\n");

  //Escolha do primeiro atributo
  printf(">>> Escolha o PRIMEIRO atributo <<< \n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");
  printf("Escolha: \n");
  scanf(" %d", &escolha1);

  //Escolha do segundo atributo
  printf(">>> Escolha o SEGUNDO atributo <<< \n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");
  printf("Escolha: \n");
  scanf(" %d", &escolha2);

     
  switch (escolha1)
  {
  case 1:
    printf("Você escolheu a opção População\n");
    printf("Cidade %s: População %d / Cidade %s: População %d\n", cidade1, populacao1, cidade2, populacao2);
    escolha1a = populacao1; escolha1b = populacao2;
    break;
  case 2:
    printf("Você escolheu a opção Área\n");
    printf("Cidade %s: Área %.2f / Cidade %s: Área %.2f\n", cidade1, area1, cidade2, area2);
    escolha1a = area1; escolha1b = area2;
    break;
  case 3:
    printf("Você escolheu a opção PIB\n");
    printf("Cidade %s: PIB %.2f / Cidade %s: PIB %.2f\n", cidade1, pib1, cidade2, pib2);
    escolha1a = pib1; escolha1b = pib2;
    break;
  case 4:
    printf("Você escolheu a opção número de pontos turísticos\n");
    printf("Cidade %s: Nº pontos turísticos %d / Cidade %s: Nº pontos turísticos %d\n", cidade1, pontos1, cidade2, pontos2);
    escolha1a = pontos1; escolha1b = pontos2;
    break;
  case 5:
    printf("Você escolheu a opção Densidade Demográfica\n");
    printf("Cidade %s: Densidade demográfica %.2f / Cidade %s: Densidade demográfica %.2f\n", cidade1, densidade1, cidade2, densidade2);
    escolha1a = -densidade1; escolha1b = -densidade2;    
    break;
  
  default:
    printf("Opção inválida\n");
    break;
  }

  if (escolha1 == escolha2)
  {
    printf("Você escolheu o mesmo atributo. Recomece o jogo e escolha atributos distintos\n");
  } else
  {
    switch (escolha2)
    {
    case 1:
      printf("Você escolheu a opção População\n");
      printf("Cidade %s: População %d / Cidade %s: População %d\n", cidade1, populacao1, cidade2, populacao2);
      escolha2a = populacao1; escolha2b = populacao2;
    break;
    case 2:
      printf("Você escolheu a opção Área\n");
      printf("Cidade %s: Área %.2f / Cidade %s: Área %.2f\n", cidade1, area1, cidade2, area2);
      escolha2a = area1; escolha2b = area2;
    break;
    case 3:
      printf("Você escolheu a opção PIB\n");
      printf("Cidade %s: PIB %.2f / Cidade %s: PIB %.2f\n", cidade1, pib1, cidade2, pib2);
      escolha2a = pib1; escolha2b = pib2;
    break;
    case 4:
    printf("Você escolheu a opção número de pontos turísticos\n");
    printf("Cidade %s: Nº pontos turísticos %d / Cidade %s: Nº pontos turísticos %d\n", cidade1, pontos1, cidade2, pontos2);
    escolha2a = pontos1; escolha2b = pontos2;
    break;
    case 5:
    printf("Você escolheu a opção Densidade Demográfica\n");
    printf("Cidade %s: Densidade demográfica %.2f / Cidade %s: Densidade demográfica %.2f\n", cidade1, densidade1, cidade2, densidade2);
    escolha2a = -densidade1; escolha2b = -densidade2;   
    break;
    
    default:
    printf("Opção inválida\n");
    break;
    }
  }

  somaA = escolha1a + escolha2a;
  somaB = escolha1b + escolha2b;
  printf("soma A = %.2f\n", somaA);
  printf("soma B = %.2f\n", somaB);
  
  
          if ((escolha1 == 1 || escolha1 == 2 || escolha1 == 3 || escolha1 == 4 || escolha1 == 5) && (escolha2 == 1 || escolha2 == 2 || escolha2 == 3 || escolha2 == 4 || escolha2 == 5))
      {
        if (somaA > somaB)
        {        
          printf("Parabéns, você venceu!\n");
        }
        else if (somaA == somaB) 
        {
          printf("Empatou!\n");
        }
        else 
        {
          printf("Infelizmente você perdeu!\n");
        }
      }
      
   
return 0;
      
}
