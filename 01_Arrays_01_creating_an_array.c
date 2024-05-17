//TO ADD THE ELEMENTS OF AN ARRAY
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("\n");

    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);

    int sum = 0;

    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0 ; i < n; i++)
    {
       scanf("%d", &arr[i]);
       sum += arr[i];
    }

    printf("The sum is = %d\n", sum);

    printf("\n");
    return 0;
}
