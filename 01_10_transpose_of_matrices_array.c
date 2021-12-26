#include <stdio.h>

int main(void)
{
    printf("\n");

    int r, c;
    printf("enter the size of row & col. array :");
    scanf("%d %d",&r,&c);

    int array[r][c];
    printf("enter the elements of the matrices : \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {

            scanf("%d",&array[i][j]);
        }
    }

    printf("The matrix is : \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {

           printf("%d ",array[i][j]);
        }
    printf("\n");
    }


    printf("The transpose of matrix is :\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {

           printf("%d ",array[j][i]);
        }

    printf("\n");
    }

    printf("\n");
    return 0;
}


