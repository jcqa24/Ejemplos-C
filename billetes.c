#include <stdio.h>

void calcularCambio(int cantidad){
    int billetes[] = { 1000, 500, 200, 100, 50 ,20 };
    int monedas[] = { 10,5,2,1 };
    int numBilletes[6] = {0};
    int numnMonedas[4] = {0};

    int i;

    for(i=0;i<6;i++){
        numBilletes[i] = cantidad / billetes[i];
        cantidad = cantidad % billetes[i];

    }

    for(i=0;i<4;i++){
        numnMonedas[i] = cantidad / monedas[i];
        cantidad = cantidad % monedas[i];
    }

    printf("Cambio minimo:\n");

    for(i=0;i<6;i++){
        if(numBilletes[i] > 0){
            printf("%d billete(s) de %d\n",numBilletes[i],billetes[i]);
        }
    }

     for(i=0;i<4;i++){
        if(numnMonedas[i] > 0){
            printf("%d moneda(s) de %d\n",numnMonedas[i],monedas[i]);
        }
    }

}


int main() {

    int cantidad;

    printf("Ingresa la cantidad de dinero: ");
    scanf("%d",&cantidad);

    calcularCambio(cantidad);

    return 0;
}
