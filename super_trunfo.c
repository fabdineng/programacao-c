#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char uf1 = 'k';
    char codcarta1[4], cid1[16];
    int pop1, ptur1;
    float area1, pib1;

    char uf2 = 'z';
    char codcarta2[4], cid2[16];
    int pop2, ptur2;
    float area2, pib2;

   
    // ESTADOS: A=RJ, B=CE, C=MG, D=ES, E=SP, F=PI, G=AL, H=BA
    //Cadastro da carta 1

    printf("ESTADOS: A=RJ, B=CE, C=MG, D=ES, E=SP, F=PI, G=AL, H=BA\n\n");

    printf("***** Cadastro da Primeira carta *****\n");

        printf("Informe o Estado: ");
            scanf(" %c", &uf1);
        printf("Informe o Codigo da Carta: "); 
            scanf("%s", &codcarta1);
        printf("Informe a Cidade: ");
            scanf("%s", &cid1);
        printf("Informe a População: ");
            scanf("%d", &pop1);
        printf("Informe a Área: ");
            scanf("%f", &area1);
        printf("Informe o PIB: ");
            scanf("%f", &pib1);
        printf("Informe a Quantidade de Pontos Turisticos: ");
            scanf("%d", &ptur1);
        
    printf("\n");

    //Cadastro da carta 2

    printf("***** Cadastro da Segunda carta *****\n");

        printf("Informe o Estado: ");
            scanf(" %c", &uf2);
        printf("Informe o Codigo da Carta: ");
            scanf("%s", &codcarta2);
        printf("Informe a Cidade: ");
            scanf("%s", &cid2);
        printf("Informe a População: ");
            scanf("%d", &pop2);
        printf("Informe a Área: ");
            scanf("%f", &area2);
        printf("Informe o PIB: ");
            scanf("%f", &pib2);
        printf("Informe a Quantidade de Pontos Turisticos: ");
            scanf("%d", &ptur2);

printf("\n\n");
// Exibe carta 1

    printf("***** Carta 1 *****\n");

         printf("Estado: %c\n", uf1);
         printf("Código da Carta: %s\n", codcarta1);
         printf("Cidade: %s\n", cid1);
         printf("População: %d\n", pop1);
         printf("Área: %.2f\n", area1);
         printf("PIB: %.2f\n", pib1);
         printf("Pontos Turisticos: %d\n", ptur1);

printf("\n");
// Exibe carta 2

    printf("***** Carta 2 *****\n");

         printf("Estado: %c\n", uf2);
         printf("Código da Carta: %s\n", codcarta2);
         printf("Cidade: %s\n", cid2);
         printf("População: %d\n", pop2);
         printf("Área: %.2f\n", area2);
         printf("PIB: %.2f\n", pib2);
         printf("Pontos Turisticos: %d\n", ptur2);



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
