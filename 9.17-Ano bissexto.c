#include <stdio.h>
int main() 
{
int ano;
printf("insira um ano: \n");
scanf("%d",&ano);
if (ano%400==0)
{
  printf("ano bissexto");
}
else
{
  if(ano%4 == 0 && ano%100 != 0)
  {
    printf("ano bissexto);
  }
  else
  {
    printf("Nao e ano bissexto");
  }
}
return 0;
}
