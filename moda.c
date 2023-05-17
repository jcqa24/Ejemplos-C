#include <stdio.h>

int Moda(int A[], int n){
    int moda = 0, count = 0, maxcount = 0;
    int i,j;

    for(i=0;i<n;i++){
        count = 0;
        for(j=0;j<n;j++){
            if(A[j] == A[i]){
                count ++;
            }
        }

        if(count > maxcount){
            moda = A[i];
            maxcount = count;
        }
    }

    return moda;

}


int main(){

    int A [] = {1,2,3,3,4,2,3,5,5,5,5,5,5,5,5};
    int n = sizeof(A)/sizeof(A[0]);

    int moda = Moda(A,n);

    printf("La moda del arreglo es %d",moda);

    return 0;
}
