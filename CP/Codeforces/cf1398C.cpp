#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    ll pref = 0, n, ans = 0;
    string s;
    cin>> n>> s;
    unordered_map<ll, ll>mp;
    mp[1] = 1;

    for(int i = 0; i<n; i += 1){
        pref += s[i] - 48;
        ans += mp[pref - i];
        mp[pref - i] += 1;
    }

    cout<<ans<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}