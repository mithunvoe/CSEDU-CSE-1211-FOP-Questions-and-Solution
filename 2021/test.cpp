#include <stdio.h>
#include <math.h>
#include <string.h>
void kire()
{
    // printf("sdfsdf", 3);
    char s1[101] = "sdfsd", s2[101] = "gghj";
    strcpy(s1, s2);
    printf("%s", s2);
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