#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: Nível mestre.
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    //Informações das variáveis de carta 1.
  char estado1[3];
  char codigodacarta1[5];
  char nomedacidade1[35];
  int populacao1;
  float area1;
  float pib1;
  int numdepontosturisticos1;
  float densidadepopulacional1;
  float pibpercapita1;
  float superpoder1;

    //Informações das variáveis da carta 2.
  char estado2[3];
  char codigodacarta2[5];
  char nomedacidade2[35];
  int populacao2;
  float area2;
  float pib2;
  int numdepontosturisticos2;
  float densidadepopulacional2;
  float pibpercapita2;
  float superpoder2;

      //<<ATENÇÃO>> Duas informações "úteis" sobre o código acima.    
          //Após uma pesquisa rápida, o nome mais longe de uma cidade são 32 caracteres, só arredondei para 35 para ficar melhor.
          //"num" de número para alguém que não tenha entendido.

  // Área para entrada de dados
    //Vou usar "fgets" para que as pessoas tenham mais liberdade de escolha.
  printf("Olá!!! Seja bem-vindo ao jogo SuperTrunfo!\n\n");

  printf("Vamos escolher uma única letra de um estado (de A até o H): ");
   fgets(estado1, 3, stdin);
      //printf("sua letra é: %s\n", estado1); Isso aqui foi usado para teste, para ver se a letra estava sendo armazenada corretamente.
        //Optei por usar fgets.
        
  printf("Agora, a letra do estado que escolheu junto com dois números de 1 a 4 (ex: A01, B02, etc): ");
    fgets(codigodacarta1, 5, stdin);

  printf("Digite o nome da cidade: ");
    fgets(nomedacidade1, 33, stdin); // fgets usado para ler espaços e possíveis cidades maiores
  
  printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
  
  printf("Digite a área em km² (não coloque o km² na resposta) da cidade: ");
    scanf("%f", &area1);
  
  printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%i", &numdepontosturisticos1);
      getchar(); //limpa o buffer para poder dar sequência a segunda carta.

    densidadepopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = area1 / pib1; 
    /*Coloque sempre uma area maior que o pib.
      EX: area = 1500.50
          pib = 750.50*/

  // Agora, para a carta 2.

  printf("\n\nAgora, vamos para a segunda carta!!!\n\n");

  printf("Vamos escolher uma única letra de um estado (de A até o H): ");
    fgets(estado2, 3, stdin);
        
  printf("Agora, a letra do estado que escolheu junto com dois números de 1 a 4 (ex: A01, B02, etc): ");
    fgets(codigodacarta2, 5, stdin);

  printf("Digite o nome da cidade: ");
    fgets(nomedacidade2, 33, stdin); // fgets usado para ler espaços e possíveis cidades maiores
  
  printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
  
  printf("Digite a área em km² (não coloque o km² na resposta) da cidade: ");
    scanf("%f", &area2);
  
  printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numdepontosturisticos2);

    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = area2 / pib2; 
  

  // Área para exibição dos dados da cidade
  printf("\n\nCarta 1:\n");
  printf("Estado: %s\n", estado1);
  printf("Código da carta: %s\n", codigodacarta1);
  printf("Nome da cidade: %s\n", nomedacidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: R$ %.2f milhões\n", pib1);
  printf("Número de pontos turísticos: %d\n", numdepontosturisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
  printf("PIB per capita: R$ %.2f milhões\n", pibpercapita1);

      //Exibição dos dados da carta 2.

  printf("\nCarta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código da carta: %s\n", codigodacarta2);
  printf("Nome da cidade: %s\n", nomedacidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: R$ %.2f milhões\n", pib2);
  printf("Número de pontos turísticos: %d\n", numdepontosturisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
  printf("PIB per capita: R$ %.2f milhões\n", pibpercapita2);

  //Estruturas de decisão das cartas

  //Essas linhas serão para arrumar o \n que existe no fgets
  //Também explica a nova livraria que coloquei
    nomedacidade1[strcspn(nomedacidade1, "\n")] = 0;
    nomedacidade2[strcspn(nomedacidade2, "\n")] = 0; 

  printf("\nQuem ganhou?? Vamos comparar cada atributo!\n");

 printf("Atributo: Populacão\n");
        printf("\nCarta 1 - %s: %d\n", nomedacidade1, populacao1);
        printf("Carta 2 - %s: %d\n\n", nomedacidade2, populacao2);
            if(populacao1 > populacao2){
              printf("%s ganhou!!!\n\n", nomedacidade1);
            } else {
              printf("%s ganhou!!!\n\n", nomedacidade2);
            }

  printf("\nAtributo: Area\n");
        printf("\nCarta 1 - %s: %.2f hab/km²\n", nomedacidade1, area1);
        printf("Carta 2 - %s: %.2f hab/km²\n\n", nomedacidade2, area2);
            if(area1 > area2){
              printf("%s ganhou!!!\n\n", nomedacidade1);
            } else {
              printf("%s ganhou!!!\n\n", nomedacidade2);
            }

  printf("\nAtributo: PIB\n"
            "\nCarta 1 - %s: R$ %.2f Milhões\n", nomedacidade1, pib1);
        printf("Carta 2 - %s: R$ %.2f Milhões\n\n", nomedacidade2, pib2);
            if(pib1 > pib2){
              printf("%s ganhou!!!\n\n", nomedacidade1);
            } else {
              printf("%s ganhou!!!\n\n", nomedacidade2);
            }

  printf("\nAtributo: Pontos Turísticos\n"
            "\nCarta 1 - %s: %d\n", nomedacidade1, numdepontosturisticos1);
        printf("Carta 2 - %s: %d\n\n", nomedacidade2, numdepontosturisticos2);
            if(numdepontosturisticos1 > numdepontosturisticos2){
              printf("%s ganhou!!!\n\n", nomedacidade1);
            } else {
              printf("%s ganhou!!!\n\n", nomedacidade2);
            }

  printf("\nAtributo: PIB per capita\n"
            "\nCarta 1 - %s: R$ %.2f Mil\n", nomedacidade1, pibpercapita1);
        printf("Carta 2 - %s: R$ %.2f Mil\n\n", nomedacidade2, pibpercapita2);
            if(populacao1 > populacao2){
              printf("%s ganhou!!!\n\n", nomedacidade1);
            } else {
              printf("%s ganhou!!!\n\n", nomedacidade2);
            }

  printf("\nAtributo: Densidade Populacional\n"
            "\nCarta 1 - %s: %.2f hab/km²\n", nomedacidade1, densidadepopulacional1);
        printf("Carta 2 - %s: %.2f hab/km²\n\n", nomedacidade2, densidadepopulacional2);
            if(populacao1 < populacao2){
              printf("%s ganhou!!!\n", nomedacidade1);
            } else {
              printf("%s ganhou!!!\n", nomedacidade2);
            }
  
  printf("\nEm densidade populacional, é feito o inverso, quem tiver a menor densidade, ganha.\n");
  
return 0;
} 
