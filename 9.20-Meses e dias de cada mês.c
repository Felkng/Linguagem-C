#include<stdio.h>

int main()
{
    int mes=0,dia=0;
    printf("Digite o mês:\n");
    scanf("%d",&mes);
    switch(mes){
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
      dia+=1;
      case 4:
      case 6:
      case 9:
      case 11:
      dia+=2;
      case 2:
      dia+=28;
    }
    printf("%d",dia);
    return 0;
}
