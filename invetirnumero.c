#include <stdio.h>

int invertir (int);

int main(){

    int t = invertir(154);

    printf("%d",t);

}

int invertir (int num){
 if (num < 10) {
        return num;
    } else {
        return (num % 10)*10 + invertir(num / 10);
    }
}
