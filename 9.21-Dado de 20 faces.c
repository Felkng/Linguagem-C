#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void dado(int min, int max)
{
    int T=time(NULL);
    srand(T);
    printf("%d",rand()%(max-min)+min);
}
void main()
{
    dado(1,20);
}
