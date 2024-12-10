#include <stdio.h>

/*Sabes quantos exemplares de jornais e revistas são impressos, colocados no mercado ou vendidos?
Escreve um programa que analisa a produção de jornais e outras publicações periódicas ao longo dos
últimos 20 anos. Para cada ano o programa deve ler 3 valores inteiros: o ano, a tiragem (número de
exemplares produzidos) e o número de exemplares vendidos. Para cada ano deve ser calculada a diferença
entre exemplares produzidos e exemplares vendidos. No final, o programa deve apresentar o ano em que
foram produzidos menos exemplares e o ano em que a diferença entre produzidos e vendidos foi maior.
Testa o teu programa com o ficheiro exemplares.txt. Um exemplo de utilização é ./prob1 <
exemplares.txt.*/

int main (){

    int ano, tiragem, vendidos, menos = 1000000, anoMenos, diferencaMaior = 0, anoDiferenca;
    
    //estrutura de respetição para percorrer todo o arquivo;
    while(scanf("%d %d %d", &ano, &tiragem, &vendidos) != EOF){

        //calcular e imprimir a diferença;
        int diferenca = tiragem - vendidos;
        printf("Diferença em %d: %d \n", ano, diferenca);

            //verificar o ano de menor diferença;
            if(diferencaMaior < diferenca){
                diferencaMaior = diferenca;
                anoDiferenca = ano;
            }
            //verificar o ano de menor tiragem;
            if (tiragem < menos){
                menos = tiragem;
                anoMenos = ano;
            }
        
        }

        printf("Ano em que foram produzidos menos exemplares: %d \n", anoMenos);
        printf("Ano em a diferença entre produzidos e vendidos foi maior: %d \n", anoDiferenca);
}