#include <stdio.h>
#include <math.h>

void kire()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("+ = %d\n", a + b);
    printf("- = %d\n", a - b);
    printf("* = %d\n", a * b);
    printf("/ = %d\n", a / b);
    printf("% = %d\n", a % b);
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