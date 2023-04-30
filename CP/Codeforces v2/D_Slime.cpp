#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>vc, khela;
    for(int i = 0; i < n; i += 1){
        ll a; cin >> a;
        if(a < 0){
            if(!khela.empty() && khela.back() > 0) khela.back() += (- a);
            else khela.emplace_back(a);
        } 
        else khela.emplace_back(a);
    }
    if(khela.size() == 2){
        sort(khela.begin(), khela.end());
        cout << khela[1] - khela[0] << '\n';
        return;
    }
    n = khela.size();
    for(int i = 0; i < n; i += 1){
        if(khela[i] >= 0) continue;
    }
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