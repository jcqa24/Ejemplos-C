#include <stdio.h>

int main() {

    int numero, suma = 0;

    printf("Ingresa un numero entero: ");
    scanf("%d",&numero);

    while(numero != 0){
        suma += numero % 10;
        numero = numero / 10;

    }

    printf("La suma de los digitos es: %d\n",suma);

    return 0;
}
