#include <stdio.h>
#include <math.h>
int n, r;
void rec(int ct, int idx, int ara[])
{
    if (ct > n && idx != r)
        return;
    else if (idx == r)
    {
        for (int i = 0; i < r; i++)
        {
            printf("%d ", ara[i]);
        }
        printf("\n");
        return;
    }
    ara[idx] = ct;
    rec(ct + 1, idx + 1, ara);
    rec(ct + 1, idx, ara);
}
void kire()
{
    scanf("%d%d", &n, &r);
    int ara[r];
    rec(1, 0, ara);
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