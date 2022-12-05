#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll sum = 0;
    int n; cin >> n;
    vector<ll>a(n);
    for(ll &i: a){
        cin >> i; sum += i;
    }

    int m; cin >> m;
    vector<ll>b(m);
    for(ll &i: b){
        cin >> i; sum -= i;
    }

    if(sum != 0){
        cout << - 1; 
        return;
    }

    int posa = 0, posb = 0, count = 0;
    while(posa < n){
        count += 1;
        ll sma = a[posa++], smb = b[posb++];
        
        while(sma != smb){
            if(sma < smb) sma += a[posa++];
            else smb += b[posb++];
        }
    }

    cout << count << '\n';
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