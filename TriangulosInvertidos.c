#include <stdio.h>


void izq(int filas){
    int i,j;

    for(i=filas;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }

        printf("\n");
    }
}

void der(int filas){
    int i,j,k;

    for(i=filas;i>=1;i--){
        for(k=1;k<=filas-i;k++){
            printf(" ");
        }

        for(j=1;j<=i;j++){
            printf("*");
        }

        printf("\n");

    }
}


int main(){

    izq(5);

    der(5);

    return 0;
}
