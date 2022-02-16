#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n + 1];
        int s[(n + 1) / 2 + 1];
        for (int j = 1; j <= n; j++)
        {
            scanf("%1d", &a[j]);
        }
        for (int j = 1; j <= ((n + 1) / 2); j++)
        {
            s[j] = a[j] ^ a[n + 1 - j];
        }
        _Bool answer_is_yes = 1;
        for (int k = 1; k <= (n + 1) / 2 - 1; k++)
        {
            if (s[k] != s[k + 1])
            {
                answer_is_yes = 0;
                break;
            }
        }
        if (answer_is_yes)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
