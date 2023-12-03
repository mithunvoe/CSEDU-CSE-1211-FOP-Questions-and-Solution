#include <stdio.h>
#include <math.h>

void kire()
{
    // a.b c.d format
    int a, b, c, d;
    scanf("%d.%d %d.%d", &a, &b, &c, &d);
    printf("%d", a + c + (b + d) / 100);

    if ((b + d) % 100 != 0)
    {
        if ((b + d) && (b + d) % 10 == 0)
        {
            printf(".%d", ((b + d) % 100) / 10);
        }
        else
            printf(".%02d", (b + d) % 100);
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