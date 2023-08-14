#include <stdio.h>
#include <stdlib.h>

void iniciarArreglo(int arreglo[], int dim);
int sumarArreglo(int arreglo[], int validos);
void ingresarValor (int arreglo[], int dim);
int arregloValidos(int arreglo[], int dim);
float calcularPromedioArreglo(int arregloCargado[], int dim);

int main()
{
    int dim = 6;
    int arreglo[dim];
    float resultado;

    iniciarArreglo(arreglo, dim);
    ingresarValor(arreglo, dim);
    resultado = calcularPromedioArreglo(arreglo, dim);
    printf("\nResultado: %.2f", resultado);

    return 0;
}

void iniciarArreglo(int arreglo[], int dim)
{
    int i=0;
    for(i; i<dim; i++)
    {
        arreglo[i] = -1;
    }
}

int sumarArreglo(int arreglo[], int validos)
{
    int suma = 0;
    int i = 0;

    while(i<validos)
    {
        suma = suma + arreglo[i];
        i++;
    }

    return suma;
}

void ingresarValor (int arreglo[], int dim)
{

    int valor;
    int i = 0;
    do
    {
        printf("Ingresar valor: ");
        fflush(stdin);
        scanf("%d", &arreglo[i]);
        printf("\nDesea continuar? \n1 = si\notro = no\n");
        scanf("%d", &valor);
        i++;
    }
    while(valor == 1 && i < dim);
}

int arregloValidos(int arreglo[], int dim)
{
    int i = 0;
    while(arreglo[i] != -1 && i < dim)
    {
        i++;
    }

    return i;

}

float calcularPromedioArreglo(int arregloCargado[], int dim){
    float res;
    int validos = arregloValidos(arregloCargado, dim);
    int suma = sumarArreglo(arregloCargado, validos);
    res = (float)suma/validos;

    return res;
}







