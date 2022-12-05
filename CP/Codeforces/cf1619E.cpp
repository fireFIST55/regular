#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>vc(n), freq(n + 1);
    for(ll &i: vc){
        cin >> i; freq[i] += 1;
    }

    ll prev = 0;
    priority_queue<ll>store;
    for(ll i  = 0; i <= n; i += 1){
        if(freq[i]){
            cout << prev + freq[i] << ' ';
            if(freq[i] > 1) store.push(i);
        }
        else{
            cout << prev << ' ';
            if(store.empty()){
                for(int k = i + 1; k <= n; k += 1) cout << - 1 << ' ';
                break;
            }
            ll x = store.top();    prev += i - x;
            freq[x] -= 1;
            if(freq[x] == 1) store.pop();
        }
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