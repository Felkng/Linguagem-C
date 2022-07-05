#include <stdio.h>
int main(){
    int n;
    int z;
    int i;
    scanf("%d",&n);
    z=n;
    i=n;
    for(;;){
        if(z%i==0&&i>0)
            i--;
        else{
            z++,i=n;
        }
        if(i==0)
            break;
    }
    printf("%d",z);
    return 0;
}
