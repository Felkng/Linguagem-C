<h1> Impressão na tela</h1>

  ```c
  #include<stdio.h>
  void main(){
    int num = 2;
    printf("Imprima o numero %d",num);
  }
  ```
  
  #
  
<h1>Input do teclado</h1>

```c
#include<stdio.h>
int main(){
    int ex;
    scanf("%d",&ex);
}
```
#

<h1>Caracteres de controle e Operadores lógicos</h1>

<strong>"%d"</strong> = int

<strong>"%f"</strong> = float ou double

<strong>"%lf"</strong> = double

<strong>"%c"</strong> = char

<strong>"%s"</strong> = string

<strong>"||"</strong> = ou

<strong>"&&"</strong> = e

<strong>"!"</strong> = não

#

<h1>Declaração de variáveis e array/vetores</h1>

```c
#include<stdio.h>
void main(){
  char ex; //exemplo char
  char[10] ex1; //exemplo string de 10 casas (começa com 0 e termina em \0)
  int ex3; //exemplo int
  int[4] ex4; //exemplo de vetor unidimensional
  int[3][2] ex5; //exemplo de vetor multidimensional (matriz)
}
```

#

<h1>Função rand(aleatório)</h1>

```c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int T=time(NULL);
    srand(T);
    printf("%d",rand()%6); //sorteia um número aleatório de 0-5
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int T=time(NULL);
    srand(T);
    printf("%d",rand()%6+1); //sorteia um número aleatório de 1-6
}
```
#

<h1>Algumas bibliotecas </h1>

https://www.ime.usp.br/~pf/algoritmos/apend/interfaces.html#:~:text=Todos%20os%20programas%20em%20linguagem,%2C%20ou%20application%20programming%20interface.)

































































