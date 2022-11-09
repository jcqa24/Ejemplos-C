#include <stdio.h>

int main(){
    int n,r=1;

    do{
        printf("Ingresa un numero ");
        scanf("%d",&n);

        if(n % 2 == 0){
            printf("El numero %d es par",n);
        }else{
            printf("El numero %d es impar",n);
        }

        printf("\n\n¿Quieres ingresar otro numero 1->si 2->no");
        scanf("%d",&r);

    }while(r!=2);
    return 0;
}
