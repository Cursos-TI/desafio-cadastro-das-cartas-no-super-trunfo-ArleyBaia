#include <stdio.h>
typedef struct{

    unsigned int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    char estado[20];
    char nomecidade[20];
char codigo[20];
float densidade;
float pibpercapita;
float superpoder;

} jogador;

int main(){
jogador jogador1, jogador2;

//variavel1
    printf("Jogador Numero 1!!\n");
    printf("Digite sua populacao: ");
    scanf("%u", &jogador1.populacao);

printf("Digite sua area: "); 
scanf ("%f", &jogador1.area);

printf("Digite seu PIB: ");
scanf("%f", &jogador1.pib);

printf("Numero de pontos turisticos: ");
scanf("%d", &jogador1.pontos_turisticos);
 
printf("Nome do estado: ");
scanf("%s", jogador1.estado);
 
printf("Nome da sua cidade ");
scanf("%s", jogador1.nomecidade);

printf ("Codigo da sua cidade: ");
scanf("%s", jogador1.codigo);


//variavel 2

printf("Jogador numero2!!\n");
printf("Digite sua populacao: ");
scanf("%u", &jogador2.populacao);

printf("Digite sua area: ");
scanf("%f", &jogador2.area);

printf("Digite seu PIB: ");
scanf("%f", &jogador2.pib);
 
printf("Numero de pontos turisticos: ");
scanf("%d", &jogador2.pontos_turisticos);

printf("Nome do estado: ");
scanf("%s", jogador2.estado);
 
printf("Nome da sua cidade ");
scanf("%s", jogador2.nomecidade);

printf ("Codigo da sua cidade: ");
scanf("%s", jogador2.codigo);

//resultado jogador1

printf("\n---- RESULTADOS JOGADOR 1 ----\n");
printf("Populacao: %u\n", jogador1.populacao);
printf ("Area: %.2f\n", jogador1.area);
printf ("PIB: %.2f\n", jogador1.pib);
printf("Pontos turisticos: %d\n", jogador1.pontos_turisticos);
printf("Nome do estado: %s\n", jogador1.estado);
printf("nome da cidade: %s\n", jogador1.nomecidade);
printf("Codigo da cidade: %s\n", jogador1.codigo);

//variavel jogador2

printf("\n---- RESULTADOS JOGADOR 2 ----\n");
printf("populacao: %u\n", jogador2.populacao);
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


// calculo superpoder 

jogador1.superpoder = jogador1.populacao + jogador1.area + jogador1.pib + jogador1.pontos_turisticos + jogador1.pibpercapita + (1.0 / jogador1.densidade);
jogador2.superpoder = jogador2.populacao + jogador2.area + jogador2.pib + jogador2.pontos_turisticos + jogador2.pibpercapita + (1.0 / jogador2.densidade);

printf("Jogador1 Super poder:  %.2f\n", jogador1.superpoder);
printf("Jogador2 Super poder:  %.2f\n", jogador2.superpoder);

//comparando as cartas

if (jogador1.populacao > jogador2.populacao) {
    printf("População: jogador 1 venceu (1)\n");
} else {
    printf("População: jogador 2 venceu (0)\n");
}

if (jogador1.area > jogador2.area) {
    printf("Area: Jogador 1 venceu (1)\n");
} else {
printf("Area jogador 2 venceu (0)\n");


}

if (jogador1.pib > jogador2.pib) {
    printf("PIB jogador 1 venceu (1)\n");
} else {
    printf("PIB jogador 2 venceu (0)\n");
}

if (jogador1.pontos_turisticos > jogador2.pontos_turisticos) {
    printf("Ponto turistico jogador 1 venceu (1)\n");
} else {
    printf("Ponto turistico jogador 2 venceu (0)\n");
}

if (jogador1.pibpercapita > jogador2.pibpercapita) {
    printf("PIB per capita jogador 1 venceu (1)\n");
} else {
    printf("PIB per capita jogador 2 venceu (0)\n");
}

if (jogador1.densidade < jogador2.densidade) {
    printf("Densidade Populacional: Carta 1 venceu (1)\n");
} else {
    printf("Densidade Populacional: Carta 2 venceu (0)\n");
}

if (jogador1.superpoder > jogador2.superpoder) {
    printf("Super poder jogador 1 venceu (1)\n");
} else {
    printf("Super poder jogador 2 venceu (0)\n");
}

return 0;

}