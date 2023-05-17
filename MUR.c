#include <stdio.h>

int main(){

// d = v*t
// v = d/t
// t = d/v

double distancia,tiempo,velocidad;
int opc;

do{
    printf("¿Qué quieres calcular \n1 - Distancia\n2 - Velocidad\n3 - Tiempo\n4 - Salir \n");
    scanf("%d",&opc);

    switch(opc){
    case 1:
        printf("Ingresa la velocidad ");
        scanf("%lf",&velocidad);
        printf("Ingresa el tiempo ");
        scanf("%lf", &tiempo);
        distancia = velocidad * tiempo;
        printf("La distancia recorrida es: %lf m\n",distancia);
        break;
    case 2:
        printf("Ingresa la distancia: ");
        scanf("%lf",&distancia);
        printf("Ingresa el tiempo ");
        scanf("%lf", &tiempo);
        velocidad = distancia / tiempo;
        printf("La velocidad es: %lf m/s\n",velocidad);
        break;
    case 3:
        printf("Ingresa la distancia: ");
        scanf("%lf",&distancia);
        printf("Ingresa la velocidad ");
        scanf("%lf",&velocidad);
        tiempo = distancia / velocidad;
        printf("El tiempo empleado es: %lf s\n",tiempo);
        break;
    case 4:
        break;
    default:
        printf("Opción no válida\n");
    }


}while(opc != 4);


return 0;
}
