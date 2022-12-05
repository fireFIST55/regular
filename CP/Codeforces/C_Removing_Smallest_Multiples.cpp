#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e6 + 5;
vector<int>sml(N, INT_MAX);

void khela(){
    sml[1] = sml[0] = 1;
    for(int i = 2; i <= N; i += 1){
        for(int j = i; j <= N; j += i) sml[j] = min(sml[j], i);
    }
}

void solve(){
    int n; cin >> n;
    vector<int>seen(n + 5);
    string s; cin >> s;

    ll ans = 0;
    bool on = 1;
    for(int i = 1; i <= n; i += 1){
        if(s[i - 1] == '1'){
            on = 0;
            for(int j = i; j <= n; j += i) seen[j] = i;
        }
        else{
            int x = i;
            if(on) ans += (ll)1, x = 1;
            else{
                int taken = i;
                ll y = i;
                for(ll j = seen[i]?seen[i]: 2; j * j <= y; j += (ll)1){
                    if(!(i % j)){
                        if(j != seen[i]){
                            x = j;
                            taken = j; break;
                        }
                        else if((i / j) != seen[i]){
                            x = i / j; taken = i / j;
                            break;
                        }
                    }
                }

                ans += (ll)taken;
            }

           // cout << i << " " << x << endl;
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