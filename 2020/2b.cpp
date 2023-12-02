#include <stdio.h>
#include <math.h>

void kire()
{
    char s[101];
    scanf("%s", s);
    char first_wave[2][5][6] = {{"     ", "     ", "*****", " *** ", "  *  "}, {"  *  ", " *** ", "*****", "     ", "     "}};
    char else_wave[2][5][6] = {{"    ", "    ", "****", "*** ", " *  "}, {" *  ", "*** ", "****", "    ", "    "}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; s[j] != '\0'; j++)
        {
            if (!j)
            {
                printf("%s", first_wave[s[j] - '0'][i]);
            }
            else
                printf("%s", else_wave[s[j] - '0'][i]);
        }
        printf("\n");
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