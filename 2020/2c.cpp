#include <stdio.h>
#include <math.h>

struct Matrix
{
    int value[10][10];

    void rotat_clock()
    {
        int n, m;
        n = m = 10;
        int tmp[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                tmp[i][j] = value[n - j - 1][i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                value[i][j] = tmp[i][j];
            }
        }
    }
    void rotat_anticlock()
    {
        int n, m;
        n = m = 10;
        int tmp[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                tmp[i][j] = value[j][n - i - 1];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                value[i][j] = tmp[i][j];
            }
        }
    }
    void multiply(struct Matrix B)
    {
        int n, m;
        n = m = 10;
        int tmp[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                tmp[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    tmp[i][j] += value[i][k] * B.value[k][j];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                value[i][j] = tmp[i][j];
            }
        }
    }
    void print_diagonal()
    {
        int n, m;
        n = m = 10;
        for (int i = 0; i < n; i++)
        {
            printf("%d ", value[i][i]);
        }
    }
};
void kire()
{
    struct Matrix A, B;
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A.value[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &B.value[i][j]);
        }
    }
    // A.print_diagonal();

        // printf("\n\n\n");
        // A.rotat_anticlock();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", A.value[i][j]);   
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