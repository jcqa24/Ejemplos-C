#include <stdio.h>

// 5! = 1x2x3x4x5 = 120
// 5x4x3x2x1

long factorial(int n);

int main(){
    int n;
    long fac;
    printf("Ingresa un numero mayor o igual a 0 ");
    scanf("%d",&n);
    fac = factorial(n);
    printf("El factorial de %d es : %lu \n",n,fac);

    return 0;
}

long factorial(int n){
    if(n <= 1){
        return 1;
    }else{
        return n* factorial(n-1);
    }
}
