#include <stdio.h>
#include <math.h>

void kire()
{
    char s[101];
    scanf("%s", s);
    int ct = 0, ara[300] = {};
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (ara[(int)s[i]]==1)
            ct++;
        ara[(int)s[i]]++;
        if (ct == 3)
        {
            printf("%c", s[i]);
            return;
        }
    }

    printf("-1");
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