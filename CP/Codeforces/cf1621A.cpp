#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k, lm;
    cin >> n >> k;
    lm = n&1?(n/2 + 1): n/2;
    if(lm < k){
        cout << - 1 << '\n';
        return;
    }

    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < n; j += 1){
            if(!(i&1) && i == j && k) cout << 'R', k -= 1;
            else cout << '.';
        }

        cout << '\n';
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}