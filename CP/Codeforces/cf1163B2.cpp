#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 1e5 + 5;

void solve(){
    int n, mx = 0, ans = 0; cin >> n;
    vector<int>freq(M), ffreq(M);

    for(int i = 1; i <= n; i += 1){
        int a; cin >> a;
        if(freq[a]) ffreq[freq[a]] -= 1;
        ffreq[++freq[a]] += 1; mx = max(mx, freq[a]);

        if(ffreq[1] == i)   ans = i;
        else if(ffreq[1] == 1 && ffreq[mx]*mx == i - 1) ans = i;
        else if(ffreq[i] == 1) ans = i;
        else if(ffreq[mx - 1]*(mx - 1) == i - mx && ffreq[mx] == 1) ans = i;
    }

    cout << ans << '\n';
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