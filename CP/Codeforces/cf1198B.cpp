#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> vc(n), change(n);
    for(int &i: vc) cin >> i;

    int q; cin >> q;
    vector<int>khela(q, 0);
    for(int i = 0; i < q; i += 1){
        int option; cin >> option; 
        if(option == 1){
            int person, x; cin >> person >> x;
            vc[--person] = x; change[person] = i + 1;
        }
        else{
            int x; cin >> x;
            khela[i] = x;
        }
    }

    for(int i = q - 1; i >= 0; i -= 1){
        khela[i] = (i == q - 1)?khela[i]: max(khela[i], khela[i + 1]);
    }

    for(int i = 0; i < n; i += 1){
        if(change[i])   vc[i] = max(vc[i], khela[--change[i]]);
        else vc[i] = max(vc[i], khela[0]);
    }

    for(int i: vc) cout << i << ' ';
    cout << '\n';
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