#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, n, l, ans = 0;
    cin >> n >> l;
    vector<int>one(31, 0), zero(31, 0);
    for(int i = 0; i < n; i += 1){
        cin >> a;
        for(int j = 0; j < 31; j += 1)
            (a&(1<<j))? one[j] += 1: zero[j] += 1;
    }

    for(int k = 0; k < 31; k += 1){
        int x = (zero[k] >= one[k]?0: 1);
        if(x) ans += (1 << k);
    }

    cout << ans << '\n';
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