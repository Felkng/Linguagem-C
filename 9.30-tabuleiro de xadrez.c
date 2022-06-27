#include <stdio.h>
void main()
{
    int tabu[8][8]={1, 3, 0, 5, 4, 0, 2, 1,1, 0, 1, 0, 0, 1, 0, 0,0, 0, 0, 0, 1, 0, 6, 0,1, 0, 0, 1, 1, 0, 0, 1,0, 1, 0, 4, 0, 0, 1, 0,0, 0, 3, 1, 0, 0, 1, 1,1, 0, 6, 6, 0, 0, 1, 0,1, 0, 5, 0, 1, 1, 0, 6};
    int i,j,total=0;
    int rainha=0,rei=0,bispo=0,torre=0,cavalo=0,peao=0;
    for(i=0;i<8;i++)
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
            }
            if(j==8)
                    printf("A linha %d tem: %d rainhas, %d reis, %d bispos, %d torres, %d cavalos e %d peoes\n",i+1, rainha, rei, bispo, torre, cavalo, peao);
            rainha=0;
            rei=0;
            bispo=0;
            torre=0;
            cavalo=0;
            peao=0;
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
