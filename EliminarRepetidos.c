#include <stdio.h>

void eliminarRepetidos(int A[], int *n){
    int i,j,k;
    for(i=0;i < *n;i++){
        j = i+1;
        while(j< *n){
            if(A[i] == A[j]){
                for(k=j;k < *n -1;k++){
                    A[k] = A[k+1];
                }
                (*n)--;
            }else{
                j++;
            }
        }
    }
}

int main() {
    int A[] = {5,4,3,2,1};
    int n = sizeof(A)/sizeof(A[0]);
    int i;
    printf("Arreglo original: ");
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }

    eliminarRepetidos(A,&n);

    printf("\nArreglo sin elementos repetidos: ");
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }

    printf("\n");

    return 0;
}

