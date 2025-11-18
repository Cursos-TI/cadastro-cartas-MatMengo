#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
 
  printf("Cartas Super Trunfo\n");
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[10], codigo[3], cidade[20];
  int populaçao, pontos;
  float area, pib;

  // Área para entrada de dados
  printf("Digite o nome do Estado:\n");
  scanf(" %s", &estado);

  printf("Digite o código da carta: \n");
  scanf("%s", &codigo);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &cidade);

  printf("Digite a população: \n");
  scanf("%d", &populaçao);

  printf("Digite a área em Km²: \n");
  scanf("%f", &area);

  printf("Digite o PIB: \n");
  scanf("%f", &pib);

  printf("Digite o nº de pontos turísticos: \n");
  scanf("%d", &pontos);

  // Área para exibição dos dados da cidade

  printf("Estado: %s \n", estado);
  printf("Código da Carta: %s\n", codigo);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %d\n", populaçao);
  printf("Área em Km²: %f\n", area);
  printf("PIB: %f\n", pib);
  printf("Número de pontos turísticos: %d\n", pontos);

return 0;
} 
