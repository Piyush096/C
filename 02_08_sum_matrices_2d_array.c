#include <stdio.h>

int main(void)
{
    printf("\n");

    int n;
    int a ;
    printf("enter the size of rows: ");
    scanf("%d", &n);

    int m;
    printf("enter the size of col: ");
    scanf("%d", &m);

    int arr1[n][m];
    printf("enter the elements of first array :\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }


    int arr2[n][m];
    printf("enter the elements of second array :\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }


    int arr3[n][m];
    printf("sum of the arrays :\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            arr3[i][j]=arr1[i][j] + arr2[i][j];
            printf("sum is %d\n",arr3[i][j]);
        }
    }


    printf("\n");
    return 0;
}
