/*
Output as per Question:
100 105
104 247
108 100 105
112 104 247
247 247 247 247 247
*/
#include<stdio.h>
#include<math.h>

void kire()
{
    int a=105, b=247;
    int *pa, *pb;
    pa=&a;
    pb=&b;
    printf("%u %d\n", pa, *pa); 
    printf("%u %d\n", pb, *pb); 
    int **ppa, **ppb;
    ppa=&pa;
    ppb=&pb;
    printf("%u %u %d\n", ppa, *ppa, **ppa);
    printf("%u %u %d\n", ppb, *ppb, **ppb);
    **ppa=*pb;
    *pa=**ppb;
    printf("%d %d %d %d %d \n", a, b, *pa, *pb, **ppa, **ppb);
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