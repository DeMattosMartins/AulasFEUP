/*Altera o programa desenvolvido em 2.a utilizando a função custo, a qual permite calcular o custo de
um serviço numa zona específica. */

#include <stdio.h>

float custo(char zona, int servico){
    
    //custo blovo
    if(servico == 1){
        //blovo zona a;
        if(zona == 'A'){
            return 3.50;
        //blovo zona b;
        }else if (zona == 'B'){
            return 4.25;
        //blovo zona e;
        } else {
            return 4;
        }
    //custo uverits;
    }   else {
            //uverits zona c;
            if(zona == 'C'){
                return 3.25;
            //uverits zona d;
            }else {
                return 3.50;
            }
        }

}

int main(){

    int iden, i = 0;
    char zona;
    float blovo = 0, uverits = 0, tempo = 0;

    //estrutura de repetição para percorrer todo o arquivo;
    while(scanf("%d %c", &iden, &zona) != EOF){

        //seleção para uverits;
        if (zona == 'C' || zona == 'D')
        {
            int u = 0;
            printf("Encomenda %d - Uverits \n", iden);

            //uverits zona c;
            if(zona == 'C'){
                uverits += custo(zona, u);
                tempo += 15;
            //uverits zona d;
            }else {
                uverits += custo(zona, u);
                tempo += 23;
            }
                
        }   
            //else para que, não seja uverits, sera blovo;
            else 
            {
                int b = 1;
                printf("Encomenda %d - Blovo \n", iden);
                
                //blovo zona a;
                if(zona == 'A'){
                    blovo += custo(zona, b);
                    tempo += 21;
                //blovo zona b;
                } else if(zona == 'B'){
                    blovo += custo(zona, b);
                    tempo += 24;
                //blovo zona c;
                } else{
                    blovo += custo(zona, b);
                    tempo += 24;
                }
            }
    //i para contar quantas vezes o while aconteceu;   
    i++;
    }
    //media dos tempos;
    float media = tempo / i;

    //calcular os segundos;
    float segundos = 60*(media - (int)media);
    

    printf("Custo total na uverits: %.2f euros.\n", uverits);
    printf("Custo total na blovo: %.2f euros. \n", blovo);
    printf("Tempo médio das entregas: %d minutos e %.f segundos \n", (int)media, segundos);
}