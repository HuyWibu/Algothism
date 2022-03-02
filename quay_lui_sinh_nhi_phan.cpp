#include <bits/stdc++.h>
using namespace std;

int  n, a[100];

void kq()
{
    for(int j = 1; j <= n; j++)
        cout << a[j] << " ";
    cout << endl;
}

void Try(int i)
{
    for(int j = 0; j <= 1; j++) // chay qua tat ca cac cau hinh
    {
        a[i] = j; 
        if(i == n)
            kq();
        else
            Try(i + 1);
    }

}


int main()
{   
    cin >> n;
    Try(1);
    return 0;
}