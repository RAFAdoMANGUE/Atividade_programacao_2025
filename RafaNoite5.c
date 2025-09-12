#include<stdio.h>
int main(){
float salarioA = 0,SalarioB = 0,aumento = 0;
    printf("escreva seu salario:");
    scanf("%f", &salarioA);
    SalarioB = salarioA * 1.25;
    aumento = SalarioB - salarioA;
    printf("seu pertencual de aumento eh: %.2f", aumento);
    printf("seu salario com aumento eh: %.2f", SalarioB);
}
