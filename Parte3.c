// Arbol dinamico

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct nodo_arbol
{
    int dato;
    struct nodo_arbol **hijos;
    struct nodo_arbol *padre;
};
typedef struct nodo_arbol Nodo_ARB;

Nodo_ARB *arbol;

struct nodo_Cola
{
    Nodo_ARB *info;
    struct nodo_Cola *sig;
};
typedef struct nodo_Cola Nodo_Cola;

int ram;
int tam_cola;
int tam;
Nodo_Cola *cola;
int c;
int co;
int prof;

void Encolar(Nodo_Cola *n, Nodo_ARB *a);
Nodo_ARB *Desencolar(Nodo_Cola *n);

int main(int argc, char const *argv[])
{
    ram = 2;
    prof = 3;
    c = 0;
    co = 1;
    tam = 0;

    tam_cola = pow(ram, prof + 1);

    // creamos la cola
    cola = (Nodo_Cola *)malloc(tam_cola * sizeof(Nodo_Cola));

    //Creamos el nodo raiz
    Nodo_ARB *raiz = (Nodo_ARB *)malloc(sizeof(Nodo_ARB));

    raiz->dato = co;
    co++;

    //Metemos a la cola el nodo raiz

    Encolar(cola, raiz);
    Nodo_ARB *nodo;
    int k = 0;

    while (c > 0)
    {

        nodo = Desencolar(cola);
        nodo->hijos = (Nodo_ARB **)malloc(ram * sizeof(Nodo_ARB *));
        for (int i = 0; i < ram; i++)
        {
            nodo->hijos[i] = (Nodo_ARB *)malloc(sizeof(Nodo_ARB));
            nodo->hijos[i]->dato = co;
            nodo->hijos[i]->padre = nodo;
            if (tam < prof)
            {
                Encolar(cola, nodo->hijos[i]);
            }
            co++;
        }
        tam++;
        k++;
    }

    printf("Los nodos del arbol con sus respectivos datos son :\n");
    printf("Nodo raiz\n");
    printf("\t\tDato: %d \n", raiz->dato);
    printf("\t\tMi direccion de memoria: %p \n", raiz);
    printf("\t\tDireccion de memoria del hijo: %p \n", raiz->hijos);

    printf("Los nodos del arbol del primer nive con sus respectivos datos son :\n");
    for (int i = 0; i < ram; i++)
    {
        printf("Hijo [1][%d]\n", i);
        printf("\t\tDato: %d \n", raiz->hijos[i]->dato);
        printf("\t\tMi direccion de memoria: %p \n", raiz->hijos[i]);
        printf("\t\tDireccion de memoria del padre: %p \n", raiz->hijos[i]->padre);
    }

    printf("Los nodos del arbol del segundo nive con sus respectivos datos son :\n");


    nodo = raiz->hijos[1]->hijos[0];
    
    printf("\t\tDato: %d \n", nodo->dato);
    printf("\t\tMi direccion de memoria: %p \n", nodo);
    printf("\t\tDireccion de memoria del padre: %p \n", nodo->padre);
   
    nodo = raiz->hijos[1]->hijos[1];
    printf("\t\tDato: %d \n", nodo->dato);
    printf("\t\tMi direccion de memoria: %p \n", nodo);
    printf("\t\tDireccion de memoria del padre: %p \n", nodo->padre);







    return 0;
}

   




void Encolar(Nodo_Cola *n, Nodo_ARB *a)
{
    cola->sig = n;
    n->info = a;
    c++;
}

Nodo_ARB *Desencolar(Nodo_Cola *n)
{
    if (c == 0)
    {
        return NULL;
    }
    else
    {

        Nodo_ARB *a = n->info;
        n->info = n->sig->info;
        c--;
        return a;
    }
}