#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>vc(n), used(n), ans(n);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i];
        vc[i] -= 1;
    }

    for(int i = 0; i < n; i += 1){
        if(!used[i]){
            vector<int>curr;
            while(!used[i]){
                curr.push_back(i);
                used[i] = 1;
                i = vc[i];
            }

            for(int x: curr) ans[x] = curr.size();
        }
    }

    for(int x: ans) cout << x << ' ';
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