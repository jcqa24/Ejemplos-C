#include <stdio.h>
#include <math.h>

// gcc main.c -o main.out -lm

int main(){
    int opc;
    float h,c1,c2;
    do{
        printf("\n\n");
        printf("1- Calcular un cateto\n");
        printf("2- Calcular la hipotenusa\n");
        printf("3- Salir\n");
        printf("Ingresa una opcion: ");
        scanf("%d",&opc);

        if(opc == 1){
            printf("Ingresa el valor de la hipotenusa: ");
            scanf("%f",&h);
            printf("Ingresa el valor del cateto: ");
            scanf("%f",&c1);
            if(h<0 || c1<0)
            if(h<c1){
                printf("El valor de la hipotenusa debe ser mayor al valor del cateto\n\n");
            }else{
                c2 = sqrt(pow(h,2) - pow(c1,2));
                printf("El valor del cateto es: %.5f\n\n",c2);
            }
        }else if(opc == 2){
            printf("Ingresa el valor del primer cateto: ");
            scanf("%f",&c1);
            printf("Ingresa el valor del segundo cateto: ");
            scanf("%f",&c2);
            h = sqrt(pow(c1,2) + pow(c2,2));
            printf("El valor de la hipotenusa es: %.5f\n\n",h);

        }else{
            printf("Opcion no valida\n\n");
        }


    }while(opc != 3);


    return 0;
}
