#include <stdio.h>
int main(){
    int n1,i,somatoriosw = 0;
    for(i = 1; i < 4; i++){
    printf("digite a sua nota %d\n",i);
    scanf("%d", &n1);
    somatoriosw = somatoriosw + n1;
    }
    printf("a media de sua nota eh: %d\n", somatoriosw/3);
    return 0;
}
