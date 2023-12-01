#include<stdio.h>
#include<math.h>
int n;
int findMinIndex(int a[], int st, int ed)
{
    int ansi=st, mn=a[st];
    for (int i = st; i <= ed; i++)
    {
        if(a[i]<mn) mn=a[i], ansi=i;
    }
    return ansi;
}
void swap(int &a, int &b)
{
    a^=b;
    b^=a;
    a^=b;
}
void sort(int a[])
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<a[i]) swap(a[i], a[j]);
        }   
    }
}
void kire()
{
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);   
    }
}

int main()
{
    int t=1;
    // scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        // printf("Case %d: ",i );
        kire();

    }
}