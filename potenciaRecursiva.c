#include <stdio.h>

int Potencia(int,int);

int main(){
    //5 ^ 3 = 25
    // 5 * 5 *5 = 125

    printf("EL resultado es: %d", Potencia(5,3));
    return 0;
}

int Potencia(int base, int exponente){
    if(exponente == 1){
        return base;
    }else{
        return base * Potencia(base, exponente-1);
    }
}
