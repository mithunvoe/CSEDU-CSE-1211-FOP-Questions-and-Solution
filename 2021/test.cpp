#include<stdio.h>
#include<math.h>

void kire()
{
    char s[101];
    scanf("%s", s);
    int ln=0;
    while(s[++ln]);
    printf("%d", ln);
}

int main()
{
    int t=1;
    // scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        // printf("Case %d: ",i );
        kire();

    }
}