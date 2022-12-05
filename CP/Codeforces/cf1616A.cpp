#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, n, ans = 0;
    cin >> n;
    set<int> st;
    map<int, int>mp;

    for(int i = 0; i < n; i += 1){
        cin>> a;
        if(!mp[a]){
            ans += 1;
            mp[a] = 1;
        }
        else if(!mp[-a]){
            ans += 1;
            mp[- a] += 1;
        }
    }

    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}