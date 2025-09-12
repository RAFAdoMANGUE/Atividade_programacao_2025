#include<stdio.h>
int main(){
    int num1, num2;
    printf("escolha numero 1: ");
    scanf("%d", &num1);

    printf("escolha numero 2: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("numero 1 maior");
    }
    if(num1 < num2){
        printf("numero 2 maior");
    }
    if(num1 == num2){
        printf("numero 2 maior");
    }


}
