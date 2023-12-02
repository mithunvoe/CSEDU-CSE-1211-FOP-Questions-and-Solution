#include <stdio.h>
#include <math.h>

void kire()
{
    int n, ans = 0;
    scanf("%d", &n);
    if (n > 600)
    {
        ans = 3200 + 4.7 * (n - 600);
    }
    else if (n > 400)
    {
        ans = 2300 + 5.5 * (n - 400);
    }
    else if (n > 200)
    {
        ans = 1200 + 6 * (n - 200);
    }
    else
        ans = n * 7;
    printf("%d\n", ans);
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