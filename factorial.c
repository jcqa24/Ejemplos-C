#include <stdio.h>

int main(){
    int i,n,fac=1,res;

do{
    printf("Ingresa un numero ");
    scanf("%d",&n);

    if(n < 0){
        printf("Debes ingresar un numero mayor o igual a 0\n");
    }else if(n == 0 || n == 1){
        printf("El factorial de %d es 1\n",n);
    }else{
        for(i=1;i<=n;i++){
            fac = fac *i;
        }
        printf("El factorial de %d es %d\n",n,fac);
    }

    printf("Quieres calcular otro factorial\n1->si\n2->no\n");
    scanf("%d",&res);
}while(res != 2);
    return 0;
}
