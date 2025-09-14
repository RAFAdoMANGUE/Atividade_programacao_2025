#include<stdio.h>
int main(){
    float nota1,nota2,nota3,notaT,exame = 0,notaA;


    printf("escreva sua nota 1 :");
    scanf("%f", &nota1);
    notaT = notaT + nota1;

    printf("escreva sua nota 2 :");
    scanf("%f", &nota2);
    notaT = notaT + nota2;

    printf("escreva sua nota 3 :");
    scanf("%f", &nota3);
    notaT = notaT + nota3;

    notaT = notaT/3;

    if(notaT > 70){
        printf("Aprovado ");
    }
    if(notaT <= 69 && notaT > 30){
        printf(" Vai precisar de exame ");
        exame = 69 - notaT;
        printf("vai precisar tirar no exame: %.2f", exame);
    }
    if(notaT < 30){
        printf("Reprovado");
    }



}
