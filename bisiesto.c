#include <stdio.h>

int es_bisiestor(int anio){
    if(anio % 4 != 0){
        return 0;
    }else if( anio % 100 != 0){
        return 1;
    }else if(anio % 400 != 0){
        return 0;
    }else{
        return 1;
    }
}


int main(){

    int anio;
    printf("Ingresa un año: ");
    scanf("%d",&anio);

    if(es_bisiestor(anio)){
        printf("%d es un año bisiesto\n",anio);
    }else{
        printf("%d no es un año bisiesto\n",anio);
    }


    return 0;
}
