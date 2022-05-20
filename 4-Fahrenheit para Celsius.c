#include <stdio.h>
int main(){
    float f, celsius;
    printf("Insira aqui a sua temperatura atual em Fahrenheit:");
    scanf("%f", &f);
    celsius = (f-32)/1.8;
    printf("Essa e a sua temperatura em graus Celsius: %.2f", celsius);
    return 0;
}
