#include<stdio.h>
int main(){
    float nota1,nota2,nota3,notaT;
    int p1 = 2,p2 = 3,p3 = 5,i;

    printf("escreva sua nota 1 :");
    scanf("%f", &nota1);
    notaT = notaT + nota1*p1;

    printf("escreva sua nota 2 :");
    scanf("%f", &nota2);
    notaT = notaT + nota2*p2;

    printf("escreva sua nota 3 :");
    scanf("%f", &nota3);
    notaT = notaT + nota3 * p3;

    notaT = notaT/(p1+p2+p3);

    printf("sua nota eh: %.2f", notaT);
    if(notaT >= 80){
        printf(" nota: A ");
    }
    if(notaT <= 79 && notaT >= 70  ){
        printf(" nota: B ");
    }
    if(notaT <= 69 && notaT >= 60  ){
        printf(" nota: C ");
    }
    if(notaT <= 59 && notaT >= 50  ){
        printf(" nota: D ");
    }
    if(notaT <= 49){
        printf(" nota: E ");
    }
    }
