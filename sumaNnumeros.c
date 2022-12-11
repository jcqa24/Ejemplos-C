#include <stdio.h>

int suma(int);

// n(n+1) / 2

// 10*11 /2

// 110 / 2 = 55



int main(){

    printf("%d",suma(100));

    return 0;
}

int suma(int n){
    if(n == 1){
        return 1;
    }else{
        return n + suma(n-1);
    }
}
