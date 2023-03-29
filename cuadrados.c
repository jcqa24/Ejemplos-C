#include <stdio.h>

void fill(int b, int h){
    int i,j;

    for(i=1;i<=h;i++){
        for(j=1;j<=b;j++){
            printf("* ");
        }

        printf("\n");
    }

}

void margin(int b, int h){
    int i,j;
    for(i=1;i<=h;i++){
        for(j=1;j<=b;j++){
            if(i == 1 || i == h || j == 1 || j == b){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main(){
    fill(5,5);

    printf("\n");
    printf("\n");

    margin(9,5);

    return 0;
}
