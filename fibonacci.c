#include <stdio.h>


int main(){
    int f0,f1,fn,count,i;

    f0 = 0;
    f1 = 1;

    printf("Cuantos numeros de la sucesion quieres: ");
    scanf("%d",&count);

    printf("1, ");

    for(i=0;i<count-1;i++){
        fn = f0 + f1;
        printf("%d, ",fn);
        f0 = f1;
        f1 = fn;
    }

    return 0;
}
