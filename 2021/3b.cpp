#include <stdio.h>
#include <math.h>
void swap(int &a, int &b)
{
    a ^= b;
    b ^= a;
    a ^= b;
}
void kire()
{
    
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // printf("%d ", a[0]);
    for (int i = 0; i < n; i++)
    {
        int ix = i;
        while (ix > 0 && a[ix] < a[ix - 1])
        {
            swap(a[ix], a[ix - 1]);
            ix--;
        }
        if (i & 1)
        {
            printf("%d ", (a[i / 2] + a[i / 2 + 1]) / 2);
        }
        else
            printf("%d ", a[i / 2]);
        /* if(i==0) printf("%d ", a[0]);
        else if(i==1)printf("%d ", (a[0]+a[1]/2));
        else{

        }
 */
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