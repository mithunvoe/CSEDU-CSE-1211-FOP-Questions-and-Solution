#include <stdio.h>
#include <math.h>

void kire()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        while (x != y)
        {
            printf("%d, ", x * x);
            x--;
        }
    }
    else if (x < y)
    {
        while (x != y)
        {
            printf("%d, ", x * x);
            x++;
        }
    }
    printf("Reached!");
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