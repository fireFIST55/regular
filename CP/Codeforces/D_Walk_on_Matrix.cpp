#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int k, x = 1 << 17; cin >> k; 
    cout << "2 3\n";
    cout << k + x << " " << x << " " << 0 << '\n';
    cout << k << " " << k + x << " " << k << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}