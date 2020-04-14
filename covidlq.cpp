/*
 * @author : Amrutanu Garanaik
 * @date   : 14th April 2020
 *
 * @question :
 *         Given a binary sequence, check any two 1s are at least 5 0s apart.
 *         e.g. print YES for 00100000100, 010, 00100000000010000010 etc
 *         e.g. print NO for 10100, 11011, 100100001 etc
 *
 */

#include <stdio.h>
int main()
{
    int test, n, prev, input, flag;
    scanf ("%d", &test);
    while (test--)
    {
        scanf ("%d", &n);
        prev = -1;   //-1 indicates no 1s found so far
        flag = 0;    // indicates valid string, 1 indicates invalid

        for (int i = 0; i < n; i++)
        {
            scanf ("%d", &input);
            if (input == 1)
            {
                if (prev == -1)  // first one
                    prev = i;
                else
                {
                    if ((i - prev) > 5)
                    {
                        prev = i;
                    }
                    else
                    {
                        flag = 1; // invalid sequence
                    }
                }
            }
        }
        if (flag == 1)
            printf ("NO\n");
        else
            printf ("YES\n");
    }
    return 0;
}
