#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num, usuario, intentos = 0;
    int min,max;

    min = 1;
    max = 100;

    srand(time(NULL));

    num = rand() % (max-min+1) + min;

    do{
       printf("Ingresa un numero entre %d y %d \n",min,max);
       scanf("%d",&usuario);
       if(num > usuario){
        printf("El numero que buscas es mayor\n");
       }else if(num < usuario){
        printf("El numero que buscas es menor\n");
       }
       intentos ++;

    }while(num != usuario);
        printf("Felicidades adivinaste el numero %d  en %d intentos",num,intentos);
    return 0;
}
