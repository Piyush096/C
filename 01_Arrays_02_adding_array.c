// TO INPUTS VALUES INTO AN ARRAY AND DISPLAY
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("The elements of array are :\n ");
    for (int i = 0 ; i < n ; i++)
        printf("%d ", array[i]);
    printf("\n");
}
