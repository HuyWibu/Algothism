#include<bits/stdc++.h>
using namespace std;

int n;
string s="";

void Solve()
{
    int check = 0;
    for(int i=0 ; i<n ; i++)
        s+="0";
    // Idea: s[i] ----> 0 thay bang 1 va tu j = i+1 thay bang so 0 het
    while(check == 0)
    {
        string x="";
        int l = s.size() - 1;
        for(int i=l ; i>=0; i--)
            x+=s[i];
        if(x == s)
        {
            for(int i=0 ; i<s.size() ; i++)
                cout << s[i] << "\t";
        }
        cout << endl;
        int i = s.size() - 1;
        while(s[i]=='1' && i>=0) i-=1;
        if(i<0)
        {
            check = 1;
        }
        else
        {
            s[i] = '1';
            for(int j=i+1 ; j<s.size() ; j++)
                s[j] = '0';
        }
        i--;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    Solve();
    return 0;
}