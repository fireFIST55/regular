#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, n, r, ans = 0;
    cin >> n >> r;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;

    sort(vc.begin(), vc.end());
    n = unique(vc.begin(), vc.end()) - vc.begin();

    for(int i = n - 1; i >= 0; i -= 1)
        ans += (vc[i] - ans*r > 0);
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