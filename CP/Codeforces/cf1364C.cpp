#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 1e5 + 5;

void solve(){
    int n; cin >> n;
    vector<int>proh(M), vc(n), ans(n, -1);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i];
        if(i && vc[i] != vc[i - 1]){
            ans[i] = vc[i - 1]; proh[ans[i]] = 1;
        }
    }

    int curr = 0;
    proh[vc[n - 1]] = 1;
    for(int i = 0; i < n; i += 1){
        while(proh[curr]) curr += 1;
        if(ans[i] == -1) ans[i] = curr++;
    }

    for(int i: ans) cout << i << ' ';
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}