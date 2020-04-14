/*
 * @author : Amrutanu Garanaik
 * @date   : 14th April 2020
 *
 * @question :
 *         Given a number n. We need to divide integers from 1 to n into 
 *         minimum number of sets such that in any set, no two numbers
 *         have gcd greater than 1.
 *         e.g. n = 5, possible sets {1, 2, 5}, {3, 4}
 *
 */

#include <stdio.h>
int main()
{
    long long test, n;
    scanf ("%lld", &test);
    while (test--)
    {
        scanf ("%lld", &n);
        long long ans = n / 2;
        if (n == 1) //special case
        {
            printf ("1\n");  //number of set
            printf ("1 1\n");  //set
        }
        else
        {
            printf ("%lld\n", ans);  //number of sets
            if (n % 2 == 0)
            {
                for (int i = 1; i <= n; i += 2)
                {
                    printf ("2 %d %d\n", i, i+1);
                }
            }
            else
            {
                printf ("3 1 2 3\n");
                for (int i = 4; i <= n; i += 2)
                {
                    printf ("2 %d %d\n", i, i+1);
                }
            }
        }
    }
    return 0;
}
