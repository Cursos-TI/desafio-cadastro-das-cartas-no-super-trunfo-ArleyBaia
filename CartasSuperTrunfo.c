#include <stdio.h>
typedef struct{

    float populacao;
    float area;
    float pib;
    int pontos_turisticos;
    char estado[20];
    char nomecidade[20];
char codigo[20];
float densidade;
float pibpercapita;

} jogador;

int main(){
jogador jogador1, jogador2;

//variavel1
    printf("Jogador Numero 1!!\n");
    printf("Digite sua populacao: ");
    scanf("%f", &jogador1.populacao);

printf("Digite sua area: \n"); 
scanf ("%f", &jogador1.area);

printf("Digite seu PIB: \n");
scanf("%f", &jogador1.pib);

printf("Numero de pontos turisticos: \n");
scanf("%d", &jogador1.pontos_turisticos);
 
printf("Nome do estado: \n");
scanf("%s", jogador1.estado);
 
printf("Nome da sua cidade \n");
scanf("%s", jogador1.nomecidade);

printf ("Codigo da sua cidade: \n");
scanf("%s", jogador1.codigo);


//variavel 2

printf("Jogador numero2!!\n");
printf("Digite sua populacao: \n");
scanf("%f", &jogador2.populacao);

printf("Digite sua area: \n");
scanf("%f", &jogador2.area);

printf("Digite seu PIB: \n");
scanf("%f", &jogador2.pib);
 
printf("Numero de pontos turisticos: \n");
scanf("%d", &jogador2.pontos_turisticos);

printf("Nome do estado: \n");
scanf("%s", jogador2.estado);
 
printf("Nome da sua cidade \n");
scanf("%s", jogador2.nomecidade);

printf ("Codigo da sua cidade: \n");
scanf("%s", jogador2.codigo);

//resultado jogador1

printf("\n---- RESULTADOS JOGADOR 1 ----\n");
printf("Populacao: %.2f\n", jogador1.populacao);
printf ("Area: %.2f\n", jogador1.area);
printf ("PIB: %.2f\n", jogador1.pib);
printf("Pontos turisticos: %d\n", jogador1.pontos_turisticos);
printf("Nome do estado: %s\n", jogador1.estado);
printf("nome da cidade: %s\n", jogador1.nomecidade);
printf("Codigo da cidade: %s\n", jogador1.codigo);

//variavel jogador2

printf("\n---- RESULTADOS JOGADOR 2 ----\n");
printf("populacao: %.2f\n", jogador2.populacao);
printf("area: %.2f\n", jogador2.area);
printf("PIB: %.2f\n", jogador2.pib);
printf("pontos turisticos?: %d\n", jogador2.pontos_turisticos);
printf("Nome do estado: %s\n", jogador2.estado);
printf("nome da cidade: %s\n", jogador2.nomecidade);
printf("Codigo da cidade: %s\n", jogador2.codigo);

//cálculo da densidade populacional / area, e pib / população

jogador1.densidade = jogador1.populacao / jogador1.area;
jogador1.pibpercapita = jogador1.pib / jogador1.populacao;

printf ("Jogador 1, sua densidade populacional é: %.2f\n", jogador1.densidade);
printf ("Jogador 1, seu PIB per capita é: %.2f\n", jogador1.pibpercapita);

//calculo da densidade populacional / area, e pib / população do jogador2

jogador2.densidade = jogador2.populacao / jogador2.area;
jogador2.pibpercapita = jogador2.pib / jogador2.populacao;

printf ("Jogador 2, sua densidade populacional é: %.2f\n", jogador2.densidade);
printf ("Jogador 2, seu PIB per capita é: %.2f\n", jogador2.pibpercapita);



return 0;

}