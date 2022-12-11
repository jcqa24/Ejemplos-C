#include <stdio.h>
#include <string.h>
int main() {
    char org[] = "Programatutos";
    char tem;
    int i,mitad,len;

    len = strlen(org);
    mitad = len /2;

    printf("La cadena original: %s \n",org);

    for(i=0;i<mitad;i++){
        tem = org[i];
        org[i] = org[len - i -1];
        org[len - i -1] = tem;
     }

     printf("La cadena invertida: %s \n",org);
    return 0;
}
