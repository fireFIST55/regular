#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, base, last = - 1, start = - 1; cin >> n >> base;
    map<int, int>vis;
    vector<int>digits(n);
    for(int &i: digits) cin >> i, vis[i] = 1;
    if(!vis[0]) last = 0;
    int x = digits[n - 1];
    for(int i = base - 1; i > x && last == - 1; i -= 1){
        if(!vis[i]){
            last = i; break;
        }
    }
    for(int i = max(0, x - 1); i > 0; i -= 1){
        if(!vis[i]){
            start = i; break;
        }
    }
    if(start == - 1) cout << (last?last == - 1?x: last: base) - x << '\n';
    else{
        ll cnt = base - x;
        for(int i = n - 1; i >= 0; i -= 1){
            vis[(digits[i] + 1) % base] = 1;
            if((digits[i] + 1) % base) break;
        }
        start = - 1;
        for(int i = max(0, x - 1); i > 0; i -= 1){
            if(!vis[i]){
                start = i; break;
            }
        }
        if(start == - 1) cout << cnt << '\n';
        else cout << start + cnt << '\n';
    }
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