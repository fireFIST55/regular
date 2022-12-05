#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, last, colmn = 0; cin >> n >> m; last = - n * m;
    vector<int>row(m), col(m);
    for(int i = 0; i < n*m; i += 1){
        char ch; cin >> ch;
        if(ch == '1'){
            last = i; 
            if(!col[i%m]){
                col[i%m] = 1;  colmn += 1;
            }
        }

        if(i - last < m) row[i % m] += 1;
        cout << (colmn + row[i % m]) << ' ';
    }
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}