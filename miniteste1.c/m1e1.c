/*Desde 2006 que a China tem liderado como o maior emissor mundial de dióxido de carbono (CO2).
E Portugal? Como se compara o nosso país com a China?
Desenvolve um programa que efetua a análise das emissões de CO2, em Portugal e na China, entre
2000 e 2020. Para um dado ano, o programa deve ler 2 valores relativos a cada país:*/

#include <stdio.h>

int main(){

    int popPT, popCH, ano = 2000;
    float coPT, coCH, perCapCH, perCapPT;
    int verifica;

    printf("Emissões de CO2 per capita: \n");
    printf("ANO PT CN \n");

    while(scanf("%d %f %d %f", &popPT, &coPT, &popCH, &coCH) != EOF){

        float coPT2 = coPT * 1000 * 1000;
        float coCH2 = coCH * 1000 * 1000;
    
        perCapCH = (coCH2/popCH);
        perCapPT = (coPT2/popPT);

            printf("%d %.2f %.2f \n", ano, perCapPT, perCapCH);
        
        ano++;

        if(perCapPT > perCapCH){
            verifica = ano;
        }
    }
    printf("Ano que a China passou Portugal: %d \n", verifica);
}
