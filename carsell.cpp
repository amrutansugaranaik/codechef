/*
 * @author : Amrutanu Garanaik
 * @date   : 14th April 2020
 *
 * @question :
 *         Given a sequence of integers where the value of each integer reduces by 1 every turn except 0.
 *         In each turn, we need to add one element from the array. We need to find the maximum sum possible.
 *         e.g. {2 1 0} - add 2 first, second turn 1 becomes 0 and 0 remains 0. So second turn we have {* 0 0}.
 *         So sum is 2.
 *         If we take 1 in first turn, at second turn we have {1 * 0} where we add 1 to sum. Total becomes 2.
 *         In either case, maximum sum we can obtain is 2.
 *
 */

#include <stdio.h>
#include <algorithm>
using namespace std;
#define MOD 1000000007
int main()
{
    long long test, n, sum;
    scanf ("%lld", &test);
    while (test--)
    {
        scanf ("%lld", &n);
        long long arr[n];
        for (int i = 0; i < n; i++)
            scanf ("%lld", &arr[i]);
        sort (arr, arr + n);
        int i = 0;
        sum = 0;
        int turn = 0;
        for (i = n - 1; i >= 0; i--)
        {
            long long temp = arr[i] - turn;
            turn++;
            if (temp <= 0)
                temp = 0;
            temp %= MOD;
            sum += temp;
            sum %= MOD;
        }
        printf ("%lld\n", sum);
    }
    return 0;
}
