#include <stdio.h>
#include <math.h>
void reverse(char s[])
{
    int ln = 0;
    while (s[++ln])
        ; // counting length of the string
    for (int i = 0; i < ln / 2; i++)
    {
        char tmp = s[i];
        s[i] = s[ln - i - 1];
        s[ln - i - 1] = tmp;
    }
}
void kire()
{
    char s[101], c;
    
    FILE *inf, *opf;
    inf = fopen("in.txt", "r");
    opf = fopen("out.txt", "w");

    // if (inf == NULL)
    //     printf("INPUT ERROR!!!");
    // if (opf == NULL)
    //     printf("OUTPUT ERROR!!!");

    while (fscanf(inf, "%s", s) != EOF)
    {
        reverse(s);
        fprintf(opf, "%s", s);
        fscanf(inf, "%c", &c);
        fprintf(opf, "%c", c);
    }

    fclose(inf);
    fclose(opf);
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