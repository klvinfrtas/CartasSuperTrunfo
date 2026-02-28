#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    //Informações das variáveis de carta 1.
  char estado1[2];
  char codigodacarta1[4];
  char nomedacidade1 [35];
  int populacao1;
  float area1;
  float pib1;
  int numdepontosturisticos1;

    //Informações das variáveis da carta 2.
  char estado2[2];
  char codigodacarta2[4];
  char nomedacidade2[35];
  int populacao2;
  float area2;
  float pib2;
  int numdepontosturisticos2;

      //<<ATENÇÃO>> Duas informações "úteis" sobre o código acima.    
          //Após uma pesquisa rápida, o nome mais longe de uma cidade são 32 caracteres, só arredondei para 35 para ficar melhor.
          //"num" de número para alguém que não tenha entendido.

  // Área para entrada de dados
    //Vou usar "fgets" para que as pessoas tenham mais liberdade de escolha.
  printf("Olá!!! Seja bem-vindo ao jogo SuperTrunfo!\n\n");

  printf("Vamos escolher uma única letra de um estado (de A até o H): ");
   fgets(estado1, 2, stdin);
      //printf("sua letra é: %s\n", estado1); Isso aqui foi usado para teste, para ver se a letra estava sendo armazenada corretamente.
        //Foi usado fgets aqui como gambiarra, se usar scanf(" %c"), ele não aparece a letra.

  printf("Agora, a letra do estado que escolheu junto com dois números de 1 a 4 (ex: A01, B02, etc): ");
    scanf("%s", &codigodacarta1);

  printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", &nomedacidade1); // O " %[^\n]s" é para ler a string com espaços, ou seja, o nome da cidade pode ter mais de uma palavra.
  printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
  
  printf("Digite a área em km² (não coloque o km² na resposta) da cidade: ");
    scanf("%f", &area1);
  
  printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numdepontosturisticos1);

// Agora, para a carta 2.

  printf("\n\nAgora, vamos para a segunda carta!!!\n\n");

  printf("Vamos escolher uma única letra de um estado (de A até o H): ");
   scanf(" %c", &estado2);
      //printf("sua letra é: %c\n", estado2); Isso aqui foi usado para teste, para ver se a letra estava sendo armazenada corretamente.
        
  printf("Agora, a letra do estado que escolheu junto com dois números de 1 a 4 (ex: A01, B02, etc): ");
    scanf("%s", &codigodacarta2);

  printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", &nomedacidade2); // O " %[^\n]s" é para ler a string com espaços, ou seja, o nome da cidade pode ter mais de uma palavra.
  printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
  
  printf("Digite a área em km² (não coloque o km² na resposta) da cidade: ");
    scanf("%f", &area2);
  
  printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numdepontosturisticos2);
  

  // Área para exibição dos dados da cidade
  printf("\n\nCarta 1:\n");
  printf("Estado: %s\n", estado1);
  printf("Código da carta: %s\n", codigodacarta1);
  printf("Nome da cidade: %s\n", nomedacidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f milhões de reais\n", pib1);
  printf("Número de pontos turísticos: %d\n", numdepontosturisticos1);

      //Exibição dos dados da carta 2.

  printf("\nCarta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código da carta: %s\n", codigodacarta2);
  printf("Nome da cidade: %s\n", nomedacidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f milhões de reais\n", pib2);
  printf("Número de pontos turísticos: %d\n", numdepontosturisticos2);

return 0;
} 
