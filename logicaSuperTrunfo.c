/*teste super trunfo sessao dos comentarios*/
/*super trunfo deyvid*/

#include <stdio.h>

int main()
{   
    //começo da Carta 1
    char Estado[4] = "PE";
    char Codico_da_Carta[10] = "PE01";
    char Nome_da_Cidade[20] = "Recife";
    int Populacao = 1488920;
    int Num_de_Pontos_turisticos = 30;
    float Area_em_km = 218.8;
    float PIB = 66.35;
    float Densidade_Populacional = Populacao / Area_em_km;
    float PIB_per_Capita = Populacao / PIB;
    float SUPER_PODER = Populacao + Num_de_Pontos_turisticos + Area_em_km + PIB;

    printf("Carta 1\n");
    printf("Estado: %s\n", Estado);
    printf("Codico da Carta: %s\n", Codico_da_Carta);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade);
    printf("Populacao: %d milhoes\n", Populacao);
    printf("Area: %.2fkm2\n", Area_em_km);
    printf("PIB: %.2f bilhoes de Reais\n", PIB);
    printf("Pontos Turisticos: %d\n", Num_de_Pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", Densidade_Populacional);
    printf("PIB per Capita:%.2f\n", PIB_per_Capita);
    printf("SUPER PODER:%.2f\n", SUPER_PODER);
    // fim da carta 1

    //começo da Carta 2
    char Estado_carta2[5] = "BA";
    char Codico_da_Carta2[10] = "BA01";
    char Nome_da_Cidade_carta2[20] = "Salvador";
    int Populacao_carta2 = 2564204;
    int Num_de_Pontos_turisticos_carta2 = 20;
    float Area_em_km_carta2 = 693.8;
    float PIB_carta2 = 62.95;
    float Densidade_Populacional_carta2 = Populacao_carta2 / Area_em_km_carta2;
    float PIB_per_Capita_carta2 = Populacao_carta2 / PIB_carta2;
    float SUPER_PODER_Carta2 = Populacao_carta2 + Num_de_Pontos_turisticos_carta2 + Area_em_km_carta2 + PIB_carta2;
    
    printf("Carta 2\n");
    printf("Estado: %s\n", Estado_carta2);
    printf("Codico da Carta: %s\n", Codico_da_Carta2);
    printf("Nome da Cidade: %s\n",Nome_da_Cidade_carta2);
    printf("Populacao: %d milhoes\n", Populacao_carta2);
    printf("area: %.2fkm2\n", Area_em_km_carta2);
    printf("PIB: %.2f bilhoes de Reias\n", PIB_carta2);
    printf("Pontos Turisticos: %d\n", Num_de_Pontos_turisticos_carta2);
    printf("Densidade Populacional: %.2f\n", Densidade_Populacional_carta2);
    printf("PIB per Capita: %.2f\n", PIB_per_Capita_carta2);
    printf("SUPER PODER: %.2f\n", SUPER_PODER_Carta2);
    //fim da carta2//

    // comparacao
    printf("comparacao entre as cartas\n");

    if (Populacao > Populacao_carta2)
    {
        printf("A carta 1 tem maior populacao que a carta 2\n");
    }else{
        printf("A carta 2 tem maior populacao que a carta 1\n");

    }
    
     if (Num_de_Pontos_turisticos > Num_de_Pontos_turisticos_carta2)
    {
        printf("A carta 1 tem mais pontos turisticos que a carta 2\n");
    }else{
        printf("A carta 2 tem mais pontos turisticos que a carta 1\n");

    }
    
    if (Densidade_Populacional < Densidade_Populacional_carta2)
    {
        printf("A carta 1 tem menor densidade populacional que a carta 2\n");
    }else{
        printf("A carta 2 tem menor densidade populacional que a carta 1\n");

    }

    if (PIB_per_Capita > PIB_per_Capita_carta2)
    {
        printf("A carta 1 tem o PIB per capita maior que a carta 2\n");
    }else{
        printf("A carta 2 tem o PIB per capita maior que a carta 1\n");

    }

    printf("DUELO DE SUPER PODER!!! obs:vale 2 pontos\n");
     if (SUPER_PODER > SUPER_PODER_Carta2)
    {
        printf("A carta 1 tem maior SUPER PODER que a carta 2\n");
    }else{
        printf("A carta 2 tem maior SUPER PODER que a carta 1\n");

    }

    printf("A carta 1 venceu o duelo contra a carta 2 por uma placar de 5x1\n");
    return 0;
}