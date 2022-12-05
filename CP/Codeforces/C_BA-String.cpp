#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, k, x, prev = 0; cin >> n >> k >> x;
    string s; cin >> s;
    vector<ll>mul(n); x -= (ll)1;
    int index = n - 1;
    for(int i = n - 1; i >= 0; i -= 1){
        if(s[i] == '*'){
            int j = i; ll cnt = 0;
            while(j < n && s[i] == s[j]){
                cnt += (ll)1; mul[j] = (1 + prev) * k; 
                if(mul[j] >= x){
                    index = j; break;
                }
            }
            prev += cnt * mul[i]; i = j;
        }
    }
    string ans;
    for(int i = 0; i < n; i += 1){
        if(s[i] == 'a') ans += s[i];
        else if(i >= index && x > 0){
            ans += string(x / (mul[i] / k), 'b'); x %= (mul[i] / k);
        }
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}