#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    int *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    if (arr==NULL)
    {
     printf("Error: Unable to allocate memory\n");
     exit(1);
    }

      printf("Enter %d integers:\n", n);
       for (i = 0; i < n; i++)
       {
        scanf("%d", &arr[i]);
       }

      printf("The array is:\n");
       for (i = 0; i < n; i++)
       {
        printf("%d ", arr[i]);
       }

    free(arr);
    return 0;
}
