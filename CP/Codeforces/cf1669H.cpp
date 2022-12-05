#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>vc(n), nai[32];
    for(int i = 0; i < n; i += 1){
        cin >> vc[i];
        for(int j = 0; j < 31; j += 1){
            if(!(vc[i]&(1<<j))) nai[j].push_back(i);
        }
    }

    for(int i = 30; i >= 0; i -= 1){
        if(nai[i].size() <= k){
            for(int index: nai[i]){
                vc[index] |= (1 << i); k -= 1;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i += 1){
        ans = i?ans&vc[i]: vc[i];
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