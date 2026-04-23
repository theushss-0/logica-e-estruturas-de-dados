#include <stdio.h>


int main(){

    int a, b, c, max, min;

    printf("Informe os numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    min = a;

    if(max < b){
        max = b;
    }else if(min > b){
        min = b;
    }

    if(max < c){
        max = c;
    }else if(min > c){
        min = c;
    }


    printf("Maior numero: %d\n", max);
    printf("Menor numero: %d\n", min);

}