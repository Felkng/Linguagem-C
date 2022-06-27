#include <stdio.h>
void main()
{
    int tabu[8][8]={1, 3, 0, 5, 4, 0, 2, 1,1, 0, 1, 0, 0, 1, 0, 0,0, 0, 0, 0, 1, 0, 6, 0,1, 0, 0, 1, 1, 0, 0, 1,0, 1, 0, 4, 0, 0, 1, 0,0, 0, 3, 1, 0, 0, 1, 1,1, 0, 6, 6, 0, 0, 1, 0,1, 0, 5, 0, 1, 1, 0, 6};
    int i,j,pecas=6,total=0;
    int rainha=0,rei=0,bispo=0,torre=0,cavalo=0,peao=0;
    for(i=0;i<8;i++)
    {
        for(;pecas>0;pecas--)
        {
            for(j=0;j<8;j++)
            {
                if(tabu[i][j]==6)
                        rainha++;
                else if(tabu[i][j]==5)
                        rei++;
                else if(tabu[i][j]==4)
                        bispo++;
                else if(tabu[i][j]==3)
                        torre++;
                else if(tabu[i][j]==2)
                        cavalo++;
                else if(tabu[i][j]==1)
                        peao++;
                if(j==7 && pecas== 6)
                    printf("linha %d tem %d rainhas\n",i+1,rainha);
                else if(j==7 && pecas == 5)
                    printf("linha %d tem %d reis\n",i+1,rei);
                else if(j==7 && pecas == 4)
                    printf("linha %d tem %d bispos\n",i+1,bispo);
                else if(j==7 && pecas == 3)
                    printf("linha %d tem %d torres\n",i+1,torre);
                else if(j==7 && pecas == 2)
                    printf("linha %d tem %d cavalos\n",i+1,cavalo);
                else if(j==7 && pecas == 1)
                    printf("linha %d tem %d peoes\n",i+1,peao);
            }
            rainha=0;
            rei=0;
            bispo=0;
            torre=0;
            cavalo=0;
            peao=0;
        }
        pecas=6;
        printf("\n");
    }
    for(i=0,j=0;i!=8;)
    {
        if(tabu[i][j]!=0)
            total++;
        j++;
        if(j==7)
            {
                j=0;
                i++;
            }
    }
    printf("\ntotal de pecas = %d",total);
}
