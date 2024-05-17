#include <stdio.h>

int main(void)
{
    int r1, c1;
    printf("Enter the size of matrix 1: ");
    scanf("%d %d", &r1, &c1);

    int r2, c2;
    printf("\nEnter the size of matrix 2: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("\nInvalid sizes entered!\n");
    }

    else
    {
        int arr1[r1][c1];
        printf("\nEnter the elements of matrix 1 :-\n");
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c1; j++)
                scanf("%d", &arr1[i][j]);

        int arr2[r2][c2];
        printf("\nEnter the elements of matrix 2 :-\n");
        for (int i = 0; i < r2; i++)
            for (int j = 0; j < c2; j++)
                scanf("%d", &arr2[i][j]);

        printf("\n");
        int product[r1][c2];

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int sum = 0;

                for (int k = 0; k < c1; k++)   // Since c1 == r2
                    sum += arr1[i][k] * arr2[k][j];

                product[i][j] = sum;

                printf("%d ", sum);
            }

            printf("\n");
        }
    }

    return 0;
}
