
#include <stdio.h>
int main()
{
    int fator=0, nfator=0, fatorial=0;
    scanf("%d",&fator);
    if(fator == 0)
            fatorial = 1;
    else
    {
        for(nfator=fator;nfator>1;nfator--)
        {
            if(fator == nfator)
                fatorial = fator;
            else
                fatorial = fatorial*nfator;
        }
    }
    printf("%d! = %d",fator, fatorial);
    return 0;
}
