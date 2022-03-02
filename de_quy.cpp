#include <bits/stdc++.h>
using namespace std;

int gt(int n)
{
    // bai toan con de dung de quy
    if(n == 0)
    {
        return 1;
    }
    return n * gt(n - 1);
    // sau do moi la de quy
}

long long fibo(int n)
{
    if(n <= 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int nCk(int n, int k)
{
    if(k == 0 || k == n)
        return 1;
    return nCk(n - 1, k) + nCk(n - 1, k - 1);
}

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int binpow(int a, int b)
{
    if(b == 0)
        return 1;
    int x = binpow(a, b / 2); // chi tinh truoc de thay x vao viet cho gon thoi
    if(b % 2 == 1)
        return a * x * x;
    return x * x;
}

int count(int n)
{
    if(n < 10)
        return 1;
    return 1 + count(n / 10);
}

int palin(int a[], int l, int r) // ktra doi xung
{
    if(l >= r)
        return 1;
    if(a[l] != a[r])
        return 0;
    return palin(a, l + 1, r - 1);
}

int main()
{
    int n; cin >> n;
    cout << gt(n) << endl;
    return 0;
}