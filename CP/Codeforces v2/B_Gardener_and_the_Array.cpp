#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 5;

void solve(){
    int n; cin >> n;
    map<int, int>freq;
    vector<vector<int>>vc(n);
    for(int i = 0; i < n; i += 1){
        int m; cin >> m;
        vc[i].resize(m);
        for(int &k: vc[i]){
            cin >> k; freq[k] += 1;
        }
    }
    for(int i = 0; i < n; i += 1){
        bool ok = 1;
        for(int k: vc[i]){
            if(freq[k] == 1){
                ok = 0; break;
            }
        }
        if(ok){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}