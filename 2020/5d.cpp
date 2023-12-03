#include <stdio.h>
#include <math.h>
int a = 50, gcount = 0, lcount = 0;

int printMeAgain(int b)
{
    printf("%d: %d\n", ++gcount, ++b);
    return a++;
}

int printMe(int a)
{
    printf("%d %d\n", ++lcount, ++a);
    return printMeAgain(a);
}

void kire()
{
    int a = 100;
    printf("%d\n", a);
    if (printMe(printMeAgain(a++)))
    {
        int a = printMe(printMeAgain(printMe(30)));
        printf("%d\n", a);
    }
    printMe(a);
    return;
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