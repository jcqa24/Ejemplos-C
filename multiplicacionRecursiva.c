#include <stdio.h>

int multRec(int,int);

int main(){
    // 3*5 = 15
    // 5+5+5 = 15
    printf("El resultado es: %d",multRec(3,5));
    return 0;
}

int multRec(int n,int m){
    if(n == 1){
        return m;
    }else{
        return m + multRec(n-1,m);
    }
}
