#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define max(x, y) x < y ? y : x
void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
int strcmp(char s1[], char s2[])
{
    int l1 = 0, l2 = 0;
    while (s1[++l1])
        ;
    while (s2[++l2])
        ;
    for (int i = 0; i < max(l1, l2); i++)
    {
        if (i >= l1)
            return -1;
        if (i >= l2)
            return 1;

        if (s1[i] > s2[i])
            return 1;
        if (s1[i] < s2[i])
            return -1;
    }
    return 0;
}
void kire()
{
    int n;
    scanf("%d", &n);
    char s[n + 1][101];
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %s", s[i]);
        a[i] = i;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(s[a[i]], s[a[j]]) > 0)
            {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s[a[i]]);
    }
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