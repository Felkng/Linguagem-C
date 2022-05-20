#include <stdio.h>
int main()
{
  int total, quantA,precU;
  float desconto,totalP;
  printf("Insira aqui a quantidade adquirida \ne o preco unitario \nrespectivamente: \n");
  scanf("%d%d",&quantA,&precU);
  total=quantA*precU;
  printf("\ntotal:%.2f(float)total);
  if(quantA <= 5)
  {
    desconto = 0.98;
    printf("\ndesconto: %.2f,desconto);
  }
  else
  {
    if(quantA > 5 && quantA <= 10)
    {
      desconto = 0.97;
      printf("\ndesconto: %.2f,desconto);
    }
    else
    {
      desconto = 0.95;
      printf("\ndesconto: %.2f", desconto);
    }
  }
  totalP = total*desconto;
  printf("\ntotal a pagar: %.2f,totalP);
  return 0;
}
