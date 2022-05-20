#include <stdio.h>
int soma(int x, int y)
{
    return (x+y); //Fiz com que toda vez que a variável "soma" fosse usada ela PEDIRIA que retornasse 2 valores inteiros a serem definidos
}
int main()
{
    int valor1 , valor2; //numeros a serem somados
    int SOma; //variável para se igualar a variável "soma" a fim de permitir a soma de 2 numeros
    printf("Digite aqui 2 valores para serem somados: ");
    scanf("%d", &valor1); //pedi primeiro numero da adição
    scanf("%d", &valor2); //pedi segundo numero da adição
    SOma = soma(valor1,valor2);//Enfim, igualei as variáveis "SOma" e "soma", esta última já com as variáveis numéricas a serem somadas
    printf("%d", SOma); //imprime o valor de "SOma" que é o mesmo de "soma" que retorna a adição do "valor1" com o "valor2", já que esses foram definidos como 'x' e 'y'
    return 0;
}
