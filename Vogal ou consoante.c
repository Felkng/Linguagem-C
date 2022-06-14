#include<stdio.h>
int main()
{
    char letra[10];
    int x=0;
    for(;;)
    {
        scanf("%s",letra);
        fflush(stdin);
        x = letra[0];
        if(x==36)
            break;
        else if(x == 97 || x == 101 || x == 105 || x == 111 || x == 117)
                printf("Vogal.\n");
        else if(x == 65 || x == 69 || x == 73 || x == 79 || x == 85)
                printf("Vogal.\n");
        else if (x <= 64 || x == 95 || x == 96)
                printf("Nao e uma letra do alfabeto.\n");
        else
                printf("Consoante.\n");
    }
     return 0;
}
