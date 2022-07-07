#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char palavra1[50];
    char palavra2[50];
    int i=0,j=0;
    scanf("%s",&palavra1);
    fflush(stdin);
    scanf("%s",&palavra2);
    fflush(stdin);
    if(strlen(palavra1) != strlen(palavra2)){
        printf("Nao sao anagramas.");
        return 0;
    }
    for(i=1,j=0;;i++){
        for(j=0;;j++){
            if(toupper(palavra1[i-1]) == toupper(palavra2[j])){
                if(i == strlen(palavra2)){
                    printf("As palavras sao anagramas.");
                    return 0;
                }
                break;
            }
            if(j == strlen(palavra2)+1 && toupper(palavra1[i-1]) != toupper(palavra2[j])){
                printf("Nao sao anagramas.");
                return 0;
            }
        }
    }
    return 0;
}
