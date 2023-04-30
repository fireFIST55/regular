#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, ans = 0; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    for(int i = 0; i < n; i += 1){
        int j = i + 1, cnt = 0;
        while(j < n && (vc[j] % 2) == (vc[i] % 2)) cnt += 1, j += 1;
        ans += cnt;
        i = j - 1;
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