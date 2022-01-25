#include <stdio.h>

int main(void)
{
    printf("\n");

    int arr[5]={3,5,6,7,8};

    int small ,large ;
    small = large = arr[0];

    for (int i = 1 ; i < 5 ; i++)
    {
       if(arr[i] < small)
        small = arr[i];
       else if (arr[i] > large)
        large = arr[i];

    }
    printf("smallest = %d , largeest = %d",small , large);

    printf("\n");
    return 0;
}

