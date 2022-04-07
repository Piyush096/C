#include <stdio.h>
int Binarysearch(int arr[],int size,int item);
int main(void)
{
   printf("\n");
   int n;
   printf("enter the size of array ");
   scanf("%d",&n);

   int arr[n];
   printf("enter the elements of an array :");
   for(int i = 0; i < n; i++)
   {
      scanf("%d",&arr[i]);
   }

    printf("The elements are :-\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }



   printf("\n");
   return 0;
}

