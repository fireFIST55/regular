#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i += 1){
        for(int j = 1; j <= i; j += 1){
            if(j == 1 || j == i) cout << 1 << ' ';
            else cout << 0 << ' ';
        }
        cout << '\n';
    }
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