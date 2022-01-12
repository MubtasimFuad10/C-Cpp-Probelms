/**
 *******  *     *     * *    * * *
 *MFT10   *     *    *   *   *     *
 *******  *     *   * * * *  *     *
 *        *     *   *     *  *     *
 *        * * * *   *     *  * * *
 **/

#include <bits/stdc++.h>

#include <windows.h>

#define lol long long int           //(positive,zero and negative)
#define ulol unsigned long long int //(positive and zero)
#define sonic ios_base::sync_with_stdio(false);cin.tie(NULL)
#define sf scanf
#define pf printf
#define PI acos(-1)

#define rep(i, k, n) for (long long int i = k; i < n; i++)
#define rep2(i, l, n) for (long long int i = l; i <= n; i++)

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define end "\n"
using namespace std;

///***Do While Loop***\\\


/// Example
int main()
{
    int cn = 1;
    do
    {
        printf("%d", cn);
        cn++;
    } while (cn <= 5); // Note: The body of a do loop is executed at least once
}

/// Write down a program that prints the digits of a number in reverse.
int main()
{
    int a, n;
    scanf("%d", &n);
    do
    {
        a = n % 10;
        printf("%d", a);
        n = n / 10;
    } while (n != 0);
}

/// Write down a program that prints number of digits of a number n.
int main()
{
    int n;
    int cn = 0;
    scanf("%d", &n);
    do
    {
        n = n / 10;
        cn++;
    } while (n != 0);
    printf("%d", cn);
}

/// square root of a number
int main()
{
    float N, x, d, p;
    do
    {

        scanf("%f", &N);
        x = p = N / 2;
        x = (x + N / x) / 2;
        d = (x - p);
        d = (d < 0) ? -d : d;
        p = x;

    } while (d > .000001);
    printf("%f", x);
}
