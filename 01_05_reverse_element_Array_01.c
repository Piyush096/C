#include <stdio.h>

int main(void)
{
    printf("\n");

    int arr[5] ={5,7,4,3,9};

    printf("element of arrays \n");
    for(int i = 0 ; i <= 4 ; i++)
    {
        printf(" %d \n",arr[i]);
    }


    printf("reverse element of arrays \n");
    for(int i = 4 ; i >= 0 ; i--)
    {
        printf(" %d \n",arr[i]);
    }


    printf("\n");
    return 0;
}
