//Doesn't print in the sorted manner. Check 5cRECUR.cpp for code for sorted manner.
#include <stdio.h>
#include <math.h>
int popcount(int n)
{
    int ans = 0;
    while (n)
    {
        ans += n & 1;
        n >>= 1;
    }
    return ans;
}
void kire()
{
    int n, r;
    scanf("%d %d", &n, &r);
    for (int i = 0; i < (1 << n); i++)
    {
        if (popcount(i) == r)
        {
            int cpy = i, x = 1;
            while(cpy)
            {
                if(cpy&1) printf("%d ", x);
                cpy>>=1;
                x++;
            }
            printf("\n");
        }
    }
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