#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>vc(n), ans;
    map<ll, int>freq;
    set<pair<ll, int>>sp;
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; sp.insert({vc[i], i});
        freq[vc[i]] += 1;
    }

    bool on = 0;
    for(pair<ll, int>pi: sp){
        freq[pi.first] -= 1;
        if(on){
            on = 0;
            vc[pi.second] *= (ll)2; sp.insert({vc[pi.second], pi.second}); freq[vc[pi.second]] += 1;
        }
        else if(freq[pi.first]){
            on = 1; vc[pi.second] = - 1;
        }
    }

    for(ll i: vc){
        if(i == - 1) continue;
        ans.emplace_back(i);
    }
    cout << ans.size() << '\n';
    for(ll i: ans) cout << i << ' ';
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