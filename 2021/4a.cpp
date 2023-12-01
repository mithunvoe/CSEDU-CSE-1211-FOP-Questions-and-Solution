#include <stdio.h>
#include <math.h>
int len(char s[])
{
    int ans = 0;
    while (s[ans] != '\0')
    {
        ans++;
    }
    return ans;
}
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
void kire()
{
    char s[101];
    scanf("%s", s);
    int sl = len(s), match = 0, tmp = 0;
    for (int i = 0; i < sl; i++)
    {
        tmp = 0;
        for (int j = i, k = sl - 1; j <= k; j++, k--)
        {
            if (j == k)
                tmp++;
            else if (s[j] == s[k])
                tmp += 2;
            else
                break;
            match = max(tmp, match);

        }
    }
    int ans=sl-match+(match&1);
    printf("%d", ans);
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