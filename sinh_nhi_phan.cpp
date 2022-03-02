#include <bits/stdc++.h>
using namespace std;

// + Cau hinh dau tien
// + Cau hinh cuoi cung
// + Phuong phap sinh 

// <Khoi tao cau hinh dau tien>
// while(<Khi chua phai cau hinh cuoi cung>){
//     <In ra  cau hinh hien tai>
//     <Sinh ra cau hinh tiep theo>
// }

int n, a[100], check;

void ktao()
{
    for(int i=1 ; i<=n ; i++)
        a[i] = 0;
}

void sinh()
{
    int i=n;
    while(a[i] == 1 && i >= 1)
    {
        a[i] = 0;
        i--;
    }
    if(i)
    {
        a[i] = 1;
    }
    else
    {
        check = 0;
    }
}

int main(){
    cin >> n;
    check = 1;
    ktao();
    while(check)
    {
        for(int i=1 ; i<=n ; i++)
            cout << a[i];
        cout << endl;
        sinh();
    }
    return 0;
}