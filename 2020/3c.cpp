#include <stdio.h>
#include <math.h>
void swap(char &a, char &b)
{
    char tmp = a;
    a = b;
    b = tmp;
}
void kire()
{
    char s1[101], s2[101];
    scanf(" %[^\n]", s1);
    scanf(" %[^\n]", s2);
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            // printf("33");
            swap(s1[i], s2[i]);
        }
    }
    printf("%s\n%s\n", s1, s2);
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