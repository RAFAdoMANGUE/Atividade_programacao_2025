#include <stdio.h>
int main(){
float salarioB = 0, bonific = 1, imposto = 1;
printf("qual seu salario?: ");
scanf("%f", &salarioB);
bonific = 50;
imposto = salarioB * 10/100;
salarioB = salarioB - imposto + bonific;
printf("seu salario novo eh: %.2f", salarioB);
}
