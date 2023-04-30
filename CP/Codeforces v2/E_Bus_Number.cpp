#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll>fact(30);
vector<int>frq(10), temp;
vector<pair<int, int>>khela;
ll dfs(int index, int total){
    ll res = 0;
    if(index == khela.size()){
        ll ans = fact[total];
        for(int i = 0; i < temp.size(); i += 1) ans /= fact[temp[i]];
        if(!khela[0].first){
            ll ans1 = fact[total - 1] / fact[temp[0] - 1];
            for(int i = 1; i < temp.size(); i += 1) ans1 /= fact[temp[i]];
            ans -= ans1;
        }
        return ans;
    }
    for(int i = 1; i <= khela[index].second; i += 1){
        temp.emplace_back(i);
        res += dfs(index + 1, total + i);
        temp.pop_back();
    }
    return res;
}

void solve(){
    int n; cin >> n;
    string s; s = to_string(n); fact[1] = 1;
    for(int i = 0; i < s.length(); i += 1){
        frq[s[i] - '0'] += 1; fact[i + 1] = (ll)1 * fact[i] * (i + 1); 
    }
    for(int i = 0; i < 10; i += 1){
        if(!frq[i]) continue;
        khela.emplace_back(i, frq[i]);
    }
    cout << dfs(0, 0) << '\n';
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