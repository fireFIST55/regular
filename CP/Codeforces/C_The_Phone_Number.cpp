#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    if(n == 1){
        cout << 1 << '\n';
        return;
    }

    int each, tot = INT_MAX;
    for(int i = 1; i <= n/2; i += 1){
        if(i + (n + i - 1)/i < tot){
            tot = i + (n + i - 1)/i; each = i;
        }
    }

    int left = n;
    vector<int>khela(n);
    for(int i = 0; i < n; i += each){
        for(int k = min(n, i + each) - 1; k >= i; k -= 1) khela[k] = left--;
    }

    for(int i: khela) cout << i << ' ';
    cout << '\n';
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