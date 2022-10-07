#include <stdio.h>

int main(){
        int divisor,dividendo,cociente, residuo;

        printf("Ingresa el dividendo: ");
        scanf("%d",&dividendo);
        printf("\nIngresa el divisor: ");
        scanf("%d",&divisor);

        residuo = dividendo % divisor;
        cociente = dividendo / divisor;

        if(residuo == 0){
            printf("\nLa division es entera cociente: %d ", cociente);
        }else{
            printf("\nLa no division es entera cociente: %d residuo %d", cociente, residuo);
        }


}
