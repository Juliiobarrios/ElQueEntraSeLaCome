#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
int cargarArreglo (int arreglo[], int dimension);
int main()
{

    int i =0, dimension=0;
    printf("Ingrese la cantidad de elementos a cargar");
    scanf("%d", &dimension);
    int arreglo[dimension];
    i=cargarArreglo(arreglo, dimension);
    printf("%i \n", i);
        for(int r=0; r<dimension; r++){
        printf("-%i- \n", arreglo[r]);
    }
    int suma = sumaArreglo(arreglo, dimension);
    printf("%i", suma);
    return 0;
}

int cargarArreglo (int arreglo[], int dimension)
{
    int i = 0;
    while(dimension>i)
    {
        printf("Ingresa el valor a cargar");
        scanf("%i", &arreglo[i]);
        i++;
    }
    return i;
}

int sumaArreglo (int arreglo[], int dimension)
{
     int suma = 0, r;
     for(r=0; r<dimension; r++)
    {
        suma = suma + arreglo[r];
    }
    return suma;
}
