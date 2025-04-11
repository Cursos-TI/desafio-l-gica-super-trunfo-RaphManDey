#include <stdio.h>

// Desafio Super Trunfo 2

int main() {
    printf("Desafio Cartas Super Trunfo 2\n");

    //Declarações das variáveis da 1 Carta
    char Estado1;
    char Carta1[4];
    char Cidade1[40];
    unsigned long int Populacao1;
    float Area1;
    float Pib1;
    int Pontos_turisticos1;
    float Densidade_populacional;
    float Pib_per_capita1;

    //Declaração de variáveis da 2 Carta
    char Estado2;
    char Carta2[4];
    char Cidade2[40];
    unsigned long int Populacao2;
    float Area2;
    float Pib2;
    int Pontos_turisticos2;
    float Densidade_populacional2;
    float Pib_per_capita2;

    //Cadastro da Carta 1
    printf("Carta 1:\n");
    printf("Digite uma letra de A a H para o Estado: \n");
    scanf(" %c", &Estado1);
    printf("Digite a letra do estado que você escolheu em seguida de um número de 01 a 04 (ex: A01, B03 e etç): \n");
    scanf("%s", Carta1);
    printf("Nome da cidade(sem espaço, use _): \n");
    scanf("%s", Cidade1);
    printf("População: \n");
    scanf("%lu", &Populacao1);
    printf("Área: \n");
    scanf("%f", &Area1);
    printf("PIB: \n");
    scanf("%f", &Pib1);
    printf("Números de pontos túristicos: \n");
    scanf("%d", &Pontos_turisticos1);

    //Calculos da Densidade Populacional e PIB Per Capita
    float Densidade_Populacional1 = Populacao1 / Area1;
    float Pib_per_Capita1 = (Pib1 * 1000000000) / Populacao1;
    //Cadastro da Carta 2
    printf("Carta 2:\n");
    printf("Digite uma letra de A a H para o Estado: \n");
    scanf(" %c", &Estado2);
    printf("Digite a letra do estado que você escolheu em seguida de um número de 01 a 04 (ex: A01, B03 e etç): \n");
    scanf("%s", Carta2);
    printf("Nome da cidade(sem espaço, use _): \n");
    scanf("%s", Cidade2);
    printf("População: \n");
    scanf("%lu", &Populacao2);
    printf("Área: \n");
    scanf("%f", &Area2);
    printf("PIB: \n");
    scanf("%f", &Pib2);
    printf("Números de pontos túristicos: \n");
    scanf("%d", &Pontos_turisticos2);

    //Calculos da Densidade Populacional e PIB Per Capita
    float Densidade_Populacional2 = Populacao2 / Area2;
    float Pib_per_Capita2 = (Pib2 * 1000000000) / Populacao2;

    //Exibição da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", Carta1);
    printf("População: %lu \n", Populacao1);
    printf("Nome da Cidade: %s \n", Cidade1);
    printf("Área: %.2f km² \n", Area1);
    printf("PIB: %.2f bilhões de reais \n", Pib1);
    printf("Números de Pontos Turísticos: %d \n", Pontos_turisticos1);
    printf("Densidade Populacional: %.2f \n", Densidade_Populacional1);
    printf("PIB per Capita: %.2f \n\n", Pib_per_Capita1);

    //exibição da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", Carta2);
    printf("População: %lu \n", Populacao2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("Área: %.2f km² \n", Area2);
    printf("PIB: %.2f bilhões de reais \n", Pib2);
    printf("Números de Pontos Turísticos: %d \n", Pontos_turisticos2);
    printf("Densidade Populacional: %.2f \n", Densidade_Populacional2);
    printf("PIB per Capita: %.2f \n\n", Pib_per_Capita2);

    //Espaçamento
    printf("------------------ \n");

     // Menu de escolha dos dois atributos
     int escolha1, escolha2;
     printf("Escolha o PRIMEIRO atributo para comparar:\n");
     printf("\n1 - População\n 2 - Área\n 3 - PIB\n 4 - Pontos Turísticos\n 5 - Densidade Demográfica\n 6 - PIB per Capita\n");
     scanf("%d", &escolha1);
 
     printf("Escolha o SEGUNDO atributo (diferente do primeiro):\n");
     scanf("%d", &escolha2);
 
     // Verificação se os atributos são diferentes
     if (escolha1 == escolha2) {
         printf("Erro: Os dois atributos devem ser diferentes!\n");
         return 1;
     }
 
     // Variáveis para somar os pontos de cada atributo
     float valor1_A = 0, valor1_B = 0;
     float valor2_A = 0, valor2_B = 0;
 
     // Comparação do primeiro atributo
     printf("\nComparando primeiro atributo:\n");
     switch (escolha1) {
         case 1:
             printf("População: %s = %lu, %s = %lu\n", Cidade1, Populacao1, Cidade2, Populacao2);
             valor1_A = Populacao1;
             valor2_A = Populacao2;
             break;
         case 2:
             printf("Área: %s = %.2f, %s = %.2f\n", Cidade1, Area1, Cidade2, Area2);
             valor1_A = Area1;
             valor2_A = Area2;
             break;
         case 3:
             printf("PIB: %s = %.2f, %s = %.2f\n", Cidade1, Pib1, Cidade2, Pib2);
             valor1_A = Pib1;
             valor2_A = Pib2;
             break;
         case 4:
             printf("Pontos Turísticos: %s = %d, %s = %d\n", Cidade1, Pontos_turisticos1, Cidade2, Pontos_turisticos2);
             valor1_A = Pontos_turisticos1;
             valor2_A = Pontos_turisticos2;
             break;
         case 5:
             printf("Densidade: %s = %.2f, %s = %.2f (MENOR VENCE)\n", Cidade1, Densidade_Populacional1, Cidade2, Densidade_Populacional2);
             valor1_A = -Densidade_Populacional1; // menor vence
             valor2_A = -Densidade_Populacional2;
             break;
         case 6:
             printf("PIB per Capita: %s = %.2f, %s = %.2f\n", Cidade1, Pib_per_Capita1, Cidade2, Pib_per_Capita2);
             valor1_A = Pib_per_Capita1;
             valor2_A = Pib_per_Capita2;
             break;
         default:
             printf("Atributo inválido!\n");
             return 1;
     }
 
     // Comparação do segundo atributo
     printf("\nComparando segundo atributo:\n");
     switch (escolha2) {
         case 1:
             printf("População: %s = %lu, %s = %lu\n", Cidade1, Populacao1, Cidade2, Populacao2);
             valor1_B = Populacao1;
             valor2_B = Populacao2;
             break;
         case 2:
             printf("Área: %s = %.2f, %s = %.2f\n", Cidade1, Area1, Cidade2, Area2);
             valor1_B = Area1;
             valor2_B = Area2;
             break;
         case 3:
             printf("PIB: %s = %.2f, %s = %.2f\n", Cidade1, Pib1, Cidade2, Pib2);
             valor1_B = Pib1;
             valor2_B = Pib2;
             break;
         case 4:
             printf("Pontos Turísticos: %s = %d, %s = %d\n", Cidade1, Pontos_turisticos1, Cidade2, Pontos_turisticos2);
             valor1_B = Pontos_turisticos1;
             valor2_B = Pontos_turisticos2;
             break;
         case 5:
             printf("Densidade: %s = %.2f, %s = %.2f (MENOR VENCE)\n", Cidade1, Densidade_Populacional1, Cidade2, Densidade_Populacional2);
             valor1_B = -Densidade_Populacional1; // menor vence
             valor2_B = -Densidade_Populacional2;
             break;
         case 6:
             printf("PIB per Capita: %s = %.2f, %s = %.2f\n", Cidade1, Pib_per_Capita1, Cidade2, Pib_per_Capita2);
             valor1_B = Pib_per_Capita1;
             valor2_B = Pib_per_Capita2;
             break;
         default:
             printf("Atributo inválido!\n");
             return 1;
     }
 
     // Soma dos atributos
     float soma1 = valor1_A + valor1_B;
     float soma2 = valor2_A + valor2_B;
 
     printf("\nSoma dos atributos:\n");
     printf("%s: %.2f\n%s: %.2f\n", Cidade1, soma1, Cidade2, soma2);
 
     // Resultado final
     printf("\n=== RESULTADO FINAL ===\n");
     if (soma1 > soma2)
         printf("O Vencedor é a Carta %s\n", Carta1);
     else if (soma2 > soma1)
         printf("O Vencedor é a Carta %s\n", Carta2);
     else
         printf("Empate!\n");
 
     return 0;
 }