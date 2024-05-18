<<<<<<< HEAD
=======
<<<<<<<< HEAD:01_Arrays_01_creating_an_array.c
>>>>>>> a8f01f8979fbf082dc18c49a76fdd053510d0420
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
<<<<<<< HEAD
    printf("Enter the elements of the array: "); 
=======
    printf("Enter the elements of the array: ");
>>>>>>> a8f01f8979fbf082dc18c49a76fdd053510d0420
    for(int i = 0 ; i < n; i++)
    {
       scanf("%d", &arr[i]);
       sum += arr[i];
    }

    printf("The sum is = %d\n", sum);

    printf("\n");
    return 0;
}
<<<<<<< HEAD
=======
========
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
>>>>>>>> a8f01f8979fbf082dc18c49a76fdd053510d0420:02_02_to add element of array.c
>>>>>>> a8f01f8979fbf082dc18c49a76fdd053510d0420
