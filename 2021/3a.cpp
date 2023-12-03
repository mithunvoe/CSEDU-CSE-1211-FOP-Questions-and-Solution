#include <stdio.h>
#include <math.h>
int gcd(int a, int b)
{
    if (a == 0 || b == 0)
        return a + b;
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}
void kire()
{
    int n, x;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    int cpy, ans = 0, gc;
    for (int i = 0; i < n; i++)
    {
        cpy = a[i];
        if (cpy < 0)
            cpy *= -1;
        while ((gc = gcd(cpy, x)) != 1)
        {
            cpy /= gc;
        }
        if (cpy == 1)
            ans += a[i];
    }
    printf("%d", ans);
}

int main()
{
    int t = 1;
    // scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        // printf("Case %d: ",i );
        kire();
    }
}