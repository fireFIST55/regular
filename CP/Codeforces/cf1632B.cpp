#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int k = log2(n - 1);
    for(int i = (1 << k) - 1; i >= 0; i -= 1) cout << i << ' ';
    for(int i = (1<<k); i < n; i += 1) cout << i << ' ';
    cout << '\n';
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