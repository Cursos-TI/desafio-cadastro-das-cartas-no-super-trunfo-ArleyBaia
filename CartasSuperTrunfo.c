#include <stdio.h>
typedef struct{

    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} jogador;

int main(){
jogador jogador1, jogador2;

    printf("Jogador Numero 1!!\n");
    printf("Digite sua populacao: ");
    scanf("%d", &jogador1.populacao);
printf("Sua populacao é %d\n", jogador1.populacao);

printf("Digite sua area: ");
scanf("%f", &jogador1.area);
printf ("Sua area é %f\n", jogador1.area);

printf("Digite seu PIB: ");
scanf("%f", &jogador1.pib);
printf("Seu PIB é %f\n", jogador1.pib);

printf("Numero de pontos turisticos: ");
scanf("%d", &jogador1.pontos_turisticos);
printf("Numero de pontos turisticos são: %d\n", jogador1.pontos_turisticos);

//variavel 2

printf("Jogador numero2!!\n");
prinf("Digite sua populacao: ");
scanf("%d", &jogador2.populacao);
printf("Sua populacao é %d\n", jogador2.populacao);

printf("Digite sua area: ");
scanf("%f", &jogador2.area);
printf("Sua area é %f/n", jogador2.area);

printf("Digite seu PIB: ");
scanf("%f", &jogador2.pib);
printf("Seu PIB é %f\n", jogador2.pib);
 
printf("Nunemro de pontos turisticos: ");
scanf("%d", jogador2.pontos_turisticos);
printf("Numero de pontos turisticos são %d/n", jogador2.pontos_turisticos);








}