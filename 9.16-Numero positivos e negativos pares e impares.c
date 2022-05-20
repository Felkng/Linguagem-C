#include <stdio.h>
int main () {
int numero;
printf("Digite um numero: \n");
scanf("d",&numero);
if(numero%2==0)
{
  printf("par");
}
else
{
  printf("\nimpar");
}
if(numero>0)
{
  printf("\npositivo");
}
else
{
  if(numero<0)
  {
    printf("\nnegativo");
  }
  else
  {
    printf("\nZero");
  }
}
return 0;
}
