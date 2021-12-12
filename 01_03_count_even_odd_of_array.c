#include<stdio.h>
int main(void)
{
    int n;
    printf("enter the size of an ARRAY : \n");
    scanf("%d",&n);


    int a[n];
    printf("enter the element of the array : \n");


    for(int i=0 ; i<n ; i++)
    {
       scanf("%d",&a[i]);
    }


    int even=0,odd=0;
    for(int i=0 ; i<n ; i++)
        if(a[i] % 2 == 0)
        {
          printf("%d is  even \n",a[i]);
          even++;
        }
        else
        {
            printf("%d is odd\n",a[i]);
            odd++;
        }

    printf("total no of even is: %d\n",even);
    printf("total no of odd is: %d",odd);
    printf("\n \n  ");
}
