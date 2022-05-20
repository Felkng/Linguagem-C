#include <stdio.h>
int soma(int x, int y)
{
    return(x+y);
}
int multi(int z, int v)
{
    return(z*v);
}
int div(int a, int b)
{
    return(a/b);
}
int sub(int n, int m)
{
    return(n-m);
}
int resto(int f, int g)
{
    return(f%g);
}
int main()
{
    int SOMA;
    int VEZES;
    int DIVISAO;
    int SUBTRACAO;
    int RESTO;
    int v1,v2;
    printf("Insira aqui dois numeros inteiros para serem somados, multiplicados, divididos, subtraidos e terem seus restos de divisao: ");
    scanf("%d", &v1);
    scanf("%d", &v2);
    SOMA = soma(v1,v2);
    VEZES = multi(v1,v2);
    DIVISAO = div(v1,v2);
    SUBTRACAO = sub(v1,v2);
    RESTO = resto(v1,v2);
    printf("\n Soma do primeiro pelo segundo: %d\n Multiplicacao do primeiro pelo segundo: %d\n Divisao do primeiro pelo segundo: %d\n Subtracao do primeiro pelo segundo: %d\n Resto de divisao do primeiro pelo segundo: %d",SOMA,VEZES,DIVISAO,SUBTRACAO,RESTO);
}
