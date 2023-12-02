#include <stdio.h>
#include <math.h>

void kire()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a == 0)
        printf("The only root: %lf", (double)(-c / b));
    else if (b * b - 4 * a * c < 0)
    {
        printf("Root 1: %.5lf+%.5lfi\nRoot 2: %.5lf-%.5lfi", -b / 2.0 / a, sqrt(-b * b + 4 * a * c) / 2.0 / a, -b / 2.0 / a, sqrt(-b * b + 4 * a * c) / 2.0 / a);
    }
    else
    {
        printf("Root 1: %.5lf\nRoot 2: %.5lf", (-b + sqrt(b * b - 4 * a * c)) / 2 / a, (-b - sqrt(b * b - 4 * a * c)) / 2 / a);
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