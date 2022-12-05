#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>vc(n);
    for(ll &i: vc) cin >> i;
    bool no = 1;
    sort(vc.begin(), vc.end());
    map<ll, int>colored;

    ll sml = vc[0] + vc[1], smr = vc[n - 1];
    colored[vc[0]] = colored[vc[1]] = 1;
    if(colored[vc[n - 1]] == 1){
        cout << "NO\n";
        return;
    }
    else if(sml < smr){
        cout << "YES\n";
        return;
    }

    colored[vc[n - 1]] = 2;


    for(int i = 2, j = n - 2; i < j; i += 1, j -= 1){
        if(colored[vc[i]] == 2){
            cout << "NO\n";
            return;
        }
        sml += vc[i];
        colored[vc[i]] = 1;

        if(colored[vc[j]] == 1){
            cout << "NO\n";
            return;
        }

        smr += vc[j]; colored[vc[j]] = 2;
        if(sml < smr){
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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