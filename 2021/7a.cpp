#include <stdio.h>
#include <math.h>
#include <string.h>

void kire()
{
    char s[101][101];
    int n = 0, occurence[101] = {}, ln[101] = {};
    FILE *f;
    f = fopen("input.txt", "r");
    while (fscanf(f, "%s ", s[n++]) != EOF)
        ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; s[i][j]; j++)
        {
            ln[i]++;
        }
    }

    fclose(f);
    int most_occourring = 0, tmp = 0, ix = 0;
    for (int i = 0; i < n; i++)
    {
        tmp = 0;
        for (int j = 0; j < n; j++)
        {
            if (!strcmp(s[i], s[j]))
            {
                tmp++;
            }
        }
        if (tmp > most_occourring)
            ix = i, most_occourring = tmp;
        occurence[i] = tmp;
    }
    int longest_len = 0, lix = 0;
    for (int i = 0; i < n; i++)
    {
        if (occurence[i] == most_occourring)
        {
            if (ln[i] > longest_len)
                longest_len = ln[i], lix = i;
        }
    }

    int flag=0;
    for (int i = 0; i < n; i++)
    {
        if (occurence[i] == most_occourring && ln[i] == longest_len)
        {
            if (strcmp(s[i], s[lix]) < 0)
                lix = i;
        }
    } 
    printf("%s\n", s[lix]);
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