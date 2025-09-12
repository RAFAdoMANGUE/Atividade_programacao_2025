#include <stdio.h>
int main(){
    int n1 = 0,p1 = 0,media = 0,peso = 0,i = 0;
    for(i = 1; i < 4; i++){
        printf("escreva a nota %d:", i);
        scanf("%d", &n1);
        printf("escreva o peso dessa nota %d:",i);
        scanf("%d", &p1);
        peso = peso + p1;
        media = media + n1 * p1;
        n1 = 0;
        p1 = 0;
        if(i == 3){
            media = media/peso;
            printf("Sua media ponderada eh: %d", media);
        }
    }

}
