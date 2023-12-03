#include <stdio.h>
#include <math.h>
#include <string.h>
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
void reverse(char s[], int ln)
{
    for (int i = 0; i < ln / 2; i++)
    {
        char tmp = s[i];
        s[i] = s[ln - i - 1];
        s[ln - 1 - i] = tmp;
    }
    s[ln] = '\0';
}
void kire()
{
    char s1[101], s2[101], ans[102];
    int l1 = 0, l2 = 0;
    scanf(" %s", s1);
    scanf(" %s", s2);
    l1 = strlen(s1);
    l2 = strlen(s2);
    reverse(s1, l1);
    reverse(s2, l2);
    int carry = 0, sm = 0, n = max(l1, l2);
    for (int i = 0; i < n; i++)
    {
        sm = 0;
        if (i >= l1 || i >= l2)
        {
            if (i >= l1)
                sm += s2[i] - '0';
            else
                sm += s1[i] - '0';
        }
        else
        {
            sm += s2[i] - '0' + s1[i] - '0';
        }
        sm += carry;
        carry = sm / 10;
        sm %= 10;
        ans[i] = sm + '0';
    }
    if (carry)
        ans[n++] = carry + '0';

    reverse(ans, n);
    printf("%s", ans);
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