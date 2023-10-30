#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void multiplicarPorDos(int *apt);
void numRandom(int arreglo[], int tam);
void sumarAElementos(int arreglo[], int tamano, int entero);

int main()
{
    srand(time(NULL));
    // definicion de variables
    int x = 10;
    int *ptr = &x;
    int arreglo[7];
    int i;
    int *num;
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);
    int numSuma = 10;

    printf("========  ACTIVIDAD 1  ========\n");

    // impresion de resultados
    printf("valor de x: %d\n", x);
    printf("valor de ptr: %p\n", ptr);

    printf("\n========  ACTIVIDAD 2  ========\n");

    // funcion para multiplicar por 2 y su impresion
    multiplicarPorDos(ptr);
    printf("valor de x despues de multiplicar por 2: %d\n", x);

    // llenar los arreglos de los vectores
    printf("\n========  ACTIVIDAD 3  ========\n");
    numRandom(arreglo, 7);
    for (i = 0; i < 7; i++)
    {
        num = &arreglo[i];
        printf("arreglo[%d] = %2d\n", i + 1, *num);
    }
    // sumar un valor a los valores del arreglo
    printf("\n========  ACTIVIDAD 4  ========\n");
    sumarAElementos(arreglo, tamano, numSuma);
    printf("numero que se sumara :%d\n", numSuma);
    printf("arreglo despues de la suma:\n");
    for (int i = 0; i < tamano; i++)
    {
        printf("arreglo[%d]=%2d\n", i + 1, arreglo[i]);
    }

    return 0;
}

void multiplicarPorDos(int *apt)
{
    *apt = (*apt) * 2;
}

void numRandom(int arreglo[], int tam)
{
    int i, j, repetido;

    for (i = 0; i < tam; i++)
    {
        do
        {
            repetido = 0;
            arreglo[i] = rand() % 50 + 1;
            for (j = 0; j < i; j++)
            {
                if (arreglo[i] == arreglo[j])
                {
                    repetido = 1;
                }
            }
        } while (repetido == 1);
    }
}

void sumarAElementos(int arreglo[], int tamano, int entero)
{
    int *x = arreglo;

    for (int i = 0; i < tamano; i++)
    {

        *x = *x + entero;
        x++;
    }
}