#include <stdio.h>

void Piramide(int n){
    int i,j,k;

    for(i=1;i<=n;i++){
        for(j=1;j<=n -i;j++){
            printf(" ");
        }

        for(k=1;k<=2*i-1;k++){
            printf("*");
        }

        printf("\n");
    }
}

void PiramideI(int n){
    int i,j,k;

    for(i=n;i>=1;i--){
        for(j=1;j<=n -i;j++){
            printf(" ");
        }

        for(k=1;k<=2*i-1;k++){
            printf("*");
        }

        printf("\n");
    }
}

void Rombo(int n){
    Piramide(n);
    PiramideI(n);
}


int main() {

    Rombo(5);

    return 0;
}

