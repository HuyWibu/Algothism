#include <bits/stdc++.h>
using namespace std;

int n, a[100] = {0}, cot[100] = {0}, d1[100] = {0}, d2[100] = {0};

int x[100][100], cnt = 0;

void kq()
{
    memset(x, 0, sizeof(x));
    for(int i = 1; i <= n; i++)
    {
        x[i][a[i]] = 1; 
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << x[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(cot[j] == 0 && d1[i - j + n] == 0 && d2[i + j - 1] == 0)
        {
            a[i] = j;
            cot[j] = d1[i -j + n] = d2[i + j - 1] = 1; // danh dau
            if(i == n)
            {
                kq();
            }
            else
            {
                Try(i + 1);
            }
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 1; i <= 100; i++)
    {
        cot[i] = d1[i] = d2[i] = 0;
    }
    Try(1);
    // cout << cnt << endl;
    return 0;
}