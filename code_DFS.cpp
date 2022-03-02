#include <bits/stdc++.h>
using namespace std;

// vector<int> v[100];
// vector<int> x[100];
vector<int> adj[100];
int a[100][100], canh = 9, dinh = 6, c[100][100], row, col;

// void mt_ke_thanh_ds_ke(){
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             if(a[i][j]){
//                 v[i].push_back(j);
//                 v[j].push_back(i);
//             }
//         }   
//     }   
//     for(int i = 1; i <= n; i++){
//         cout << "Ke cua " << i << " : ";
//         for(int j = 0; j < v[i].size(); j++){
//             cout << v[i][j] << " ";
//         }
//         cout << endl;
//     }

// }

// void ds_canh_thanh_ds_ke(){
//     int u, v, cnt;
//     while(n--){
//         cin >> u >> v;
//         cnt = max(cnt, max(u, v)); // tim dinh lon nhat
//         x[u].push_back(v);
//         x[v].push_back(u);
//     }

//     for(int i = 1; i <= cnt; i++){
//         cout << "Ke cua " << i << " : ";
//         for(int j = 0; j < x[i].size(); j++){
//             cout << x[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

void dao_nghich_ma_tran(){
    row = canh, col = dinh;
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            c[i][j] = a[j][i];
        }
    }
}

void mt_lien_thuoc_thanh_ds_ke(){
    int u, v, cnt = 1;
    dao_nghich_ma_tran();
    for(int i = 1; i <= row; i++){
        cnt = 1;
        for(int j = 1; j <= col; j++){
            if(c[i][j] && cnt  == 1){
                u = j;
                cnt++;
            }
            if(c[i][j] && cnt  == 2){
                v = j;
            }
        }
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= dinh; i++){
        cout << "Ke cua " << i << " : ";
        for(int j = 0; j < adj[i].size(); j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}


void Solve(){
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // mt_ke_thanh_ds_ke();

    // ds_canh_thanh_ds_ke();

//     for(int i = 1; i <= dinh; i++){
//         for(int j = 1; j <= canh; j++){
//             cin >> a[i][j];
//         }
//     }
//     mt_lien_thuoc_thanh_ds_ke();
// }

int main(){
    Solve();
    return 0;
}
// 0 1 1 0 0 0
// 1 0 1 1 1 0
// 1 1 0 1 0 0
// 0 1 1 0 1 1
// 0 1 0 1 0 1
// 0 0 0 1 1 0