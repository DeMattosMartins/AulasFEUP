/*Altera o programa desenvolvido em 2a utilizando a função contribuicao, a qual permite calcular a
contribuição, em percentagem, da agricultura para as emissões de N2O. */

float contribuicao ( float emissao_setor , float emissao_total ){
    
    return (emissao_setor*100)/emissao_total;
    
}

#include <stdio.h>

int main(){
    
    printf("Contribuição da agricultura para as emissões de N2O: \n");
    printf("Ano Porcentagem \n");

    int ano, i = 0, ano1, ano2; float total = 0, anoMais = 0, anoMenos = 10000, media, no2, agriNo2;

    while (scanf("%d %f %f", &ano, &no2, &agriNo2) != EOF){
        
        float porcentagem = contribuicao(agriNo2, no2);
            printf("%d %.1f %% \n", ano, porcentagem);

            if(porcentagem > anoMais){
                anoMais = porcentagem;
                ano1 = ano;

            } if (no2 < anoMenos){
                anoMenos = no2;
                ano2 = ano;
            }

        total += no2;
        i++;
    }
        media = (total / i);

    printf("Ano em que a agricultura mais contribuiu para as emissões de N2O per capita: %d \n", ano1);
    printf("Ano em que as emissões de N2O per capita foram mais reduzidas: %d \n", ano2);
    printf("Média das emissões de N2O per capita: %.3f \n", media);
}