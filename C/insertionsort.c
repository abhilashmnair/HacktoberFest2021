#include <stdio.h>
int main()
{

    int i, j, n, k, arr[100];

    printf("How many numbers to enter : \n");
    scanf("%d", &n);

    printf("Enter the %d elements ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 1; i < n; i++)
    {
        k = arr[i];
        j = i - 1;
        while ((k < arr[j]) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }

    printf("Elements after insertion sort are ");
    for (i = 0; i < n; i++)
        printf(" %d ", arr[i]);

    return 0;
}