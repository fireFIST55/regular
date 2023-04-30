#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2750135;
vector<int>prime(N), cnt(N), num(N);
void sieve(){
    int count = 1;
    for(int i = 2; i < N; i += 1) prime[i] = i;
    for(int i = 2; i < N; i += 1){
        if(prime[i] == i){
            num[i] = count++;
            for(ll j = (ll) i * (ll) i; j < N; j += i) prime[j] = min(prime[j], i);
        }
        else prime[i] = i / prime[i]; 
    }
}

void solve(){
    int n; cin >> n; n <<= 1;
    vector<int>vc(n), ans;
    for(int &i: vc){
        cin >> i; cnt[i] += 1;
    }
    sort(vc.rbegin(), vc.rend());
    for(int i = 0; i < n; i += 1){
        if(cnt[vc[i]] <= 0) continue; 
        if(prime[vc[i]] != vc[i]){
            cnt[prime[vc[i]]] -= 1; cnt[vc[i]] -= 1;
            ans.emplace_back(vc[i]);
        }
        else{
            if(cnt[num[vc[i]]] > 0){
                cnt[num[vc[i]]] -= 1; ans.emplace_back(num[vc[i]]);
                cnt[vc[i]] -= 1; 
            }
        }
    }
    for(int i: ans) cout << i << ' ';
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    sieve();
    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}