// TO INPUTS VALUES INTO AN ARRAY AND DISPLAY
#include <stdio.h>

int main(void)
{
    int n,m;
    printf("Enter the size of array: ");
    scanf("%d %d", &n,&m);

    printf("Enter the element of array: ");
    int array[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &array[i][j]);


    printf("The elements of array are :\n ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d", array[i][j]);
        }
    printf("\n");
    }

}
