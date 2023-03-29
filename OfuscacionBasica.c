#include <stdio.h>
#include <stdlib.h>

 // a/A -> 4
 // e/E -> 3
 // i/I -> 1
 // o/O -> 0
 // s/S -> 5
 // t/T -> 7

 char * ofuscar(char cadena [], int tam){
    char * aux = (char *)malloc(tam);
    int i;

    for(i=0;i<tam;i++){
        if(cadena[i] == 'A' || cadena[i] == 'a'){
            aux[i] = '4';

        }else if(cadena[i] == 'E' || cadena[i] == 'e'){
            aux[i] = '3';
        }else if(cadena[i] == 'I' || cadena[i] == 'i'){
            aux[i] = '1';
        }else if(cadena[i] == 'O' || cadena[i] == 'o'){
            aux[i] = '0';
        }else if(cadena[i] == 'S' || cadena[i] == 's'){
            aux[i] = '5';
        }else if(cadena[i] == 'T' || cadena[i] == 't'){
            aux[i] = '7';
        }else{
            aux[i] = cadena[i];
        }
    }
    return aux;
 }


 int main(){
    char cadena [] = "A a E e I i O o S s T t q r F B M n";
    int tam = sizeof(cadena);

    printf("Cadena original %s \n", cadena);

    char * c = ofuscar(cadena,tam);

    printf("Cadena Ofuscada %s \n",c);

    return 0;
 }
