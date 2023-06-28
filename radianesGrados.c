#include <stdio.h>

#define PI 3.14159365

double gradosARadianes(double grados){
    return grados * (PI/180);
}

double radianesAGrados(double radianes){
    return radianes * (180/PI);
}



int main() {
    double radianes, grados;
    int opc;

    do{
        printf("Conversor de grados a radianes y viceversa\n");
        printf("1- Grados a radianes \n");
        printf("2- Radianes a grados \n");
        printf("3- Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d",&opc);

        switch(opc){
            case 1:
                printf("Ingrese el angulo en grados: ");
                scanf("%lf",&grados);
                radianes = gradosARadianes(grados);
                printf("%.5f grados = %.5f radianes\n",grados,radianes);
                break;
            case 2:
                printf("Ingrese el angulo en radianes: ");
                scanf("%lf",&radianes);
                grados = radianesAGrados(radianes);
                printf("%.5f radianes = %.5f grados\n",radianes,grados);
                break;
            case 3:
                printf("Adios !!\n");
                break;
            default:
                printf("Opcion no valida\n");
        }


    }while(opc != 3);

    return 0;
}

