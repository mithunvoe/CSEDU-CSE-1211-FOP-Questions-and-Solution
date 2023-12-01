#include <stdio.h>
#include <math.h>

void kire()
{
    int a[] = {7, 11, 15, 17, 13}, n = 5;
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] * 1;
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        a[i] = a[(i + 3 < 5) ? i + 3 : 0] - a[i] / 2;
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n && (i & 1); i++)
    {
        a[i] = a[i] + a[i] * 2;
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] - a[i] / 2;
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int t = 1;
    // scanf("%d ", &t);
    for (int i = 1; i <= t; i++)
    {
        // printf("Case %d: ",i );
        kire();
    }
}