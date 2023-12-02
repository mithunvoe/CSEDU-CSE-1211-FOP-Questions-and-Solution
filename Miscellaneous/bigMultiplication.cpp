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
    if ((l1 == 1 && s1[0] == '0') || (l2 == 1 && s2[0] == '0'))
    {
        printf("0");
        return;
    }
    int carry = 0, sm = 0, n = max(l1, l2);
    int k = 0;
    for (int i = 0; i < l1; i++)
    {
        k = i;
        carry = 0;
        for (int j = 0; j < l2; j++, k++)
        {
            sm = ans[k] - '0' + (s2[j] - '0') * (s1[i] - '0') + carry;
            carry = sm / 10;

            sm %= 10;
            ans[k] = sm + '0';
        }
        ans[k] += carry;
        if (carry)
            k++;
    }
    reverse(ans, k);
    ans[k] = '\0';
    printf("%s\n", ans);
}

int main()
{
    int t = 1;

    for (int i = 1; i <= t; i++)
    {

        kire();
    }
}