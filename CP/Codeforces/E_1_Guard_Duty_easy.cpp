#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int sship, base; cin >> sship >> base;
    vector<pair<pair<int, int>, int>>khela;
    vector<int>s1(sship), s2(sship), b1(base), b2(base);
    for(int i = 0; i < sship; i += 1)   cin >> s1[i] >> s2[i];
    for(int i = 0; i < base; i += 1) cin >> b1[i] >> b2[i];

    if(sship != base) cout << "No\n";
    else{
        for(int i = 0; i < base; i += 1){
            if(s1[i] == b1[i] && s2[i] == b2[i]) continue;
        }
    }
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