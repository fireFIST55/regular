#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, q; cin >> n >> q;
    map<pair<int, int>, int>follow;
    for(int i = 0; i < q; i += 1){
        int t, a, b; cin >> t >> a >> b;
        if(t == 1) follow[{a, b}] = 1;
        else if(t == 2) follow[{a, b}] = 0;
        else{
            if(follow[{a, b}] && follow[{b, a}]) cout << "Yes\n";
            else cout << "No\n";
        }
    }
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