#include <stdio.h>
#include <math.h>

void kire()
{
    int n, flag = 0;
    scanf("%d", &n);
    // int sq = (int)sqrt(n);
    for (int i = 2; i <= n; i++)
    {
        int c = 0;
        while (n % i == 0)
            flag++, n /= i, c++;
        if (c > 1)
        {
            printf("-1");
            return;
        }
    }
    // printf("%d\n", sq);
    if (flag == 2)
        printf("1");
    else
        printf("-1");
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