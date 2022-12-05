#include<bits/stdc++.h>
#define ll long long
using namespace std;

int khela(int i){
    cout << "? " << i << endl;
    int x; cin >> x;
    return x - 1;
}

void solve(){
    int n; cin >> n;
    vector<int>ans(n, - 1);

    for(int i = 0; i < n; i += 1){
        if(ans[i] == - 1){
            vector<int>cycle;
            int start = khela(i + 1);
            int x = khela(i + 1);   cycle.push_back(x);

            while(x != start){
                x = khela(i + 1);
                cycle.push_back(x);
            }

            for(int k = 0; k < cycle.size(); k += 1)
                ans[cycle[k]] = cycle[(k + 1)%cycle.size()];
        }
    }

    cout << "! ";
    for(int i = 0; i < n; i += 1) cout << ans[i] + 1 << " ";
    cout << endl;
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