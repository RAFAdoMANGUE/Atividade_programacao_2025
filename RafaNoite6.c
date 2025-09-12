#include <stdio.h>
int main (){
float salarioB = 0, bonific = 1, imposto = 1;
printf("qual seu salario?: ");
scanf("%f", &salarioB);
bonific = salarioB * 5/100;
imposto = salarioB * 7/100;
salarioB = salarioB - imposto + bonific;
printf("seu salario novo eh: %.2f", salarioB);

}
