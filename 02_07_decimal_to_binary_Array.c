#include <stdio.h>

int main(void)
{
    printf("\n");

    int size = 20;
    int a[size];

    // Range of acceptable unsigned decimal numbers - 0 to ((2 ^ size) - 1).

    int n;

    while (1)
    {
        printf("Enter a decimal no. bet. %d and %d: ", 0, (1 << size) - 1);
        scanf("%d", &n);
        if ((n >= 0) && (n < (1 << size)))
            break;
        else
            printf("Invalid input\n");
        // 1 << size is the same as 2 ^ size
    }

    int i = 0;
    while (n != 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    // Size of binary == i

    printf("binary no is: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
    printf("\n");

    printf("\n");
    return 0;
}
