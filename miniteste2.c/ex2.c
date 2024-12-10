#include <stdio.h>
/*Estás responsável por desenvolver o programa que permite otimizar a escolha do serviço de entregas
para cada encomenda em função da zona. O teu programa recebe para cada encomenda um número
identificador da encomenda (valor do tipo int ) bem como a zona de entrega (valor do tipo char )
e, tendo em conta a tabela acima, define qual dos serviços utilizar de modo a minimizar os custos de
transporte. No final o programa deve imprimir o valor total a pagar a cada empresa e o tempo médio das
entregas.
Testa o teu programa com o ficheiro encomendas.txt. Um exemplo de utilização é ./prob2 <
encomendas.txt. */

/*    Zona      uverits (custo/tempo)   blovo (custo/tempo)
        A       5,25 € / 35 minutos     3,50 € / 21 minutos
        B       4,50 € / 22 minutos     4,25 € / 24 minutos
        C       3,25 € / 15 minutos     5,00 € / 24 minutos
        D       3,50 € / 23 minutos     4,50 € / 21 minutos
        E       4,75 € / 30 minutos     4,00 € / 24 minutos */


//bloca A, B e E Blovo;
//bloco C e D = Uverits;

int main(){

    int iden, i = 0;
    char zona;
    float blovo = 0, uverits = 0, tempo = 0;

    //repetição para o arquivo;
    while(scanf("%d %c", &iden, &zona) != EOF){

        //estrutura de seleção para verificar se é uverits ou blovo;
        if (zona == 'C' || zona == 'D')
        {
            printf("Encomenda %d - Uverits \n", iden);

            if(zona == 'C'){
                uverits += 3.25;
                tempo += 15;
            }else {
                uverits += 3.50;
                tempo += 23;
            }
                
        }
            else 
            {
                printf("Encomenda %d - Blovo \n", iden);
                
                if(zona == 'A'){
                    blovo += 3.50;
                    tempo += 21;
                } else if(zona == 'B'){
                    blovo += 4.25;
                    tempo += 24;
                } else{
                    blovo += 4;
                    tempo += 24;
                }
            }   
    i++;
    }

    float media = tempo / i;
    float segundos = 60*(media - (int)media);
    

    printf("Custo total na uverits: %.2f euros. \n", uverits);
    printf("Custo total na blovo: %.2f euros. \n", blovo);
    printf("Tempo médio das entregas: %d minutos e %.f segundos \n", (int)media, segundos);
}