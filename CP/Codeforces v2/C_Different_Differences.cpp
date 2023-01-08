#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> k >> n;
    vector<int>vc(k); vc[0] = 1;
    for(int i = 1, cnt = 1; i < k; i += 1){
        if(vc[i - 1] + cnt <= n && (n - (vc[i - 1] + cnt)) >= (k - i - 1)){
            vc[i] = vc[i - 1] + cnt; cnt += 1;
        }
        else vc[i] = vc[i - 1] + 1;
    }
    for(int i: vc) cout << i << " ";
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