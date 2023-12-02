/* 
ANSWER:
1: 25 15
2: 9 0
3: 65 64
5: 25 15 65 64
6: 25 15 65 64
 */
#include <stdio.h>
#include <math.h>
#define S 1000
// #define maxi(x, y) x > y ? x : y;  // idk why it wasn't working, thats why made a function with the same name
int maxi(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
void kire()
{
    int x1 = 25, x2 = 15, y1 = 64, y2 = 13;
    printf("1: %d %d\n", x1, x2);
    printf("2: %d %d\n", x1 & x2, !x2);

    if (y1 & x2 > x1 | y2)
        printf("3: %d %d\n", y1, (y2 = maxi(y1++, x1 & y1)));
    else
        printf("4: %d %d\n", y2, y1 = maxi(y2++, x2 & y2));
    printf("5: %d %d %d %d\n", x1, x2, y1, y2);
    for (int i = x1; i < x2; i += y1)
    {
        y2 = x1 & x2 | y1;
    }
    printf("6: %d %d %d %d\n", x1, x2, y1, y2);
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