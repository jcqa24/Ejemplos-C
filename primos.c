#include <stdio.h>

int esPrimo(int a){
    // a -> 5 -> 2,3,4
    // 4 -> 2  = 0

    int primo = 1; // 1 -> es primo ; 0 -> no es primo
    int divisores = 2;

    while((primo == 1) && (divisores < a)){
        if( a%divisores == 0){
            primo = 0;
        }else{
            divisores++;
        }
    }
    return primo;
}



int main(){

    // 2,3,5,7,11...

    int opc,a,b,i;

    do{
        printf("Numeros Primos\n");
        printf("1- Verifica que un numero sea primo\n");
        printf("2- Numeros primos en un rango\n");
        printf("3- Salir\n");
        printf("Ingresa una opcion: ");
        scanf("%d",&opc);

        switch(opc){
            case 1:
                printf("Ingresa el numero: ");
                scanf("%d",&a);
                if(a>1){
                    if(esPrimo(a) == 1){
                        printf("El numero %d es primo\n",a);
                    }else{
                        printf("El numero %d no es primo\n",a);
                    }
                }else{
                    printf("El numero debe ser mayor a 1\n");
                }
                
                break;
            case 2:
                printf("Ingrese el limite inferior del rango: ");
                scanf("%d",&a);
                printf("Ingrese el limite superior del rango: ");
                scanf("%d",&b);
                if(a<2 || a>b ){
                    printf("Por favor verifica los datos 1<a<b\n");
                }else{
                    for(i = a;i<=b;i++){
                        if(esPrimo(i) == 1){
                            printf("El numero %d es primo\n",i);
                        }
                    }
                }
                break;
            case 3:
                printf("Adios !!\n");
                break;
            default :
                printf("Opcion no valida\n");
        }

    }while(opc != 3);



    return 0;
}
