#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, suffix = 0; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    for(int k = 0; k < 2; k += 1){
        bool yes = 1; suffix = 0;
        for(int i = 0; i < n; i += 1){
            if(i + 1 < n){
                vc[i + 1] -= suffix;
                if(vc[i + 1] < 0) yes = 0;
                if(vc[i + 1] >= vc[i]){
                    suffix += vc[i + 1] - vc[i]; vc[i + 1] = vc[i];
                }
            }
        }
        if(yes){
            cout << "YES\n";
            return;
        }
        if(!k) reverse(vc.begin(), vc.end());
    }
    cout << "NO\n";
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