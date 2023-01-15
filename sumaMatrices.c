#include <stdio.h>

void imprimir(int A[3][3],int filas, int columnas){
    int i,j;
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf(" %02d ",A[i][j]);
        }
        printf("\n");
    }
}

void suma(int A[3][3],int B[3][3],int C[3][3], int filas, int columnas){
    int i,j;
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main(){
    int filas = 3;
    int columnas = 3;
    int A [3][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    int B [3][3] = {{10,11,12},
                    {13,14,15},
                    {16,17,18}};

    int C[3][3];

    suma(A,B,C,filas,columnas);
    imprimir(C,filas,columnas);

    return 0;
}
