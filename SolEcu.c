#include <stdio.h>

int main(){

    // ax + b = 0
    // ax = -b -> x = -b/a

    int a,b,res;
    float x;

    do{
       printf("ax + b = 0 \n");
       printf("Ingresa el valor de a: ");
       scanf("%d",&a);
       printf("Ingresa el valor de : ");
       scanf("%d",&b);

       if(a == 0){
            printf("El valor de a debe ser distinto de 0\n");

       }else{
            x = (-1.0*b) / a;
            printf("(%d)x + (%d) = 0",a,b);
            printf("\t-> x = %.5f",x);
       }

       printf("\n\nQuieres iniciar de nuevo?\n");
       printf("1-Si\n");
       printf("2-No\n");
       printf("Ingresa una opcion: ");
       scanf("%d",&res);
       printf("\n\n");

    }while(res != 2);

    return 0;
}
