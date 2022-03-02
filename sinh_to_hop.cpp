#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], check;

void ktao()
{
    for(int i=1 ; i<=k ; i++)
        a[i] = i;
}

void sinh()
{
    int i=k;
    while(a[i] == n-k+i && i >= 1)
    {
        i--;
    }
    if(i == 0)
    {
        check = 0;
    }
    else
    {
        int x = ++ a[i];
        for(int j=i ; j<=k ; j++)
        {
            a[j] = x++;
        }
    }
}

int main()
{
    cin >> n >> k;
    check = 1;
    ktao();
    while(check)
    {
        for(int i=1 ; i<=k ; i++)
            cout << a[i];
        cout << endl;
        sinh();
    }
    return 0;
}