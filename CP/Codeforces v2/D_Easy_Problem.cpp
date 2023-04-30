#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s, str = "hard"; cin >> s;
    vector<ll>ambg(n), prev(26), nxt(26), bingo(26), pref(26), suff(26), cnt(n), valid(26);
    for(ll &i: ambg) cin >> i;
    for(int i = 1; i < 4; i += 1){
        prev[str[i] - 'a'] = (str[i - 1] - 'a'); bingo[str[i] - 'a'] = 1;
    }
    for(int i = 0; i < 3; i += 1){
        nxt[str[i] - 'a'] = (str[i + 1] - 'a'); bingo[str[i] - 'a'] = 1;
    }
    for(int i = n - 1; i >= 0; i -= 1){
        if(bingo[s[i] - 'a']){
            if(s[i] == 'd') suff[s[i] - 'a'] = 1;
            else if(suff[nxt[s[i] - 'a']]) suff[s[i] - 'a'] = 1, cnt[i] += 1;
        }
    }
    for(int i = 0; i < n; i += 1){
        if(bingo[s[i] - 'a']){
            if(s[i] == 'h'){
                pref[s[i] - 'a'] = 1; 
                if(cnt[i] == 1) valid[s[i] - 'a'] += ambg[i];
            }
            else if(pref[prev[s[i] - 'a']]){
                pref[s[i] - 'a'] = 1, cnt[i] += 1;
                if(cnt[i] == 2) valid[s[i] - 'a'] += ambg[i];
                else if(cnt[i] == 1 && s[i] == 'd') valid[s[i] - 'a'] += ambg[i];
            }
        }
    }
    
    ll mn = LONG_LONG_MAX;
    for(int i = 0; i < 4; i += 1) mn = min(mn, valid[str[i] - 'a']);
    cout << mn << '\n';
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