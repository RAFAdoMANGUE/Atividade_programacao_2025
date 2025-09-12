#include<stdio.h>
int main(){
    int num1,rest;
    printf("escolha um numero: ");
    scanf("%d", &
          num1);
    rest = num1%2;
    if(rest == 0){
        printf("seu numero e par");
    }
    else{
        printf("seu numero e impar");
    }


}
