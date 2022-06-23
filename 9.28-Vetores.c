#include<stdio.h>
void main()
{
    int A[10],x,ct;
    for(ct=0;ct<10;ct++)
    {
        scanf("%d",&A[ct]);
    }
    printf("\nValor a ser localizado: ");
    scanf("%d",&x);
    for(ct=0;ct<10;ct++)
    {
        if(A[ct]==x)
        {
            printf("ACHEI\nvetor = %d",ct);
            break;
        }
    }
    if(ct==10)
        printf("NAO ACHEI");
}
