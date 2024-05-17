#include <stdio.h>

int main(void)
{
   unsigned t;
   scanf("%u", &t);

   while (t--)
   {
       unsigned long long count = 0ULL;

       unsigned n;
       scanf("%u", &n);

       unsigned long long number_of_ones = 0ULL;
       unsigned long long number_of_twos = 0ULL;

       for (unsigned i = 0; i < n; i++)
       {
           unsigned num;
           scanf("%u", &num);

           if (num == 1)
           {
               count += (unsigned long long) (n - 1);
               (number_of_ones)++;
           }

           else if (num == 2)
           {
               (number_of_twos)++;
           }
       }

       count -= ((number_of_ones * (number_of_ones - 1)) / 2);
       count += ((number_of_twos * (number_of_twos - 1)) / 2);

       printf("%llu\n", count);
   }

   return 0;
}
