#include <stdio.h>
#include <math.h>
void seqPosition(char line[], char sequence[])
{
    int lnl = 0, lns = 0;
    while (line[++lnl])
        ;
    while (sequence[++lns])
        ;
    for (int i = 0; i < lnl; i++)
    {
        int f = 0;
        if (line[i] == sequence[0])
            for (int j = i; j < lnl; j++)
            {
                if (line[j] == sequence[f])
                    f++;
            }
        if(f==lns) printf("%d ", i);
    }
}
void kire()
{
    char line[101], seq[101];
    scanf("%[^\n]", line);
    scanf(" %[^\n]", seq);
    seqPosition(line, seq);
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