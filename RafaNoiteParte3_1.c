#include <stdio.h>
int main(){
    float salario = 1000, salarioAtual, percentual = 1.5/100;
    int i, ano_atual;
    printf("escreva o ano atual: ");
    scanf("%d", &ano_atual);
    salarioAtual = salario;
    for(i = 2006; i <= ano_atual; i++){
        salarioAtual = salario + salario*percentual;
        percentual = percentual*2;
       // printf("%f - %f - %f", salarioAtual, salario, percentual);
}
    printf("seu salario em %d eh: %f",ano_atual,salarioAtual);
}
