/**
 ===================================================================================================
 INSTRUCTIONS :
 1 . The first entry must match the number of numbers that will be entered.
    EXEMPLE :
    
    INPUT                OUTPUT
    7                    4 appear 1 times                
    8                    8 appear 2 times                   
    10                   10 appear 3 times           
    8                    260 appear 1 times       
    260
    4
    10
    10
 ===================================================================================================   
**/
#include <stdio.h>

int Repetitions(int array[], int tamanho, int indice)
{
    int i, cont=0;
    for (i = 0; i < tamanho; i++)
    {
       if (array[indice] == array[i])
       {
            cont++;
       }
    }
    return cont;
}

void ArrayOrganize(int *array, int tam)
{
    int i, j, aux;
    for (i = 0; i < tam; i++)
    {
        for (j = i; j < tam; j++)
        {
            if(array[i] > array[j])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}

int main()
{
    int tam, i, quant, indice;
    scanf("%d", &tam);
    int array[tam];

    for (i = 0; i < tam; i++)
    {
        scanf("%d", &array[i]);
    }
    ArrayOrganize(array,tam);
    
    for (i = 0; i < tam; i++)
    {
        quant= Repetitions(array, tam, i);
        if (array[i] != array[i+1])
        {
            printf("The number %d appears %d times\n", array[i], quant);
        }
        
    }
    return 0;
}