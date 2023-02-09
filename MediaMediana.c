#include <stdio.h>


double media(int A[], int tam){
    double sumatoria = 0.0, media;
    int i;
    for(i=0;i<tam;i++){
        sumatoria += A[i];
    }
    media = sumatoria / tam;
    return media;
}

void insercion(int A [],int tam){
    int i,j,index;
    for(i=1; i< tam; i++){
        index = A[i];
        j=i-1;
        while(j>=0 && A[j] > index){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = index;
    }

}

double mediana(int A[], int tam){
    insercion(A,tam);
    double mediana;
    int mitad = tam / 2;

    if(tam % 2 == 0){
        mediana = (A[mitad-1] + A[mitad]) /2;
    }else{
        mediana = A[mitad];
    }

    return mediana;
}


int main(){
    int A[] = {8,8,8,8,8,8};
    int tam = sizeof(A) / sizeof(A[0]);

    printf("La media del arreglo es: %f\n",media(A,tam));
    printf("La mediana del arreglo es: %f\n",mediana(A,tam));



    return 0;
}
