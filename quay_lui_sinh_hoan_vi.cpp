#include <bits/stdc++.h>
using namespace std;

int n, a[100] = {0}, used[100] = {0};

void kq()
{
    for(int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(used[j] == 0)
        {
            a[i] = j;
            used[j] = 1;
            if(i == n)
            {
                kq();
            } 
            else
            {
                Try(i + 1);
            }
            // backtrack
            used[j] = 0;
        }
    }
}

int main()
{
    cin >> n;
    Try(1);
    return 0;
}