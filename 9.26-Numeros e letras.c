#include <stdio.h>
#include <string.h>
int main()
{
    char full[100];
    int numeros=0;
    int n_leitor=0;
    int x=0;
    int letras=0;
    int total_L=0;
    scanf("%s",full);
    fflush(stdin);
    total_L = strlen(full);
    for(;n_leitor<total_L;n_leitor++)
    {
        x = 0;
        x = (int)full[n_leitor];
        if(x >= 48 && x <= 57)
            numeros++;
        else if(x >= 65 && x <= 90)
            letras++;
        else if(x >= 97 && x <= 122)
            letras++;
    }
    printf("Total de letras: %d\n",total_L);
    printf("Letras: %d\n", letras);
    printf("Numeros: %d\n", numeros);
    return 0;
}
