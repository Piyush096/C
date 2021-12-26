#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    printf("\n");

    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);


    int arr[n];
    printf("enter the elements of matrices :\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The elements are :-\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }

    int temp;
    bool list_is_already_sorted = true;   // To make the best case time complexity equal to O(n).

    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                list_is_already_sorted = false;
                temp = arr[j];
                arr[j] =arr[j+1];
                arr[j+1] = temp;
            }
        }

        if (list_is_already_sorted)
            break;
    }

    printf("\nThe sorted list is :\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }


    printf("\n");
    return 0;
}
