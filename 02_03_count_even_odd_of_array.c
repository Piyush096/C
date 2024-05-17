#include<stdio.h>
int main(void)
{
    printf("\n \n  ");

    int n;
    printf("enter the size of an ARRAY :  ");
    scanf("%d",&n);


    int a[n];
    printf("\n enter the element of the array : \n");


    for(int i=0 ; i<n ; i++)
    {
       scanf("%d",&a[i]);
    }


    int even=0,odd=0;
{
    for(int i=0 ; i<n ; i++)
    {
        if(a[i] % 2 == 0)
        {
          printf("\n%d is  even",a[i]);
          even++;
        }
        else
        {
            printf("%d is odd",a[i]);
            odd++;
        }

    }
    printf("\n");
}
    printf("\ntotal no of even is: %d\n",even);
    printf("total no of odd is: %d",odd);
    printf("\n \n  ");
}
