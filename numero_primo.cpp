#include <stdio.h>


int main(){

    int num, contador= 1, primo = 1, qtd_divisiveis=0, qtd_nums=0;

    int passos = 0;

    printf("Informe o numero: ");
    scanf("%d", &num);

    printf("Numeros primos: ");
    while (contador < num)
    {

        if(contador % 2 == 0 and contador != 2){
            contador += 1;
            continue;
        }

        for (int i = 1; i <= contador; i++ ){
            if (contador % i == 0){
                qtd_divisiveis +=1;
            }
            passos +=1;
        }

        if (qtd_divisiveis == 2){
            primo = contador;
            qtd_nums +=1;
            printf("%d ", primo);
        }
        qtd_divisiveis = 0;
        contador+=1;
    }
    
    printf("\nRepetições: %d ", passos);
    printf("\nQuantidade de numeros: %d", qtd_nums);
    return 0;
}