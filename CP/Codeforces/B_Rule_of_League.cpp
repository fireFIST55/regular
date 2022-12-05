#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x, y; cin >> n >> x >> y;
    int mx = max(x, y);
    if((!x && !y) || (x && y) || ((n - 1) % mx)){
        cout << - 1 << '\n';
        return;
    }

    int k = max(x, y), last = 1;
    for(int i = 2; i <= n; i += 1){
        if(!k){
            k = max(x, y); last = i;
        }
        cout << last << ' ';
        k -= 1; 
    }
    cout << '\n';
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