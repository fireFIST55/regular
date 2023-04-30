#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(ll x, ll k){
    ll y = x + ((ll)1 << k);
    if(y <= (1e9)) return 1;
    else return 0;
}

void solve(){
    int n; cin >> n;
    vector<ll>vc(n);
    map<ll, int>cnt;
    for(ll &i: vc) cin >> i, cnt[i] += 1;
    int index = 0, dis = 0, total = 0;
    for(int i = 0; i < n; i += 1){
        int curr = cnt[vc[i]];
        for(ll k = 0; k < 61 && check(vc[i], k); k += 1){
            int tempcurr = curr + (check(vc[i], k)?cnt[vc[i] + ((ll)1 << k)]: 0) + (check(vc[i], k + 1)?cnt[vc[i] + ((ll)1 << (k + 1))]: 0);
            if(tempcurr > total){
                total = tempcurr, index = i, dis = k;
            }
        }
    }
    if(!total)
        cout << 1 << "\n" << vc[0] << '\n';
    else{
        ll a = vc[index];
        cout << total << '\n';
        for(int i = 0; i < 3; i += 1){
            while(cnt[a]--) cout << a << ' ';
            if(!check(a, dis)) break; 
            a = a + ((ll)1 << dis); dis = dis + 1;
        }
        cout << '\n';
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