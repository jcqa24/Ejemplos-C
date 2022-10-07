#include <stdio.h>

int main(){
    float altura,peso, imc;
    printf("ingresa tu estatura en metros: ");
    scanf("%f",&altura);
    printf("Ingresa tu peso en kg: ");
    scanf("%f",&peso);

    imc = peso / (altura * altura);

    printf("Tu IMC es : %.2f",imc);

}

