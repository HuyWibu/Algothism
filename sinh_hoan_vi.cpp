#include <bits/stdc++.h>
using namespace std;

int n, check, a[100];

void ktao()
{
    for(int i=1 ; i<=n ; i++)
        a[i] = i;
}

void sinh()
{
    int i=n-1;
    while(a[i] > a[i+1] && i>=1)
    {
        i--;
    }
    if(i == 0)
    {
        check = 0;
    }
    else
    {
        int j = n;
        while(a[i] > a[j])
        {
            j--;
        }
        swap(a[i], a[j]);
        sort(a + i + 1, a + n);
        // reverse(a + i + 1, a + n + 1) Ham lat nguoc can sau khong lay nen phai cong them 1 
        // int l = i + 1, r = n;
        // while(l < r)
        // {
        //     swap(a[l], a[r]);
        //     l++;
        //     r--;
        // }
    }
}

int main()
{
    cin >> n;
    check = 1;
    ktao();
    while(check)
    {
        for(int i=1 ; i<= n ; i++)
        {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}