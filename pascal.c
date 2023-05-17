#include <stdio.h>

int main(){

            int filas,n,espacios;
        int i,j,k;
            filas = 4;
            for(i =0;i<filas;i++) {
                n = 1;
                espacios =  (filas-i)*2;
                for(k=0; k<espacios;k++){
                    printf(" ");
                }
                for(j=0;j<=i;j++) {
                    printf("%4d",n);
                    n = n * (i - j) / (j + 1);
                }
                printf("\n");
            }


    return 0;
}
