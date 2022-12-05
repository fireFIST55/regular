#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k, mx, mn;
    cin >> n >> k;
    vector<int>h(n);
    for(int &X: h)  cin >> X;
    mx = h[0];
    mn = h[0];

    for(int i = 1; i < n; i += 1){
        mx = min(h[i] + k - 1, mx + k - 1);
        mn = max(mn - k + 1, h[i]);

        if(mx < mn){
            cout << "NO\n";
            return;
        }

        if(i == n - 1){
            if(h[i] >= mn && h[i] <= mx){
                cout << "YES\n";
                return;
            }
            else{
                cout << "NO\n";
                return;
            }
        }
    }
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