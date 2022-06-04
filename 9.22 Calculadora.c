#include <stdio.h>
float calculadora(float numero_1, float numero_2, char operacao)
{
    scanf("%f",&numero_1);
    scanf("%f",&numero_2);
    fflush(stdin);
    scanf("%c",&operacao);
    switch(operacao)
    {
        case'+':
            return numero_1 + numero_2;
            break;
        case '-':
            return numero_1 - numero_2;
            break;
        case'*':
            return numero_1 *numero_2;
            break;
        case'/':
            return numero_1 / numero_2;
            break;
    }
}
int main()
{
    float n1,n2,funci;
    char o;
    funci = calculadora(n1,n2,o);
    printf("%.2f",funci);
}
