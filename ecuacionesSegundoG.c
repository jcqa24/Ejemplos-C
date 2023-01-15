#include <stdio.h>
#include <math.h>

// gcc main.c -o main.out -lm

int main()
{
    //ax^2+bx+c = 0 => x1 = -b + sqrt(b^2 -4ac) / 2a;
    //                 x1 = -b - sqrt(b^2 -4ac) / 2a;

    int a,b,c,res;
    double x1,x2,discriminante;

    do{
        printf("ax^2 + bx + c = 0\n");
        printf("Ingresa el valor de a: ");
        scanf("%d",&a);
        printf("Ingresa el valor de b: ");
        scanf("%d",&b);
        printf("Ingresa el valor de c: ");
        scanf("%d",&c);

        if(a == 0){
            printf("El valor de a debe ser distinto de cero\n");
        }else{
            discriminante = pow(b,2) - 4*a*c;
            if(discriminante < 0){
                printf("La ecuacion no tiene soluciones en los reales \n");
            }else{
                x1 = ((-1*b) + sqrt(discriminante)) / (2*a);
                x2 = ((-1*b) - sqrt(discriminante)) / (2*a);
                printf("\n -> (%d)x^2 + (%d)x + %d = 0\n",a,b,c);
                printf("\n\t x1 = %.5f\n\tx2 = %.5f\n",x1,x2);
            }
        }

        printf("\n\n¿Quieres volver a empezar?\n");
        printf("1-Si\n");
        printf("2-No\n");
        printf("Ingresa una opcion: ");
        scanf("%d",&res);
        printf("\n\n");

    }while(res != 2);

    return 0;
}
