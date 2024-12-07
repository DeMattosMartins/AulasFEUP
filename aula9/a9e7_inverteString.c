/*#include <stdio.h>
#include <string.h>

    #define MAX 50

int main(){

    char text[MAX];
    int i;

    printf("Diga uma frase: ");
    fgets(text, MAX, stdin);

    for (i = strlen(text) - 1; i >= 0; i--){
        printf("%c", text[i]);
    }
}*/

#include <stdio.h>
#include <string.h>

#define MAX 50

void inverte(char *strOriginal, char *strInvertida){

    int j = 0;
    for (int i = strlen(strOriginal) - 2; i >= 0; i--){
        strInvertida[j] = strOriginal[i];
        j++;
    }
}

int main()
{
    /* Responder aqui */
    char text[MAX], invertida[MAX];
    
    //printf("Diga uma frase: ");
    fgets(text, MAX, stdin);
    //text[strlen(text) - 1] = '\0';
    inverte(text, invertida);

    printf("A frase invertida e: %s.", invertida);

    return 0;
}