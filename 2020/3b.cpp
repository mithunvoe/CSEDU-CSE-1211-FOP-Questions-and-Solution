#include <stdio.h>
#include <math.h>
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}
void kire()
{
    int basic, rent, medi;
    scanf("Basic: %d\n", &basic);
    scanf("House Rent: %d\n", &rent);
    scanf("Medical: %d\n", &medi);
    basic *= 12;
    rent *= 12;
    medi *= 12;
    int taxable = basic;
    rent = max(0, rent - basic / 2);
    medi = max(0, medi - 60000);
    taxable += medi + rent;
    int tax = 0, taxable2 = taxable;
    taxable = max(0, taxable - 250000);
    tax += min(150000, taxable) * .1;
    taxable = max(0, taxable - 150000);
    tax += min(taxable,  100000) * .15;
    taxable = max(0, taxable - 100000);
    tax += min(taxable,  100000) * .2;
    taxable = max(0, taxable - 100000);
    tax += min(taxable,  2400000) * .25;
    taxable = max(0, taxable - 2400000);
    tax += taxable * .30;
    printf("Taxable Income breakdown:\n");
    printf("Basic: %d\n", basic);
    printf("House Rent: %d\n", rent);
    printf("Medical: %d\n", medi);
    printf("Annual taxable income: %d\n", taxable2);
    printf("Tax: %d Taka", tax);
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