#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll sm = 0;
    int n; cin >> n;
    vector<ll>vc(n);
    for(ll &i: vc){
        cin >> i; sm += i;
    }
    
    multiset<ll>curr = {sm};
    multiset<ll> left(vc.begin(), vc.end());
    while(!curr.empty()){
        ll a = *--curr.end();
        if(a < *--left.end()) break;
        curr.erase(--curr.end());

        if(left.find(a) != left.end()){
            left.erase(left.find(a));
            continue;
        }

        if(a/2) curr.insert(a/2);
        if((a + 1)/2) curr.insert((a + 1)/2);
    }

    left.empty()?cout << "YES\n": cout << "NO\n";
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