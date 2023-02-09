#include <stdio.h>

int esPerfecto(int n){
    int i,suma =1;
    for(i=2;i<n;i++){
        if(n%i == 0){
            suma += i;
        }

    }

    if(suma == n){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    // 6 = 1+2+3
    // 28 = 1+2+4+7+14

    /*int num;
    printf("Ingresa un numero: ");
    scanf("%d",&num);
*/
    int i;

    for(i=10;i<1000;i++){
        if(esPerfecto(i) == 1){
            printf("El numero %d es perfecto\n",i);
        }
    }


    return 0;
}
