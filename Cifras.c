#include <stdio.h>

int main(){
    int n,d = 0,a;

    printf("Ingresa un numero: ");
    scanf("%d",&n);

    a =n;

    while( n != 0 ){

        n = n /10;
        d++;
    }

    printf("El numero %d tiene %d digitos",a,d);

    return 0;
}
