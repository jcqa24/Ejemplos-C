#include <stdio.h>

int main(){
    int i,k, res = 0;

    for(k=3;k<=5;k++){
        for(i=2;i<=5;i++){
            res += 5*i*k;
        }
    }

    printf("El resultado de la suma es: %d",res);

    return 0;

}
