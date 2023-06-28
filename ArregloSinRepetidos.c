#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int busquedaSecuencial(int A[],int dato,int tam){
    int i;
    for(i=0;i<tam;i++){
        if(A[i] == dato){
            return 1;
        }
    }
    return 0;
}

int main(){
    int A[10];
    int tam = 10, count =0, num;

    srand(time(NULL));

    while(count < tam){
        num = (rand() %5)+1;
        if(busquedaSecuencial(A,num,count) == 0){
            A[count] = num;
            count ++;
        }
    }

    for(count=0;count<tam;count++){
        printf("%d, ",A[count]);
    }
}
