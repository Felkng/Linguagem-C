#include <stdio.h>
/*
espaço = ' ';
enter = '\n'
*/
int main()
{
    char str;
    char leitor;
    int palavra=0;
    char clone_sentenca[150];
    int i=0, save=0;
    for(;;)
        {
            scanf("%c",&str);
            clone_sentenca[i]=str;
            if(str == ' ' || str== '\n'){
                palavra++;
                clone_sentenca[i] = '&';

            }
            if(str=='\n' || i == 149){
                if(i==149)
                    clone_sentenca[i] = '&';
                break;
            }
            i++;
        }
    for(;palavra>0;){
        i--;
        if(clone_sentenca[i] == '&' || i == 0){
            save = i;
            for(i++ ; clone_sentenca[i] != '&' || i == 0; i++){
                if(palavra==1){
                    i--;
                    palavra = 0;
                }
                printf("%c",clone_sentenca[i]);
            }
            i = save;
            palavra--;
            printf(" ");
        }
    }
    return 0;
}

