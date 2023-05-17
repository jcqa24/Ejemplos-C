#include <stdio.h>

int main() {
    float temperatura, resultado;
    int opc;

    do{
        printf("1. Celsius a Kelvin\n");
        printf("2. Kelvin a Celsius\n");
        printf("3. Celsius a Fahrenheit\n");
        printf("4. Fahrenheit a Celsius\n");
        printf("5. Kelvin a Fahrenheit\n");
        printf("6. Fahrenheit a Kelvin\n");
        printf("7. Salir\n");
        printf("Ingresa una opcion: ");
        scanf("%d", &opc);

        switch(opc){
            case 1:
                printf("Ingresa la temperatura: ");
                scanf("%f",&temperatura);
                resultado = temperatura + 273.15;
                printf("%.2f grados Celsius son %.2f grados Kelvin\n",temperatura,resultado);
                break;
            case 2:
                printf("Ingresa la temperatura: ");
                scanf("%f",&temperatura);
                resultado = temperatura - 273.15;
                printf("%.2f grados Kelvin son %.2f grados Celsius\n",temperatura,resultado);
                break;
            case 3:
                printf("Ingresa la temperatura: ");
                scanf("%f",&temperatura);
                resultado = temperatura * 9/5 +32;
                printf("%.2f grados Celsius son %.2f grados Fahremheit\n",temperatura,resultado);
                break;
            case 4:
                printf("Ingresa la temperatura: ");
                scanf("%f",&temperatura);
                resultado = (temperatura - 32) * 5/9 ;
                printf("%.2f grados Fahremheit son %.2f grados Celsius\n",temperatura,resultado);
                break;
            case 5:
                printf("Ingresa la temperatura: ");
                scanf("%f",&temperatura);
                resultado = temperatura * 9/5 -459.67;
                printf("%.2f grados kelvin son %.2f grados Fahremheit\n",temperatura,resultado);
                break;
            case 6:
                printf("Ingresa la temperatura: ");
                scanf("%f",&temperatura);
                resultado = (temperatura + 459.67) * 5/9;
                printf("%.2f grados kelvin son %.2f grados Fahremheit\n",temperatura,resultado);
                break;
            case 7:
                break;
            default:
                printf("Opcion no valida");
        }


    }while(opc != 7);

    return 0;
}
