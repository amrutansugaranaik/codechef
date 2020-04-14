/*
 * @author : Amrutanu Garanaik
 * @date   : 14th April 2020
 *
 * @question :
 *         Given two integers X and K. Check if there is any number A which has
 *         exactly X positive divisors and K prime divisors.
 *         print 1 if A exists, else print 0.
 *         e.g. X = 4, K = 2 then A = 6 as factor of A = {1, 2, 3, 6} and 
 *         prime factors of A = {2, 3}
 *
 */

#include <stdio.h>
int main()
{
    long long test, x, k;
    scanf ("%lld", &test);
    while (test--)
    {
        scanf ("%lld%lld", &x, &k);
        long long cnt = 0;
        long long i = 2; // first possible divisor
        long long num = x;
        for (i = 2; i * i <= x; i++)
        {
            while (num % i == 0)
            {
                cnt++;
                num = num / i;
            }
        }
        if (num > 1) //num must be prime
            cnt++;
        if (cnt >= k)
            printf ("1\n");
        else
            printf ("0\n");
    }
    return 0;
}
