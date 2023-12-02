#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tata return 0
#define all(v) v.begin(), v.end()
#define endl '\n'
#define gap ' '
struct Vector
{
    int *ptr;
    void assign(int n, int val)
    {
        for (int i = 0; i < n; i++)
        {
            ptr[i] = val;
        }
    }
    Vector()
    {
        ptr = (int *)malloc(0);
    }
    Vector(int n)
    {
        ptr = (int *)malloc(n * sizeof(int));
        sz = n;
        assign(n, 0);
    }
    Vector(int n, int val)
    {
        ptr = (int *)malloc(n * sizeof(int));
        sz = n;
        assign(n, val);
    }
    int size()
    {
        return sz;
    }
    void push_back(int val)
    {
        sz++;
        ptr = (int *)realloc(ptr, sz * sizeof(int));
        ptr[sz - 1] = val;
    }
    void resize(int n)
    {
        ptr = (int *)realloc(ptr, n * sizeof(int));
        sz = n;
    }
    void pop_back()
    {
        sz--;
        ptr = (int *)realloc(ptr, sz * sizeof(int));
    }
    int &operator[](int idx)
    {
        if (idx < 0 || idx >= sz)
        {
            printf("Trying to access invalid address\n");
            return ptr[0];
        }
        return ptr[idx];
    }

private:
    int sz = 0;
};
void kire()
{
    Vector v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    // cout<<v[2];
    v[2] = 69;
    v.assign(3, 4);
    // v.resize(5);
    v.push_back(5);
    v.push_back(5);
    v.pop_back();
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<gap;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 1;
    // cin>>t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        kire();
    }

    tata;
}