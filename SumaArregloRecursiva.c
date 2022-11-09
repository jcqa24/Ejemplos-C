#include <stdio.h>

int sumaRecursiva(int [],int,int);

int main(){

    int a[] = {1,1,1,1,1,1,1,1,1,1};

    int tam = sizeof(a)/sizeof(a[0]);

    printf("La suma del arreglo es: %d\n",sumaRecursiva(a,0,tam-1));

    return 0;
}


int sumaRecursiva(int a[],int tam,int i){
    if(tam == i){
        return a[tam];
    }else{
        return a[tam] + sumaRecursiva(a,tam+1,i);
    }

}
