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
void bigsum(char s1[], char s2[], char ans[])
{
    int l1 = 0, l2 = 0;
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
    reverse(ans, n);
    // printf("%s", ans);
}
void kire()
{
    char s1[101], s2[101], ans[10001], ansx[10001];
    int l1 = 0, l2 = 0;
    for (int i = 0; i < 10000; i++)
    {
        ans[i] = '0';
    }
    scanf(" %s", s1);
    scanf(" %s", s2);
    l1 = strlen(s1);
    l2 = strlen(s2);
    reverse(s1, l1);
    reverse(s2, l2);
    int carry = 0, sm = 0, n = max(l1, l2);
    int k = 0;
    // printf("%s %s ", s1, s2);
    for (int i = 0; i < l1; i++)
    {
        k = i;
        for (int j = 0; j < l2; j++, k++)
        {
            sm = ans[k] + (s2[j] - '0') * (s1[i] - '0') + carry;
            printf("%d\n", sm);
            carry = sm / 10;
            sm %= 10;
            ans[k] = sm + '0';

            // printf("%d %d\n", sm, carry);
        }
    }
    reverse(ans, k);
    ans[k] = '\0';
    printf("%s\n", ans);
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