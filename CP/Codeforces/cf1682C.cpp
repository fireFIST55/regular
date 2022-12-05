#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, one = 0, grt = 0; cin >> n;
    vector<int>vc(n);
    map<int, int>freq;
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; freq[vc[i]] += 1;
    }

    for(int i = 0; i < n; i += 1){
        one += (freq[vc[i]] == 1);
        grt += (freq[vc[i]] > 1?1: 0);

        freq[vc[i]] = 0;
    }

    if(n == 1){
        cout << 1 << '\n';
        return;
    }

    cout << (one&1?((one/2) + 1): one/2) + grt << '\n';
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