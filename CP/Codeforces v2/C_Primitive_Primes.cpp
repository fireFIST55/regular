#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, p; cin >> n >> m >> p;
    vector<int>a(n), b(m);
    int index1 = 0, index2 = 0;
    for(int i = 0; i < n; i += 1){
        cin >> a[i];
        if((a[i] % p) && !index1){
            index1 = i + 1;
        }
    }
    for(int i = 0; i < m; i += 1){
        cin >> b[i];
        if((b[i] % p) && !index2){
            index2 = i + 1;
        }
    }
    cout << index1 + index2 - 2 << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}