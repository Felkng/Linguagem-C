#include <stdio.h>
int main()
{
    int in, serie, ct_loop, add, change=1;
    scanf("%d",&in);
    for(serie=1,ct_loop=0, add=0;ct_loop < in; ct_loop++)
    {
            switch(change)
            {
                case 1:
                    add+=serie;
                    printf("%d ",serie);
                    change = 2;
                continue;
                case 2:
                    serie += add;
                    printf("%d ", add);
                    change = 1;
            }
    }
return 0;
}
