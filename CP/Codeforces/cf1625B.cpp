#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, ans = - 1;
    cin >> n;
    vector<int>vc(n), last(150005);
    for(int &X: vc)   cin >> X;

    for(int i = 0; i < n; i += 1){
        if(last[vc[i]]) ans = max(last[vc[i]] + n - i - 1, ans);
        last[vc[i]] = i + 1;
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