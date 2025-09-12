#include<stdio.h>
int main(){
int num1 = 0,num2 = 0,num3 = 0;
printf("escolha o numero 1: ");
scanf("%d", &num1);
printf("agora escolha o numero 2: ");
scanf("%d", &num2);
printf("agora escolha o numero 3: ");
scanf("%d", &num3);

if(num1 < num2 && num1 < num3){
    if(num2 < num3){
    printf("a ordem crescente eh: %d - %d - %d", num1,num2,num3);
    }
    if(num3 < num2){
    printf("a ordem crescente eh: %d - %d - %d", num1,num3,num2);
    }
}
if(num2 < num1 && num2 < num3){
    if(num1 < num3){
    printf("a ordem crescente eh: %d - %d - %d", num2,num1,num3);
    }
    if(num1 > num3){
    printf("a ordem crescente eh: %d - %d - %d", num2,num3,num1);
    }
}

if(num3 < num1 && num3 < num2){
    if(num2 < num1){
    printf("a ordem crescente eh: %d - %d - %d", num3,num2,num1);
    }
    if(num2 > num1){
        printf("a ordem crescente eh: %d - %d - %d", num3,num1,num2);
    }
}

if(num1 == num2 && num1 < num3){
    printf("a ordem crescente eh: %d - %d - %d", num1,num2,num3);
}
if(num1 == num2 && num1 > num3){
    printf("a ordem crescente eh: %d - %d - %d", num3,num2,num1);
}

if(num3 == num2 && num2 < num1){
    printf("a ordem crescente eh: %d - %d - %d", num2,num3,num1);
}
if(num3 == num2 && num2 > num1){
    printf("a ordem crescente eh: %d - %d - %d", num1,num2,num3);
}

if(num1 == num3 && num1 < num2){
    printf("a ordem crescente eh: %d - %d - %d", num1,num3,num2);
}
if(num1 == num3 && num1 > num2){
    printf("a ordem crescente eh: %d - %d - %d", num3,num1,num2);
}

}
