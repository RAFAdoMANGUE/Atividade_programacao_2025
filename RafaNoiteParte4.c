#include<stdio.h>
int main(){
    int num1,num2,num3,num4;


    printf("escreva o numero 1: ");
    scanf("%d", &num1);

    printf("escreva o numero 2: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("numero 2 maior que o numero 1: ");
        return 0;
    }

    printf("escreva o numero 3: ");
    scanf("%d", &num3);

    printf("agora escreva o numero4: ");
    scanf("%d", &num4);

    if(num4 > num3 && num4 > num2){
        printf("ordem crescente eh %d - %d - %d - %d",num1,num2,num4,num3);
    }
    if(num4 > num3 && num4 < num2){
        printf("ordem crescente eh %d - %d - %d - %d",num3,num4,num1,num2);
    }
    if(num4 < num3 && num4 < num2){
        if(num3 > num2){
        printf("ordem crescente eh %d - %d - %d - %d",num4,num1,num2,num3);
        }
        if(num2 > num3){
        printf("ordem crescente eh %d - %d - %d - %d",num4,num3,num1,num2);
        }
    }
}
