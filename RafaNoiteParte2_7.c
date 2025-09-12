#include<stdio.h>
#include <math.h>
int main(){
    int soma,num1,num2,escolha;
    float raiz;
    printf("somar numeros = 1 raiz quadrada de um numero = 2");
    scanf("%d", &escolha);
    if(escolha == 1){
        printf("escolha o numero 1");
        scanf("%d", &num1);
        printf("escolha o numero 2");
        scanf("%d", &num2);
        soma = num1 + num2;
        printf("A soma deles eh: %d",soma);
    }
    if(escolha == 2){
        printf("qual numero voce quer saber a raiz quadrada: ");
        scanf("%f", &raiz);
        printf("%f",sqrt(raiz));
    }
}
