#include <stdio.h>
int main(void)
{
    float notas [10] [3], media [10], soma;
    int j,i;
    for(i=0; i<10; i++){
        soma = 0;
        for(j=0; j<3;j++){
        printf("Nota da %d do aluno %d: \n", j+1, i+1);
        scanf("%f",&notas[i][j]);
        soma = soma + notas[i][j];
        }
        media[i] = soma / j;
    }
    for(i=0;i<10;i++){
        printf("\nMedia do aluno %d = %.2f",i, media[i]);
    }
    return 0;
}
