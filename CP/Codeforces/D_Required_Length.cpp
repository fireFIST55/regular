#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, x; cin >> n >> x;
    map<ll, int>time;
    deque<ll>khela; khela.push_back(x);

    while(!khela.empty()){
        ll y = khela.front(); khela.pop_front();
        string t = to_string(y);

        if(t.length() == n){
            cout << time[y] << '\n';
            return;
        }
        for(char ch: t){
            if(ch == '0' || ch == '1') continue;
            ll a = (ch - 48) * y; 
            if(!time[a]){
                time[a] = time[y] + 1; 
                khela.push_back(a);
            }
        }
    }

    cout << - 1 << '\n';
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