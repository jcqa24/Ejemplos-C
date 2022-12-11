#include <stdio.h>
#include <stdlib.h>

void llenar(int **A,int filas,int columnas);
void imprimir(int **A,int filas,int columnas);

int main(){
    int columnas = 3;
    int filas = 3;
    int i;

    int **A = (int **) malloc(filas*sizeof(int));

    for(i=0;i<filas;i++){
        A[i] = (int *) malloc(columnas*sizeof(int));
    }

    llenar(A,filas,columnas);
    imprimir(A,filas,columnas);


    return 0;
}

void llenar(int **A,int filas,int columnas){
    int i,j,c=1;
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            A[i][j] = c++;
        }
    }

}



void imprimir(int **A,int filas,int columnas){
    int i,j;
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }

}
